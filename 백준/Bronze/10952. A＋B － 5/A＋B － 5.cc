#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int A, B;

  while(true) {
    cin >> A >> B;
    if(A == 0 && B == 0) {
      break;
    }

    cout << A + B << "\n";
  }

  return 0;
}
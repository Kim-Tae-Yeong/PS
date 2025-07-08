#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, v, num;
  vector<int> arr;
  int ans = 0;

  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> num;
    arr.push_back(num);
  }

  cin >> v;

  for(auto it = arr.begin(); it != arr.end(); it++) {
    if(*it == v) {
      ans++;
    }
  }

  cout << ans << "\n";

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  int score; cin >> score;

  if(score < 60) {
    cout << "F" << endl;
  }
  else if(score >= 60 && score <= 69) {
    cout << "D" << endl;
  }
  else if(score >= 70 && score <= 79) {
    cout << "C" << endl;
  }
  else if(score >= 80 && score <= 89) {
    cout << "B" << endl;
  }
  else {
    cout << "A" << endl;
  }

  return 0;
}
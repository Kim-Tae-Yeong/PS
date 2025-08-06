#include <iostream>
#include <cctype>
#include <math.h>

using namespace std;

int B, len, num;
long long int ans;
string N;

int main() {
  cin.tie(0) -> ios::sync_with_stdio(0);

  cin >> N >> B;

  len = N.length() - 1;
  ans = 0;
  for(auto it = N.begin(); it != N.end(); it++) {
    num = (isdigit(*it)) ? int(*it) - 48 : int(*it) - 55;
    ans += num * pow(B, len);
    len--;
  }

  cout << ans << "\n";

  return 0;
}
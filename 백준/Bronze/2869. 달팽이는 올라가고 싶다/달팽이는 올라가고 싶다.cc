#include <bits/stdc++.h>

using namespace std;

int A, B, V, day, lastV;
int ans;

int main() {
  cin.tie(0) -> ios::sync_with_stdio(0);

  cin >> A >> B >> V;

  if(A == V) {
    ans = 1;
  } else {
    day = A - B;
    lastV = V - A;
    ans = lastV / day;
    if(lastV % day != 0) {
      ans++;
    }
    ans++;
  }

  cout << ans << "\n";

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int N, K;
int cnt = 0;
int ans = 0;

int main() {
  cin.tie(0) -> ios::sync_with_stdio(0);

  cin >> N >> K;

  for(int i = 1; i <= N; i++) {
    if(N % i == 0) {
      cnt++;
      if(cnt == K) {
        ans = i;
        break;
      }
    }
  }

  cout << ans << "\n";

  return 0;
}
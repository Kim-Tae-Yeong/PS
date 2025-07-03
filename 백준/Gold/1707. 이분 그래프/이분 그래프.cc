#include<bits/stdc++.h>
using namespace std;

vector<int> links[30000];
int color[30000];
bool flag = true;

void dfs(int cur, int par){
    for(auto nxt: links[cur]){
        if(nxt == par) continue;
        if(color[nxt] == color[cur]){
            flag = false;
        }
        if(color[nxt] == 0){
            color[nxt] = 3 - color[cur];
            dfs(nxt, cur);
        }
    }
}

int main(){
    int TC; cin >> TC;
    while(TC--){
        int N, M; cin >> N >> M;
        for(int i = 0; i<M; i++){
            int u, v; cin >> u >> v;
            u--; v--;
            links[u].push_back(v);
            links[v].push_back(u);
        }        
        flag = true;
        for(int i = 0; i<N; i++) color[i] = 0;
        for(int i = 0; i<N; i++){
            if(color[i]) continue;
            color[i] = 1;
            dfs(i, -1);
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
        for(int i = 0; i<N; i++) links[i].clear();
    }
    return 0;
}
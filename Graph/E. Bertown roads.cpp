#include<bits/stdc++.h>
using namespace std;
 
void findBridges(int node, int par, int &timer, vector<int> &vis, vector<int> &disc, vector<int> &low, int &bridges, vector<int> al[]){
    
    vis[node] = 1;
    disc[node] = low[node] = timer;
    timer++;
    
    for(int i = 0; i < al[node].size(); i++){
        
        int child = al[node][i];
        
        if(child == par) continue;
        
        if(vis[child] == 1){
            low[node] = min(low[node], disc[child]);
        }
        else{
            
            findBridges(child, node, timer, vis, disc, low, bridges, al);
            
            if(low[child] > disc[node]){
                bridges++;
            }
            
            low[node] = min(low[node],low[child]);
        }
    }
}
void dfs(int node, int par, vector<int> &vis, vector<int> al[], vector<int> &disc){
    
    vis[node] = 1;
    
    for(int i = 0; i < al[node].size(); i++){
        
        int child = al[node][i];
        
        if(child == par) continue;
        
        if(vis[child] == 1){
            if(disc[node] > disc[child]) cout << node <<  " " << child << endl;
        }
        else{
            
            cout << node << " " << child << endl;
            dfs(child, node, vis, al, disc);
        }
    }
}
int main(){
    
    int n,m;
    cin >> n >> m;
    
    std::vector<int> al[n+1];
    int a,b;
    
    while(m--){
        cin >> a >> b;
        al[a].push_back(b);
        al[b].push_back(a);
    }
    
    int bridges = 0;
    vector<int> vis(n+1,0);
    vector<int> disc(n+1);
    vector<int> low(n+1);
    int timer = 0;
    
    findBridges(1, -1, timer, vis, disc, low, bridges, al);
    
    if(bridges != 0){
        cout << 0 << endl;
    }
    else{
        for(int i = 1; i <= n; i++){
            vis[i] = 0;
        }
        dfs(1,-1,vis,al,disc);
    }
}

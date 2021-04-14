#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n,q;
    cin >> n >> q;
    
    int color[n];
    
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> color[i];
        s.insert(color[i]);
    }
    
    int x = s.size();
    
    std::vector<int> col(51,-1);
    
    for(int i = 0; i < n; i++){
        
        if(col[color[i]] == -1){
            col[color[i]] = i + 1;
        }
    }
    
    while(q--){
        
        int qcol;
        cin >> qcol;
        cout << col[qcol] << " ";
        for(int i = 1; i <= 50; i++){
            if(col[i] != -1 && col[i] < col[qcol]){
                col[i]++;
            }
        }
        col[qcol] = 1;
    }
    cout << endl;
}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        int  review[n];
        int x = 0;
        for(int i = 0; i < n; i++){
            cin >> review[i];
            if(review[i] == 1 || review[i] == 3) x++;
        }
        
        cout << x << endl;
    }
}

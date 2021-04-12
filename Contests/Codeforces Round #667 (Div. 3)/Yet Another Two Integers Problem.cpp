//Greedy Algo
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        ll a,b;
        cin >> a >> b;
        
        if(a > b){
            swap(a,b);
        }
        ll d = b - a;
        ll moves = 0;
        
        while(d){
            
            for(int i = 10; i >= 1; i--){
                if(d >= i){
                    moves += d/i;
                    d %= i;
                    break;
                }
            }
        }
        
        cout << moves << endl;
    }
}

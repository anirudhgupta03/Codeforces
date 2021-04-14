//Nice Question
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int num1[9] = {1,10,100,1000,10000,100000,1000000,10000000,100000000};
 
int main(){
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll a,b,c;
        cin >> a >> b >> c;
        
        ll x = num1[c-1];
        
        ll y = num1[a-1];
        ll z = num1[b-1];
        
        y += x;
        
        cout << y << " " << z << endl;
        
    }
}

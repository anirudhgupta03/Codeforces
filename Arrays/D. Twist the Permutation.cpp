//https://codeforces.com/contest/1650/problem/D
//Ref: https://www.youtube.com/watch?v=BqhUrnwrgv4
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        vector<ll> a(n);
        
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<ll> v(n);
        
        for(ll i = 0; i < n; i++){
            v[i] = i + 1;
        }
        
        vector<ll> res(n);
        for(ll i = n - 1; i >= 0; i--){
            ll j;
            for(j = 0; j < n; j++){
                if(a[j] == v[i]){
                    break;
                }
            }
            if(j == i) continue; 
            if(j != i) res[i] = (j + 1) % (i + 1);
            
            for(ll shift = 0; shift <= j; shift++){
                ll ele = a[0];
                for(ll k = 0; k < i; k++){
                    a[k] = a[k + 1];
                }
                a[i] = ele;
            }
        }
    }
	return 0;
}

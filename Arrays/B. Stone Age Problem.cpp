//Ref: https://codeforces.com/contest/1679/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
int main() {
        ll n, q;
        cin >> n >> q;
        
        vector<pair<ll,ll>> a(n);
        ll sum = 0;
        
        for(ll i = 0; i < n; i++){
            cin >> a[i].first;
            sum += a[i].first;
            a[i].second = q;
        }
        
        ll pre = q, type, val, ind, ele;
        // cout << q << endl;
        while(q--){
            cin >> type;
            if(type == 1){
                cin >> ind >> ele;
                if(a[ind - 1].second == pre){
                    sum -= a[ind - 1].first;
                }
                else{
                    sum -= val;
                }
                a[ind - 1].first = ele;
                sum += a[ind - 1].first;
                a[ind - 1].second = pre;
            }
            else{
              cin >> ele;  
              val = ele;
              pre = q;
              sum = ele*n;
            }
            cout << sum << endl;
        }
	return 0;
}

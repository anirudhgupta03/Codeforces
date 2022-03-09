//https://codeforces.com/contest/1650/problem/C
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pll pair<ll,ll>
#define plpll pair<ll,pair<ll,ll>> 
 
struct cmp{
  bool operator()(plpll &p1, plpll &p2){
      return p1.second.second < p2.second.second;
  }  
};
 
bool mycmp1(plpll &p1, plpll &p2){
    return p1.second.first < p2.second.first;
}
 
bool mycmp2(pll &p1, pll &p2){
    return p1.second < p2.second;
}
 
int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n,m;
        cin >> n >> m;
        
        vector<plpll> v(m);
        
        for(int i = 0; i < m; i++){
            ll x, w;
            cin >> x >> w;
            v[i] = {i + 1,{x,w}};
        }
        
        sort(v.begin(),v.end(), mycmp1);

        priority_queue<plpll,vector<plpll>,cmp> pq;
        
        for(int i = 0; i < m; i++){
            pq.push({v[i].first,{v[i].second.first, v[i].second.second}});
            if(pq.size() > 2*n) pq.pop();
        }
        
        vector<pll> res(2*n);
        int ind = 0;
        ll sum = 0;
        
        while(!pq.empty()){
            sum += pq.top().second.second;
            res[ind] = {pq.top().first,pq.top().second.first};
            pq.pop();
            ind++;
        }
        sort(res.begin(),res.end(),mycmp2);
        
        int lo = 0, hi = 2*n - 1;
        cout << sum << endl;
        while(lo < hi){
            cout << res[lo].first << " " << res[hi].first << endl;
            lo++;
            hi--;
        }
        cout << endl;
    }
	return 0;
}

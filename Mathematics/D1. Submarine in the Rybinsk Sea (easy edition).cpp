//http://codeforces.com/contest/1195/problem/D1
/*
Let's consider the test case
3
12 33 45

Numbers which will be formed are f(a1,a1),f(a2,a2),f(a3,a3),f(a1,a2),f(a2,a1),f(a1,a3),f(a3,a1),f(a2,a3),f(a3,a2)
f(a1,a1) = 1122
f(a1,a2) = 1323
f(a1,a3) = 1425
f(a2,a1) = 3132
f(a2,a2) = 3333
f(a2,a3) = 3435
f(a3,a1) = 4152
f(a3,a2) = 4353
f(a3,a3) = 4455
ans=(2+3+5)*3*1+(2+3+5)*3*10+(1+3+4)*100+(1+3+4)*1000
*/
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll pw(int base,int exponent){
    if(exponent==0) 
        return 1;
    if(exponent==1) 
        return base;
    
    if(exponent%2==0){
        return (pw(base,exponent/2)*pw(base,exponent/2))%998244353;
    }
    return (base*pw(base,(exponent-1)/2)*pw(base,(exponent-1)/2))%998244353;
}
int main(){
    ll n;
    cin>>n;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    ll sum=0;
    
    string str;
    str=to_string(v[0]);
    ll s,ans=0,x;
    for(int i=1;i<=2*str.size();i++){
        if(i%2==1){
            s=0;
            for(int i=0;i<v.size();i++){
                s=(s+v[i]%10);
                v[i]=v[i]/10;
            }
            
        }
        ans=(ans%998244353+((s*n)%998244353)*(pw(10,i-1)%998244353))%998244353;
    }
    cout << ans << endl;
    return 0;
}

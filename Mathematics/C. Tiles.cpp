//http://codeforces.com/contest/1178/problem/C

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
int main(){
    int w,h;
    cin>>w>>h;
    
    ll ans=1;
    for(int i=1;i<=h-1;i++){
        ans=(ans*2)%998244353;
    }
    ans=(ans*4)%998244353;
    for(int i=1;i<=w-1;i++){
        ans=(ans*2)%998244353;
    }
    cout << ans << endl;
    return 0;
}

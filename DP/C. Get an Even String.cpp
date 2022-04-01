//https://codeforces.com/contest/1660/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll ind, char prev, string &s, int flag, vector<vector<vector<int>>> &dp){
    
    if(ind == s.size()){
        return flag == 1;
    }
    
    if(dp[ind][prev - 'a'][flag] != -1){
        return dp[ind][prev - 'a'][flag];
    }
    ll ans = INT_MAX;
    
    ans = min(ans, solve(ind + 1, prev, s, flag, dp) + 1);
    
    if(flag){
        if(s[ind] == prev){
            ans  = min(ans, solve(ind + 1, 'z' + 1, s, 0, dp));
        }
        else{
            ans = min(ans, solve(ind + 1, s[ind], s, 1, dp) + 1);
        }
    }
    else{
        ans = min(ans, solve(ind + 1, s[ind], s, 1, dp));
    }
    return dp[ind][prev- 'a'][flag] = ans;
}
int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        vector<vector<vector<int>>> dp(s.size(), vector<vector<int>>(27, vector<int>(2,-1)));
        cout << solve(0, 'z' + 1, s, 0, dp) << endl;
    }
	return 0;
}

//http://codeforces.com/contest/343/problem/B

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
    
    stack<char> st;
    
    for(int i=0;i<s.size();i++){
        
        if(!st.empty()&&st.top()==s[i]){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
        
    }
    if(st.empty()){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    return 0;
}

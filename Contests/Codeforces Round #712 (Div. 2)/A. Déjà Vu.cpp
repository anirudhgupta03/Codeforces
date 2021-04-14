#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    
    int l = 0, r = s.size() - 1;
    
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        string s;
        cin >> s;
        
        string s1 = "a" + s;
        string s2 = s + "a";
        
        if(!isPalindrome(s1)){
            cout << "YES" << endl;
            cout << s1 << endl;
        }
        else if(!isPalindrome(s2)){
            cout << "YES" << endl;
            cout << s2 << endl;
        }
        else{
            cout <<"NO"<< endl;
        }
    }
}

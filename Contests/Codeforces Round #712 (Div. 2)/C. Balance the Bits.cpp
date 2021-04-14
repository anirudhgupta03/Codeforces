//Tricky Question
//Consider the string 111000011111 to understand the approach
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') count++;
        }
        
        if(count % 2 != 0 || s[0] == '0' || s[n-1] == '0'){
            cout << "NO" << endl;
            continue;
        }
        
        string s1,s2;
        int c = 0;
        
        for(int i = 0; i < n; i++){
            
            if(s[i] == '1'){
                
                if(count){
                    s1.push_back('(');
                    s2.push_back('(');
                    count -= 2;
                }
                else{
                    s1.push_back(')');
                    s2.push_back(')');
                }
            }
            else{
                
                if(c % 2 == 0){
                    s1.push_back('(');
                    s2.push_back(')');
                    c++;
                }
                else{
                    s1.push_back(')');
                    s2.push_back('(');
                    c++;
                }
            }
        }
        cout << "YES" << endl;
        cout << s1 << endl;
        cout << s2 << endl;
    }
}

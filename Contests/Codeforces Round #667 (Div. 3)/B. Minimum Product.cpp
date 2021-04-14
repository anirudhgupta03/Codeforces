#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        ull a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        
            
        ull temp1 = a, temp2 = b, temp3 = n, ans;
        
        ull d = temp1 - x;
        
        if(d <= temp3){
            temp1 = x;
            temp3 -= d;
        }
        else{
            temp1 = temp1 - temp3;
            temp3 = 0;
        }
        if(temp3 != 0){
            
            d = temp2 - y;
            
            if(d <= temp3){
                temp2 = y;
                temp3 -= d;
            }
            else{
                temp2 = temp2 - temp3;
                temp3 = 0;
            }
        }
        
        ans = temp1*temp2;
        
        temp1 = a, temp2 = b, temp3 = n;
        
        d = temp2 - y;
            
        if(d <= temp3){
            temp2 = y;
            temp3 -= d;
        }
        else{
            temp2 = temp2 - temp3;
            temp3 = 0;
        }
        
        if(temp3 != 0){
            
            d = temp1 - x;
            
            if(d <= temp3){
                temp1 = x;
                temp3 -= d;
            }
            else{
                temp1 = temp1 - temp3;
                temp3 = 0;
            }
        }
        
        if(temp1*temp2 < ans) ans = temp1*temp2;
        
        cout << ans << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    long long arr[n],prefix[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    } 
    if(prefix[n-1]%3!=0){
        cout << 0 << endl;
        return 0;
    }
    
    long long required=prefix[n-1]/3,count=0,ans=0;
    for(int i=0;i<n-1;i++){
        if(prefix[i]==2*required) ans=ans+count;
        if(prefix[i]==required) count++;
    }
    
    cout << ans << endl;
    return 0;
}

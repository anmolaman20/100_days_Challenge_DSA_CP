#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string str;
    cin>>str;
    int ans = 0;

    for(int i=1;i<n+1;i++){
        int m = 1;
        while(i*m<=n){
            if(str[i*m-1]=='1')break;
            if(str[i*m-1]=='0') ans += i;
            str[i*m-1]='2';
            m++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
return 0;
}



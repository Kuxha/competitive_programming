#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;

    int ans = 0;

    for(int i=0;i<n;i++){
        if(s[i] == '.'){
            ans++;
        }
    }

    ans = ans + d;
    cout<<ans<<"\n";

   


}
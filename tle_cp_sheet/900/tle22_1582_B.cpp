#include <bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        long long ans = m[1]*(pow(2,m[0]));
        cout<<ans<<"\n";
        
    }


}
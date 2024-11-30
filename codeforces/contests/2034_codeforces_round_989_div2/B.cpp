#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){
        int n,m,k;
        cin>>n>>m>>k;

        string s;
        cin>>s;

        int ans = 0;
        int curr = 0;
        for(int i =0;i<n;){
           if(s[i] == '0'){
             curr++;

                if(curr == m ){
                    i = i +k;
                    ans++;
                    curr = 0;
                }else{
                    i++; 
                }


           }else{
            curr = 0;
            i++;
           }


           
        }

        cout<<ans<<"\n";
    }


}
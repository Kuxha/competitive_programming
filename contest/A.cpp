#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;


    while(t-->0){


        int n;
        cin>>n;
        vector<int> a;
        map<int,int> m;
   
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            if(m.find(x) == m.end()){
                m[x] = 1;
            }else{
               m[x]++;
      
            }

        }

      int ans = 0;
      for (auto i : m){
         
         ans = ans + (i.second/2);

      }  

        cout<<ans<<"\n";

      }

      return 0;

}
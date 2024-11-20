#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){

      int n,k;
      cin>>n>>k;

      vector<int> v;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
      }


      sort(v.begin(),v.end());
      int curr = 0;
      int maxx = 0;

      for(int i=1;i<n;i++){
          if((v[i] - v[i-1])<=k){
            curr++;
          }else{
               maxx = max(maxx,curr);
               curr = 0;
          }
      }
      maxx = max(maxx,curr);
      maxx++;
      cout<<(n-maxx)<<"\n";
      
      
      
      }

    


}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){

      int n,q;
      cin>>n>>q;
      vector<int> v;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
      }

      vector<int> leftSum(n+2,0);
      vector<int> rightSum(n+2,0);

      for(int i=0;i<n;i++){
         leftSum[i+1] = leftSum[i]+v[i];
      }
   

      for(int i=n-1;i>=0;i--){
         rightSum[i+1] = rightSum[i+2]+v[i];
      }
   


      for(int i=0;i<q;i++){
      int l,r,k;
      cin>>l>>r>>k;

      long long sum = 0;
      sum = sum + ((r-l+1)*k)+leftSum[l-1] + rightSum[r+1];

      if(sum%2 != 0 ){
   
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
      }

    }


}
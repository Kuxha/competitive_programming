#include <bits/stdc++.h>
//https://codeforces.com/contest/1696/problem/B

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 

    while(t-->0){

      long long n;
      cin>>n;

      vector<int> a;

      int maxm = 0;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;

        a.push_back(x);



      }
      if(n == 1){
        cout<<"0\n";
        continue;
      }
      int maxmright = a[n-1];
      int minmleft = a[0];

      for(int i=0;i<n;i++){
        if(i == 0 ){
          maxm = max(maxm,a[n-1] - a[0]);
        }else{
          maxm = max(maxm,a[i-1] - a[i]);
          maxmright = max(maxmright,a[i]);
        }

        if(i == n -1){

        }else{
          minmleft = min(minmleft,a[i]);
        }


      }

      // now get 

      maxm = max(maxm,maxmright-a[0]);
      maxm = max(maxm,a[n-1]-minmleft);

      cout<<maxm<<"\n";

      }
   

  
    


}
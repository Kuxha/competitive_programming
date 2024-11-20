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

      string s;

      getline(cin,s);
      getline(cin,s);
      int curr = 1;
      int maxx = 1;

      for(int i=1;i<n;i++){
          if(s[i] == s[i-1]){
            curr++;
          }else{
            maxx = max(maxx,curr);
            curr=1;
          }
      }
      maxx = max(maxx,curr);
      cout<<maxx+1<<"\n";
      
      
      
      }

    


}
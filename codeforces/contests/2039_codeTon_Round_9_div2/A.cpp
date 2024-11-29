#include <bits/stdc++.h>
//https://codeforces.com/contest/2039/problem/B
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string es ;
    getline(cin,es);
    while(t-->0){
    
      string s;

      getline(cin,s);

      int n = s.length();
      if(n == 1){
        cout<<"-1"<<"\n";
        continue;
      }

      if(n == 2 ){
        if(s[0] == s[1]){
          cout<<s<<"\n";
        }else{
          cout<<"-1"<<"\n"; 
        }
        continue;
      }

      // check for two same

      bool poss = false;
      string ans = "";
      for(int i =1;i<n;i++){
        if(s[i] == s[i-1]){
          poss = true;
          ans = ans +  s[i-1] + s[i];
          break;
        }
      }

      if(poss){
        cout<<ans<<"\n";
        continue;
      }


      for(int i =1;i<(n-1);i++){
        if(s[i] != s[i-1] && s[i] != s[i+1] && s[i-1]!=s[i+1]){
          poss = true;
          ans = ans +  s[i-1] + s[i] +  s[i+1];
          break;
        }
      } 

      if(poss){
        cout<<ans<<"\n";
      }else {
          cout<<"-1"<<"\n"; 
      }

  
    }


}
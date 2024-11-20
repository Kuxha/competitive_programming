//https://codeforces.com/problemset/problem/1666/D

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){
       string s,t;
       cin>>s>>t;
       int x = t.length()-1;

       bool b = false;
       map<char,int> m;
       for(int i= s.length()-1;i>=0;i--){
          if(x == -1){
            b = true;
            break;
          }
          if(t[x] == s[i]){
            if(m.find(s[i]) == m.end()){
                x--; 
            }else{
              b = false;
                break;
            }
            
          }else{
            m[s[i]]=1;
          }
       }
          if(x == -1){
            b = true;
         
          }
       if(b){
        cout<<"YES\n";
       }else{
        cout<<"NO\n";
       }
      
      
      
      }

    


}
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
      int lastNonZero = -1;
      int firstNonZero = -1;

      int zeros = 0;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;

        a.push_back(x);
        if(x == 0){
          zeros++;
        }else{
          lastNonZero = i;
        }

   

      }

      if(zeros == n){
        cout<<"0\n";
        continue;
      }


      for(int i=0;i<n;i++){
        if(a[i]!=0){
          firstNonZero = i;
          break;

        }
      }
      bool zeroinmiddle = false;
      for(int i=firstNonZero;i<=lastNonZero;i++){
        if(a[i]==0){
          zeroinmiddle = true;
          break;
          
        }
      }

      if(zeroinmiddle){
        cout<<"2\n";
      }else{
        cout<<"1\n";
      }





        

      }
   

  
    


}
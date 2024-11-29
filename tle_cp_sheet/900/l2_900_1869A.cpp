#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/1869/A
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){

        int n;
        cin>>n;
        int x= 0; 

        int zeros = 0;
        for(int i=0;i<n;i++){
            
             cin>>x;
             if(x == 0){
                zeros++;
             }
     
        }

        if(zeros == n){
            cout<<"0"<<"\n";  
        }else{
            if(n%2 == 0){
            cout<<"2"<<"\n";
            cout<<"1 "<<n<<"\n";
            cout<<"1 "<<n<<"\n";
            }else{
            cout<<"4"<<"\n";
            cout<<"2 "<<n<<"\n";
            cout<<"2 "<<n<<"\n";
            cout<<"1 "<<2<<"\n";
            cout<<"1 "<<2<<"\n";
            }

        }
  
 
   
    }


}
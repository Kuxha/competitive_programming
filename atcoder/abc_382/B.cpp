#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;


    for(int i=n-1;i>=0;i--){

        if(d>0){
            if(s[i] == '@'){
             s[i] = '.';
             d--;
            }
          
        }

    }



    cout<<s<<"\n";

   


}
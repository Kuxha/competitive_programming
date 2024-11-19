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

        if(n<=4){
            cout<<"-1"<<"\n";
            continue;
        }



        vector<int> ans;
        for(int i=1;i<=n;i++){

            if(i %2 != 0){

             if(i == 5){
                continue;
             }

             ans.push_back((i));

            }


        }

           ans.push_back((5));
                      ans.push_back((4));
       
        for(int i=1;i<=n;i++){

            if(i %2 == 0){

             if(i == 4){
                continue;
             }

                     ans.push_back((i));

            }


        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
   
        cout<<"\n";
    
      }

      return 0;

}
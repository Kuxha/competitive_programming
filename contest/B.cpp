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
        vector<int> a;
        set<int> s;
        map<int,int> m;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            s.insert(x);
            m[x]++;

        }

        int x = n - 2;
        int aa = 0;
        int bb = 0;
        for(int i=0;i<n;i++){
            if(x%a[i] == 0 ){
                // find if other exists

 
                if(s.find(x/a[i]) != s.end()){

                    if(a[i] == x/a[i] ){

          
                        // check if count mor ethan two 

                        if(m[a[i]]>1){
                             aa = a[i];
                             bb = x/a[i];
                             break;
                        }else{


                        }

                    }else{
                   aa = a[i];
                    bb = x/a[i];
                    break;
                    }
           
                }
            }
        }



   
        cout<<aa<<" "<<bb<<"\n";
    
      }

      return 0;

}
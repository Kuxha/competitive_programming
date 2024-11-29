#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/1828/B
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){

        int n;
        cin>>n;

        vector<int> v;

        int x= 0; 
        for(int i=0;i<n;i++){
            
            cin>>x;
            if(x != (i+1)){
                v.push_back(abs(i+1 -x));
            }
     
        }
        int gcd = v[0];
        for(int i=1;i<v.size();i++){
            gcd = __gcd(v[i],gcd);
        }

   
        cout<<gcd<<"\n";
 
   
    }


}
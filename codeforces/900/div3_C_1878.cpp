#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){
        long long n,k,x;
        cin>>n>>k>>x;

        long long low = ((k)*(k+1))/2;
        long long high = ((n*(n+1))/2) -(((n-k)*(n-k+1))/2); 

        if(x>=low || x<=high){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }


}
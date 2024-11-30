#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;


    vector<pair<int,int>> a;
    int minm = 200001;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x<minm){
             a.push_back({x,i+1});
             minm = x;
        }

    }

    sort(a.begin(), a.end());


    // for(int i =0;i<a.size();i++){
    //   cout<<a[i].first<<" "<<a[i].second<<"\n";

    // }


    // cout<<"\n";

    int b[m];

    for(int i =0;i<m;i++){
        cin>>b[i];

        int target = b[i];
        int start = 0;
        int end = a.size()-1;

        int ans = -1;

        // cout<<"target = "<<target<<"\n";


        while(start<=end){

        // cout<<"start = "<<start<<"\n";
        // cout<<"end = "<<end<<"\n";
            int mid = start + (end - start)/2;
        // cout<<"mid = "<<mid<<"\n";
        // cout<<"a[mid].first "<< a[mid].first<<"\n";
        
            if(a[mid].first<=target){

                // cout<<"a[mid].first<=target"<<" so start = "<<(mid+1)<<"\n";

               ans = a[mid].second;
               start = mid+1;
            
            }else{
                // cout<<"a[mid].first>target"<<" so end = "<<(mid-1)<<"\n";
                end = mid-1;
        
            }
        }

        cout<<ans<<"\n";


    }




}
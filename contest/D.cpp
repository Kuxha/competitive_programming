#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;


    while(t-->0){


        int n,m,L;
        cin>>n>>m>>L;
        // cout<<"n "<<n<<" m "<<m<<" L "<<L<<"\n";
        // first hurdles
        vector<pair<int,int>> hurdles;
    
        for(int i=0;i<n;i++){
            int low,high;
            cin>>low>>high;
            hurdles.push_back({low,high});
        }

        // cout<<"hurdle size = "<<hurdles.size()<<"\n";

        int hurdle = 0;
        // power ips

        priority_queue<long long> maxHeap;

        int currHurdle = 0;
        long long ans=0;

        bool nopes = false;

        long long power = 1;

    
        for(int i=0;i<m;i++){
            int loc;
            long long val;
            cin>>loc>>val;



            if(nopes || hurdle == hurdles.size()){
                continue;
            }

            currHurdle = hurdles[hurdle].first;
            // cout<<"curr hurdle = "<<currHurdle<<"\n";
            // cout<<loc<<" = loc of bonus"<<"\n";
            // cout<<val<<" = value"<<"\n";
            if(loc<currHurdle){
            // pu to max heap
            // cout<<"pushed value to max heap"<<"\n";
            maxHeap.push(val);
            }else{
                
                // cout<<" loc >=currhurdle"<<"\n";
                // while loop mein go over the 

                long long diff =  hurdles[hurdle].second - hurdles[hurdle].first;
                diff = diff+2; // this is reqd to go over
                // cout<<" hurdles[hurdle].second = "<< hurdles[hurdle].second<<" ";
                // cout<<" hurdles[hurdle].first = "<< hurdles[hurdle].first<<" \n";

                // cout<<"curr power = "<<power<<"\n";
                // cout<<"diff = "<<diff<<"\n";
                if(power >= diff){
                    // cout<<"power greater so keep pushing"<<"\n";
                    maxHeap.push(val);  
                }else{

                // cout<<"power less so keep we pop"<<"\n";
                    // keep popping power ups

                    while(!maxHeap.empty()){
                        power = power + maxHeap.top();
                        // cout<<"top of max heap poppped = "<<maxHeap.top()<<"\n";
                        // cout<<"new power = "<<power<<"\n";
                        maxHeap.pop();
                        ans++;
                        if(power >= diff){
                            break;
                          }
                    }


                    //  cout<<"curr power = "<<power<<"\n";
                    //  cout<<"diff = "<<diff<<"\n";
                     if(power >= diff){
                        hurdle++;
                     }else{
                        nopes = true;
                     }
                }

            }

        }

        //cout
        // cout<<"2nd iter"<<"\n";
        for(int i=hurdle;i<hurdles.size();i++){

               int diff =  hurdles[i].second - hurdles[i].first;
                diff = diff+2; // this is reqd to go over
                // cout<<" hurdles[hurdle].second = "<< hurdles[hurdle].second<<" ";
                // cout<<" hurdles[hurdle].first = "<< hurdles[hurdle].first<<" \n";

                // cout<<"curr power = "<<power<<"\n";
                // cout<<"diff = "<<diff<<"\n";

                if(power >= diff){
                    continue;
                }else{

                // cout<<"power less so keep we pop"<<"\n";
                    // keep popping power ups

                    while(!maxHeap.empty()){
                        power = power + maxHeap.top();
                        // cout<<"top of max heap poppped = "<<maxHeap.top()<<"\n";
                        // cout<<"new power = "<<power<<"\n";
                        maxHeap.pop();
                        ans++;
                        if(power >= diff){
                            break;
                          }
                    }


                    //  cout<<"curr power = "<<power<<"\n";
                    //  cout<<"diff = "<<diff<<"\n";
                     if(power >= diff){
                        // hurdle++;
                     }else{
                        nopes = true;
                     }


                }
        }

        if(nopes){
            cout<<"-1\n";

        }else{
            cout<<ans<<"\n";
        }
 



      }

      return 0;

}
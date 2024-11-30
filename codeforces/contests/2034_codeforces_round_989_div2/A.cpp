#include <bits/stdc++.h>
using namespace std;

// from geeks for geeks - https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
long long lcm(int a, int b)
{

    return (a / gcd(a, b)) * b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t-->0){
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<"\n";
    }


}
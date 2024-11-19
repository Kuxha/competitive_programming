#include <bits/stdc++.h>
using namespace std;

void search(vector<int>& permutation, vector<bool>& chosen, int n);

int main() {
    int n;
    cin >> n;
    cout << n << " = =  n \n";

    vector<int> permutation;
    vector<bool> chosen(n + 1, false); // Initialize chosen array to false

    search(permutation, chosen, n);

    cout<<"\n ---\n now we do ---\n";
    vector<int> pm;
    for(int i=1;i<=n;i++){
        pm.push_back(i);
    }

    do{
           for (int num : pm) {
            cout << num << " ";
        }
    cout << endl; // Print a newline after each permutation
      
    }  while(next_permutation(permutation.begin(),permutation.end())){

    }
    
     for (int num : pm) {
            cout << num << " ";
        }
    cout << endl; // Print a newline after each permutation


    return 0;
}

void search(vector<int>& permutation, vector<bool>& chosen, int n) {
    if (permutation.size() == n) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl; // Print a newline after each permutation
        return;
    } else {
        int i=0;
        for (i = 1; i <= n; i++)
        { // Start from 1 to n
            if (!chosen[i]){
            chosen[i] = true;
            permutation.push_back(i);
            search(permutation, chosen, n);
            chosen[i] = false;
            permutation.pop_back();
            }
        }
    }
}

/// 1
/// 1


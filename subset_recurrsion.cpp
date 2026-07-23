#include<bits/stdc++.h>
using namespace std;

/*
A subset is formed by deciding for every element:   
Take it
or
Don't take it
use bit manipulation and

algo:-
// Generate all possible masks from 0 to 2^n - 1.
// Each mask represents one subset.
// For every bit j:
// bit = 1 -> include arr[j]
// bit = 0 -> exclude arr[j]
// Example: mask = 5 (101₂) -> {arr[0], arr[2]}
*/

/*
// subset generation using loops:-
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int m = pow(2,n);
    for(int i=0;i<m;i++){
        vector<int> subset;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                subset.push_back(arr[j]);
            }
        }
        int s = subset.size();
        for(int j=0;j<s;j++){
            cout << subset[j] << " ";
        }
        cout << endl;
    }
}
*/

/*
Bitmask:
bit = 1 -> take
bit = 0 -> don't take

Recursion:
branch 1 -> take
branch 2 -> don't take
*/

// subset generation using loops:-
vector<int> subsetFind(int arr[], vector<int> sub){
    
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    vector<int> subset;
    subsetFind(arr,subset,)
}
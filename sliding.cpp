#include<bits/stdc++.h>
using namespace std;

/*
// fixed:-
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int k=3;
    int sum=0;
    int i;
    for(i=0;i<k;i++){
        sum+=arr[i];
    }
    cout << sum << endl;
    for(int i=k;i<n;i++){
        sum = sum - arr[i-k];
        sum += arr[i];
        cout << sum << endl;
    }
}
*/

// variable:- Find the smallest subarray whose sum is at least 7.
int main(){
    int arr[] = {2,3,1,2,4,3};
    int n = sizeof(arr)/sizeof(int);
    int l=0, r=0, sum=0, target=7, min=n, beg=-1,end=-1;
    for(int r=0;r<n;r++){
        sum = sum + arr[r];
        while(sum>=target){
            if((r-l)<min){
                min = r-l+1;
                beg = l;
                end = r;
            }
            sum = sum - arr[l];
            l++;
        }
    }
    for(int i=beg;i<=end;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << min;

}

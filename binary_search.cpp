#include<iostream>
using namespace std;

/*
// binary search using reccursion:-
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int bin(int low,int high,int num){
    if(low>high)    return -1;
    int mid=low+(high-low)/2;
    if(num==arr[mid])   return mid;
    if(num > arr[mid])  return bin(mid+1,high,num);
    else    return bin(low,mid-1,num);
}
int main(){
    int n = sizeof(arr)/sizeof(int);
    int num = 8;
    int low = 0,high = n-1;
    cout << bin(low,high,num);
}
*/

/* upper bound and lower bound */
// lower bound:- The first element that is greater than or equal to (>=) the target.
// it gives first occurence of the target
// upper bound:- The first element that is strictly greater than (>) the target.
// it gives the position just after the last occurence.

// trick:- So the number of occurrences is:- upper_bound - lower_bound
int arr[] = {1, 2, 4, 4, 4, 6, 8};
int lowerBound(int n, int target){
    int low = 0;
    int high = n - 1;
    int ans=n;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid]==target){
            ans=mid;
            high = mid-1;
        }else if(arr[mid]>target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int upperbound(int n,int target){
    int low = 0;
    int high = n - 1;
    int ans=n;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid]>target){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int t = 4,n=7;
    cout << lowerBound(n,t) << endl;
    cout << upperbound(n,t) << endl;
}

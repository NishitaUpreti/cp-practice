#include<iostream>
using namespace std;

void rev(int* arr, int i,int j){
    while(i<=j){
        int temp = arr[i];
        // cout << arr[j] << endl;
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    /*
    // Traversing:-
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // sum,avg,max:-
    int sum=0,max=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int m2=0;
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]>m2){
            m2 = arr[i];
        }
    }
    cout << "SUM :- " << sum << endl;
    cout << "AVG :- " << sum/5 << endl;
    cout << "MAX :- " << max << endl;
    cout << "SEC MAX :- " << m2 << endl;

    // reverse
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // rotate:- by 7 (brute force)
    int k=7;
    k=k%n;
    cout << k << endl;;
    int last=arr[n-1];
    for(int j=0;j<k;j++){
        for(int i=n-1;i>=0;i--){
            if(i==0){
                arr[i]=last;
                last = arr[n-1];
            }else{
                arr[i] = arr[i-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    // rotate (optimized):- 1 2 3 4 5 by k=7
    int k=8;
    k=k%n;
    cout << k << endl;
    // reverse entire array:- 5 4 3 2 1
    rev(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    rev(arr,0,k-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    rev(arr,k,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // // suffix
    // int s=0;
    // for(int i=n-1;i>=0;i--){
    //     arr[i] = arr[i]+s;
    //     s = arr[i]; 
    // }
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }

}

/*
// leetcode 724
// pivot index:- 
int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0,p2=0, left[n], right[n], j=n-1;
        for(int i=0; i<n; i++){
            left[i] = nums[i]+p1;
            p1 = left[i];

            right[j] = p2+nums[j];
            p2 = right[j];
            j--;
        }
        for(int i=0; i<n; i++){
            int l,r;
            if(i==0){
                l = 0;
            }else{
                l = left[i-1];
            }
            if(i==n-1){
                r=0;
            }else{
                r = right[i+1];
            }
            if(l==r){
                return i;
            }  
             
        }
        return -1;
    }
*/

// 523,643,813,53,152,644:-



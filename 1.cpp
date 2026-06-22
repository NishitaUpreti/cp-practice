#include<iostream>
using namespace std;
// Traversing:-
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}

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
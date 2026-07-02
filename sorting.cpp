#include<iostream>
using namespace std;

// bubble sort:-
// selection sort:-
// WAP to find out the largest possible digit using array elements:-
// driver code:-
// 215, 1122, 75, 2037, 
// relative sort array:-
// insertion sort:-
// count sort:-
// 451, 347, 409, 3193 912:- 
// 
int main(){
    int arr1[] = {2,3,1,3,2,4,6,7,9,2,19};
    int arr2[] = {2,1,4,3,9,6};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);

    int ans[n1];
    int freq[1000];

    for(int i=0;i<n2;i++){
        freq[arr1[i]]++;
    }
    cout << freq[2];

    // couldn't do due to test, will complete by tomm.

}

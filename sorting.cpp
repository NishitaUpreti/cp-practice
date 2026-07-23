#include<bits/stdc++.h>
using namespace std;

// bubble sort:-
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            return;
        }
    }
}

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        for(int k=0;k<n;k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int left,int right){
    int pivot = arr[right];
    int j = left-1;
    for(int i=left;i<right;i++){
        if(arr[i]<pivot){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[right],arr[j+1]);
    return j+1;
}
void quickSort(int arr[], int left, int right){
    if(left<right){
        int q = partition(arr,left,right);
        quickSort(arr,left,q-1);
        quickSort(arr,q+1,right);
    }
}


void merge(int arr[],int beg, int mid, int end){
    int i=beg;
    int j = mid+1;
    int k=0;
    int temp[end-beg+1];
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }
    for(int l=0;l<k;l++){
        arr[beg+l] = temp[l];
    }
}
void mergesort(int arr[], int beg, int end){
    if(beg<end){
        int mid = beg+(end-beg)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}

void countSort(int nums[], int n) {
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>max) max = nums[i];
    }
    int count[max+1]={0};
    for(int i=0;i<n;i++){
        count[nums[i]]++;
    }
    int j=0;
    for(int i=0;i<max+1;i++){
        if(count[i]!=0){
            nums[j] = i;
            j++;
            count[i]--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
        
}

// WAP to find out the largest possible digit using array elements:-
// driver code:-
// 215, 1122, 75, 2037, 
// relative sort array:-
// count sort:-
// 451, 347, 409, 3193 912:- 
// 
int main(){
    /*
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

    // bubble sort:-
     int arr2[] = {2,1,4,3,9,6};
     int n = sizeof(arr2)/sizeof(int);
     bubble(arr2,n);
     for(int i=0;i<n;i++){
        cout << arr2[i] << " ";
     }
     cout << endl;
     

    // selection sort:-
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // insertion sort:-
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // quick_sort:-
    int arr[] = {5,1,4,3,2};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    int arr[] = {5,1,4,3,2};
    int n = sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    */
    int arr[] = {2,3,1,3,2,4,6,7,9,2,19};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr,n);
    
}

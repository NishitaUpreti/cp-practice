#include<bits/stdc++.h>
using namespace std;

/* next greater element:- */
void push(int stack[], int val, int& top, int size){
        if(top!=size-1){
            top++;
            stack[top] = val;
        }
    }
int pop(int stack[], int& top){
    if(top==-1){
        return 0;
    }else{
        int val = stack[top];
        top--;
        return val;
    }
}
int main(){
    int arr[] = {4,12,5,3,1,2,5,3,1,2,4,6};
    int n = sizeof(arr)/sizeof(int);
    int nge[n];
    int stack[n];
    int top=-1;
    for(int i=n-1;i>=0;i--){
        if(top==-1){
            nge[i] = -1;
            push(stack,arr[i],top,n);
        }
        else {
            while(top!=-1 && arr[i]>=stack[top] ){
                pop(stack,top);
            }
            if(top!=-1){
                nge[i] = stack[top];
            }else{
                nge[i] = top;
            }
            push(stack,arr[i],top,n);
        }
    }
    for(int i=0;i<n;i++){
        cout << nge[i] << " ";
    }
    cout << endl;
}

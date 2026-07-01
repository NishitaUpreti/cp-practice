#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*
    int arr[][2] = {{1,2},{3,4},{5,6}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        int m = sizeof(arr[i])/sizeof(arr[0][0]);
        for(int j=0;j<m;j++){
            arr[i][j] = arr[i][j]+sum;
            sum = arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int m = sizeof(arr[i])/sizeof(arr[0][0]);
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "  ";
    }
    cout << endl;
    */

    // spiral matrix
    int spiral[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n1 = sizeof(spiral)/sizeof(spiral[0]);
    for(int i=0;i<n1;i++){
        int m = sizeof(spiral[i])/sizeof(spiral[0][0]);
        for(int j=0;j<m;j++){
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int top=0,bottom=n1-1,left=0,right=n1-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout << spiral[top][i] << " ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout << spiral[i][right] << " ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout << spiral[bottom][i] << " ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout << spiral[i][left] << " ";
            }
            left++;
        }
    }
}
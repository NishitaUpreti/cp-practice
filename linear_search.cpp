#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
    string str = "Hello my name is nishita!";
    char find = 'z';
    for(int i=0;i<str.size();i++){
        if(str[i]==find){
            cout << "Found" << endl;
            break;
        }
    }
        */
    int arr[] = {23,7,9,23,1,10};
    int target = 23,count=0;
    for(int i=0;i<5;i++){
        if(target==arr[i]){
            cout << i << " ";
            count++;
        }
    }
    cout << endl << count << endl;
}
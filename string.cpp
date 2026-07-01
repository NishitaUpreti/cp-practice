#include<iostream>
#include<vector>
using namespace std;
void swap(string &s,int i,int j){
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
int main(){
    string str = "Hello";
    int n = str.length();
    // rev
    for(int i=n;i>=0;i--){
        cout << str[i];
    }
    cout << endl;
    // palindrome
    string str1="bonob";
    int n1=str1.length();
    int j=n1-1,i=0;
    while(i<=j){
        if(str[i]!=str[j]){
            cout << false;
            break;
        }
        i++;
        j--;
    }
    cout << endl;
    // reverse vowels:-
    i=0;j=n-1;
    while(i<=j){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'){
            if(str[j]=='a'||str[j]=='e'||str[j]=='o'||str[j]=='u'||str[j]=='i'){
                swap(str,i,j);
                i++;
                j--;
            }else{
                j--;
            }
        }else{
            i++;
        }
    }
    cout << str << endl;

}
#include<iostream>
#include<string>
using namespace std;
void convert(string s, int numRows) {
    int n = s.size();
    string ans="";
    int mid = n/2;
    for(int k=numRows;k>0;k--){
        int i=numRows-k,j=n-1-i;
        while(i<=mid){
            ans += s[i];
            cout << ans << endl;
            i = i+(n/k);
        }
        while(j>=mid){
            ans += s[j];
            j = j-k;
        }
    }
    cout << ans << endl;
}
int main(){
    string s = "HAPPYBIRTHDAY";
    convert(s,4);
}
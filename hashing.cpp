// basics:-
#include<bits/stdc++.h>
using namespace std;

char firstUniqChar(string s) {
        int arr[26]={0};
        int n = s.size();
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(arr[s[i]-'a']!=0)  return s[i];
        }
        return -1;
}
int main(){
    /*
    // Given an array of size N. Find the highest and lowest frequency element.
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(int);
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max=0,min=99;
    for(const auto& pair: freq){
          if(pair.second>max)   max = pair.second;
          if(pair.second<min)   min = pair.second;
    }
    for(const auto& pair: freq){
        if(pair.second==max)    cout << pair.first<<endl;
    }
    for(const auto& pair: freq){
        if(pair.second==min)    cout << pair.first<<endl;

    }
    */
    cout << firstUniqChar("hello");
    
}
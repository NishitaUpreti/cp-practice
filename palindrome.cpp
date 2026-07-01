#include<iostream>
using namespace std;
int main(){
    // palindrome:-
    /*
    // meth1:- reverse number
    int n=1445441;
    int num=n;
    int rev=0;
    while(n>0){
        rev = rev*10+n%10;
        n = n/10;
    }
    if(rev==num)    cout << "palindrome" << endl;
    */

    // meth2:- two pointer

    // meth3:- half reversal(optimized)
    // instead of reversing the entire number, reverse only hakf and check, quickly fater ad avoids overflow with large numbers.
    int n=144441;
    if(n%10==0 || n<0)    cout << "Not palindrome" << endl;
    int num=n;
    int rev=0;
    while(rev<num){
        rev = rev*10 + num%10;
        num = num/10;
    }
    if(num==rev || num==rev/10) cout << "Palindrome" << endl;  
    else    cout << "Not Palindrome" << endl;



}
#include<iostream>
using namespace std;

// euclids algorithm:-
int gcd2(int a,int b){
    int gcd;
    while(b>0){
        int temp = a%b;
        a=b;
        b = temp;
    }
    return a;
}
// gcd:-
// lcm:- a*b/gcd(a,b)

// prime number:-
void prime1(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)  
        {cout << "Not prime";
        return;}
    }
    cout << "Prime";
    return;
}
// finding prime number from 2-100:-    (brute force)
// for(int i=0;i<n;i++){

// }
// sieve of eratosthenes:-(ig for prime no)


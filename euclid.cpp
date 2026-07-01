#include<iostream>
using namespace std;

// divisors:-
void finddivs(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            int j = n/i;
            if(j!=i)    cout << j << " ";
        }
    }   
}

// gcd:-
int gcd1(int a,int b){
    int min,gcd;
    min=(a<b)?a:b;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
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


int lcm1(int a,int b){
    int max = a>b?a:b;
    for(int i=max;i<=a*b;i++){
        if(i%a==0 && i%b==0)    return i;
    }
    return a*b;
}
// optimized lcm:- a*b / gcd(a,b);
// GCD × LCM = a × b;
int lcm2(int a,int b){
    int gcd = gcd2(a,b);
    return (a/gcd)*b;
}

// prime number:-
bool prime1(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 )  return false;
        if(i!=2)    i++;
    }
    return true;
}
// finding prime number from 2-100:-    (brute force)
// for(int i=0;i<n;i++){

// }
// sieve of eratosthenes:-(ig for prime no)
// finding orime num from 2-100:-   (brute force)   o(n * sqrt(n))
int main(){
    // palindrome:-
    /*
    // meth1:-
    int n=1445441;
    int num=n;
    int rev=0;
    while(n>0){
        rev = rev*10+n%10;
        n = n/10;
    }
    if(rev==num)    cout << "palindrome" << endl;

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


    

    // armstrong:-An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
    int n1 = 152;
    int num = n1,newn=0,n2 = n1;
    int len = 0;
    while(n1>0){
        len++;
        n1 = n1/10;
    }
    while(num>0){ 
        newn = newn + pow((num%10),len);
        num = num/10;
    }
    if(newn==n2)    cout << "Armstrong" << endl;

    // print all divisors:-
    finddivs(36);
    */


    // gcd:- GCD (Greatest Common Divisor) of two numbers is the largest positive integer that divides both numbers without leaving a remainder.
    // cout << gcd1(12,12) << endl;
    // cout << gcd2(18,12) << endl;
    // cout << lcm1(18,12) << endl;
    // cout << lcm2(18,12) << endl;

    /*
    /*
    int n=100;
    for(int i=2;i<n;i++){
        if(prime1(i)==true)     cout << i << " ";
    }
    cout << endl;
    */

    // prime:-  (optimized) (the sieve of eratosthenes)
    int n=100;
    bool comp[n+1];
    for(int i=0;i<n+1;i++){
        comp[i] = false;
    }

    // main algo
    for(int i=2;i*i<=n;i++){
        if(comp[i]==false){
            for(int j=i*i; j<n+1; j+=i){
                comp[j] = true;
            }
        }
    }

    for(int i=2;i<n+1;i++){
        if(comp[i]!=true)   cout << i << " ";
    }
    cout << endl;

}

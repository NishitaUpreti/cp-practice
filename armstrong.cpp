#include<iostream>
#include<math.h>
using namespace std;

void finddivs(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            int j = n/i;
            if(j!=i)    cout << j << " ";
        }
    }   
}



// armstrong:-An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
int main(){
    // int n1 = 153;
    for(int i=0;i<1000;i++){
        int num = i,newn=0,n1=i;
        int len = 0;
        while(n1>0){
            len++;
            n1 = n1/10;
        }
        while(num>0){ 
            newn = newn + pow((num%10),len);
            num = num/10;
        }
        if(newn==i)    cout << "Armstrong" << i << endl;
    }

    // finddivisors of a number:-
    finddivs(36);
}
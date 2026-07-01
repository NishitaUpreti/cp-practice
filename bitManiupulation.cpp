#include<iostream>
using namespace std;




int main(){
    /*
    // binary to decimal
    int b1 = 10100,d1=0,i=1;
    while(b1>0){
        int d = b1%10;
        d1 += d*i;
        i = i*2;
        b1 /= 10;
    }
    cout << d1 << endl;
    
       
    // decimal to binary
    int d2=21, b2=0,i=1;
    while(d2>0){
        b2 = b2 + d2%2*i;
        d2/=2;
        i=i*10;
    }
    cout << b2 << endl;
    

    // swaping using bit manip.:- 
    int a=4,b=7;
    cout << a << " " << b << endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << " " << b << endl ;


    // odd/even check
    if((a&1)==0)  cout << "Even" << endl;
    else    cout << "odd" << endl;
    if((b&1)==0)  cout << "Even" << endl;
    else    cout << "odd" << endl;
    */

    // power of 2
    int num;
    cin >> num;
    if((num & (num-1)) == 0)    cout << "power of 2" << endl;
    else    cout << "Not a power of 2" << endl;

    // kth bit check:-
    // count set bits:- naive, brian, lookup methods
    // maximum AND value
    // counting longest trails of 1's in a number:-
    // missing number:- 
    // gray code:- 



    
}
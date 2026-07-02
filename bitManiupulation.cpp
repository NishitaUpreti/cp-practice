#include<bits/stdc++.h>
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
    

    // power of 2
    int num;
    cin >> num;
    if((num & (num-1)) == 0)    cout << "power of 2" << endl;
    else    cout << "Not a power of 2" << endl;
    

    // kth bit check:- 
    // check if the kth bit is set or not:-
    int n = 10,k=2;
    if((n>>k)&1){
        cout << "True" << endl;
    }else{
        cout << "false" << endl;
    }

    // count set bits:- naive, brian, lookup methods :-   leetcode
     
    // missing number:- leetcode
    // gray code:- leetcode


    // decimal to binary:-
    int d3 = 21, b3=0, i=1;
    while(d3>0){
        b3 +=  d3%2*i; 
        d3/=2;
        i*=10;
    }
    cout << b3;
    
   
    // counting longest trails of 1's in a number:-(brute force)
    vector<int> nums = {1,1,0,1,1,1};
    int n = nums.size();
    // binary to decimal:-
    long d=0, j=1;
    int count=0;
    for(int i=n-1;i>=0;i--){
        d = d + nums[i]*j; 
        j = j*2;
    }
    while(d){
        d = d&(d<<1);
        count++;
    }
    cout << count << endl;
    */

    // maximum AND value:- 
    
}
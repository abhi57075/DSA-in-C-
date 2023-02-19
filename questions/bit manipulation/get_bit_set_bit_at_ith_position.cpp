# include <iostream>
using namespace std;

/*
GET BIT
n = 0101
suppose we need to get bit at position i = 2 
1<<i = 0100
0101 & 0100 = 0100
if n & (1<<i) != 0, then bit is 1.

SET BIT
n = 0101
suppose we need to set bit at position i = 1
1<<i = 0010
0101 | 0010 = 0111

CLEAR BIT
n = 0101
suppose we need to clear bit at position at i = 2
1<<i = 0100
~0100 = 1011
0101 & 1011 = 0001

*/

int getbit(int n, int pos){
    return n&(1<<pos)!=0?1:0;
}

int setbit(int n, int pos){
    return n|(1<<pos);
}

int clearbit(int n, int pos){
    return n & (~(1<<pos));
}

int main(){
    cout<<getbit(5,2)<<endl; // 5 will be converted to binary
    cout<<setbit(5,1)<<endl; // O/P will be 7 since decimal of 0111 is 7
    cout<<clearbit(5,2)<<endl;
}
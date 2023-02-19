# include <iostream>
using namespace std;

int main(){
    int x = 5, y = 9;

    // 5 = 0000 0101
    // 9 = 0000 1001

    cout<<(x&y)<<endl; // & -> Bitwise AND (If both are true then return true)
    cout<<(x|y)<<endl; // | -> Bitwise OR (If one of them is true then return true)
    cout<<(x^y)<<endl; // ^ -> Bitwise XOR (If both are same then false otherwise true)

    /*
    XOR 0^0 = 0
        0^1 = 1
        1^0 = 1
        1^1 = 0
    */

    int a = 8, b = 16;
    cout<<(a<<1)<<endl; // << -> Left Shift Operator
    cout<<(b>>1)<<endl; // >> -> Right Shift Operator
}
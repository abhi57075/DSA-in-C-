# include <iostream>
using namespace std;

// Comma operator (,): It is a binary operator that evaluates the second operand and returns the value.

int main(){
    int x,y;
    y = 100;
    x = (y+10 , 99+y);
    cout<<x<<endl;

    x = y+10 , 99+y;
    cout<<x<<endl;

// Conditional operator or Ternary operator.

    int b = 25>16?25:16; // If 25 > 16 is true then b = 25 else 16.
    cout<<b<<endl;
}

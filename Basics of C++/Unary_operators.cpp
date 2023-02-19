# include <iostream>
using namespace std;

int main(){
    int num1 = 10;
    num1 = -num1;
    cout<<num1<<endl;

    int num2 = -100;
    num2 = -num2;
    cout<<num2<<endl;

    int x = 5;
    cout<<x++<<endl; // Post increment operator

    int y = 5; // Pre increment operator
    cout<<++y<<endl;

    // Bitwise complement or Bitwise not or Bitwise complement
    // Formula : (~)x = -(x+1)
    cout<<~(6)<<endl; // ~(6)=-(7)
    cout<<~(-2)<<endl; // ~(-2)=(1)
}
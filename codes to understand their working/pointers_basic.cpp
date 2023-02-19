# include <iostream>
using namespace std;

int main(){
    int a = 5, b = 15;
    char c = 'a';

    int *p1,*p2;
    char *p3;
    
    p1 = &a;
    p2 = &b;
    p3 = &c;

    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<*p3<<endl;
    cout<<endl;

    *p1 = 10; // the value of a now is 10
    *p2 = *p1; // the value of b now is same as of *p1 that is 10
    p1 = p2; // it means now pointer p1 is pointing to the same memory block to which pointer p2 is pointing
    *p1 = 20; // the value of b is now changed to 20
    *p3 = 'b';

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
}
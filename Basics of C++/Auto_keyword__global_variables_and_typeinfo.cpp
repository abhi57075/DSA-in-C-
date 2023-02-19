# include <iostream>
# include <typeinfo>
using namespace std;

int a;
double b;
bool c;
char d;

int main(){
    a = 10;
    b = 10.23456789;
    c = 25==16;
    d = 'a';
    auto e = 123.4567;

    cout<<a<<" "<<typeid(a).name()<<endl;
    cout<<b<<" "<<typeid(b).name()<<endl;
    cout<<c<<" "<<typeid(c).name()<<endl;
    cout<<d<<" "<<typeid(d).name()<<endl;
    cout<<e<<" "<<typeid(e).name()<<endl;
    // If we want to check the type of variable include <typeinfo> header file.
    // i-int; d-double; b-bool; c-char;
}

/*
Order od automatic type conversions : 
bool -> char -> short int -> int -> unsigned int -> long -> unsigned long -> long long -> float -> double -> long double.

ASCII VALUES : A-Z [65-90] and a-z [97-122].
*/
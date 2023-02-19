# include <cmath>
# include <iostream>
using namespace std;

int main(){
    double a = 123.345;
    double b = 123.5;
    double c = 123.551;

    // round() -> used to round off a decimal number to integer
    cout<<round(a)<<endl; // 123->O/P
    cout<<round(b)<<endl; // 124->O/P
    cout<<round(c)<<endl; // 123->O/P

    // floor -> 123.342 = 123
    // ceil -> 123.342 = 124
    cout<<floor(123.342)<<endl;
    cout<<ceil(123.342)<<endl;

    // pow(a,b) -> a to the power b -> a^b
    int x = 2, y = 10;
    cout<<pow(x,y)<<endl; 

    // If you wish to write 1000006 in an easy way write it like this 1e5+6
    long int z = 1e5+6;
    cout<<z<<endl;
    double r = 1e-3+7;
    cout<<r<<endl;

    // sqrt() -> finds the square root of a number
    cout<<sqrt(x)<<endl;

    // abs() -> gives the modulus of a number
    z = -5;
    cout<<abs(z)<<endl;



    // sin(a), cos(a), tan(a) -> a is converted to radians and then sin(a) or cos(a) or tan(a) is performed
    z = 5;
    cout<<sin(z)<<endl; // sin(5 radians)
    cout<<cos(z)<<endl;
    cout<<tan(z)<<endl;
    // to convert radians into degrees use sin(x*M_PI/180.0)
    cout<<sin(30*M_PI/180.0)<<endl;
    cout<<tan(90*M_PI/180.0)<<endl;
    // asin(x) -> Returns inverse of sin x in radians
    cout<<asin(0.5)<<endl;
    // to convert this into degrees use asin(x)*180.0/M_PI;
    cout<<asin(0.5)*180.0/M_PI<<endl;
    cout<<cos(90*M_PI/180.0)/sin(90*M_PI/180.0)<<endl; // This should give us zero but the O/P is not. It gives a very small number.
    


    // log(x) -> returns log x to the base e
    // log10(x) -> returns log x to the base 10

    // If x>1 -> log(x) is Positive
    // If x=1 -> log(x) is Zero
    // If 0>x>1 -> log(x) is Negative
    // If x=0 -> log(x) is -infinity
    // If x<0 -> log(x) is nan (Not a Number)
    cout<<log(12)<<endl;
    cout<<log10(100)<<endl;
    cout<<log10(1)<<endl;
    cout<<log10(0.4)<<endl;
    cout<<log10(0)<<endl; // O/P -> -inf
    cout<<log10(-0.1)<<endl; // O/P -> nan
    // If I want to write:
    // log  25 = log   25 / log   5
    //    5         10         10
    // Property: log a to the base b = log a to base x / log b to base x 
    cout<<log(25)/log(5)<<endl; // O/P -> 2
    
}
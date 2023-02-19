/* 
"#define" directive is used to define a macro.
There is no ';' at the end of the macro definition.
*/

# include <iostream>
using namespace std;

// Writing macro definitions.
# define l 10
# define b 5
# define area(x,y) x*y 

int main(){
    cout<<area(l,b)<<endl;
}

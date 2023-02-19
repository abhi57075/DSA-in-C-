# include <iostream>
using namespace std;
int main(){
    int i = 65;
    int *p = &i;
    cout<<*p<<endl;
    char *pc = (char *)p; // here the value of *p is converted to char and *pc is now pointing to that char
    cout<<*pc<<endl;
}
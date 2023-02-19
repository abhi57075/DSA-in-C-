# include <iostream>
using namespace std;

int main(){
    int *a = new int (10); // a is pointing to 10
    int *b = new int (20); // b is pointing to 20

    cout<<*a<<" "<<*b<<endl; // 10 20
    cout<<a<<" "<<b<<endl; // address of 10 and 20
    
    // In shallow copy base address of the object is copied
    a = b; //shallow copy. Now a has address of 20 stored in it
    // after doing the above operation, previously a was pointing to 10 (This 10 was stored in the heap memory).
    // now a is pointing to 10. And we cannot access 10 now by any means a is now stroing the address of 20.
    // hence shallow copy results in improper utilization of heap memory.
    cout<<*a<<" "<<*b<<endl; // 20 20
    cout<<a<<" "<<b<<endl; // address of 20 and 20

    int *c = new int (100); // c is pointing to 100
    int *d = new int (200); // d is pointing to 200

    cout<<*c<<" "<<*d<<endl; // 100 200
    cout<<c<<" "<<d<<endl; // address of 100 and 200
    
    *c = *d; //deep copy. Now c is pointing to 200
    cout<<*c<<" "<<*d<<endl; // 200 200
    cout<<c<<" "<<d<<endl; // address of 100 and 200

}
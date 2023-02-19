# include <iostream>
using namespace std;

// *(a+i) = a[i]
// (a+i)[x] = a[i+x]

int main(){
    int a[] = {5,1,15,20,25};
    cout<<*(a+2)<<" "<<a[2]<<endl;
    cout<<(a+1)[3]<<endl;

    cout<<endl;
    int i,j,k;

    i = ++a[1]; // a[1] = 2; i = 2
    //cout<<a[1]<<" "<<i<<endl;

    j = a[1]++; // a[1] = 3; j = 2
    //cout<<a[1]<<" "<<j<<endl;

    k = a[i++]; // a[i++] = a[2] = 15; i = 3
    //cout<<a[i]<<" "<<k<<endl;

    cout<<endl;

    cout<<i<<" "<<j<<" "<<k<<endl;
}
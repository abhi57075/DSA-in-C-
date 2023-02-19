# include <iostream>
using namespace std;

// I/P : abcd, ef
// O/P : ebcd, af

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}
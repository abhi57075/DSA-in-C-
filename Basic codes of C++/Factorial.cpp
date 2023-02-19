# include <iostream>
using namespace std;

long factorial (int n){
    return (n<=1)?1:n*factorial(n-1);
}

int main(){
    cout<<factorial(10)<<endl;
}
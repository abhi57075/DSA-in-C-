# include <iostream>
using namespace std;

/*
1
1 1
1 2 1
1 3 3 1
1 6 4 6 1
*/

long factorial (int n){
    return (n<=1)?1:n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int x = 0;
    for (int i = 0; i<n; i++){
        while (x<=i){
            cout<<factorial(i)/(factorial(x)*(factorial(i-x)))<<" ";
            x++;
        }
        cout<<endl;
        x = 0;
    }
}
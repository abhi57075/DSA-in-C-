# include <iostream>
using namespace std;

/*
print fibonacci till n terms
1,1,2,3,5,8,13,21,44.....
*/

void print_fibonacci_till_n(int n){
    int t1 = 1, t2 = 1;
    cout<<t1<<" "<<t2<<" ";
    while (n-2!=0){
        cout<<t1+t2<<" ";
        int t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        n--;
    }
}
int main(){
    int n;
    cin>>n;
    print_fibonacci_till_n(n);
}
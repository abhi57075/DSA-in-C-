# include <iostream>
using namespace std;

// I/P: 1234    O/P: 1236
// I/P: 99      O/P: 103
// I/P: 97      O/P: 97
// I/P: 98      O/P: 103    max we will have to search is till n+6

int sum(int n){
    int ans = 0;
    while (n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    for (int i = a; i<=a+6; i++){
        if (sum(i)%4==0){
            cout<<i<<endl;
            break;
        }
    }
}
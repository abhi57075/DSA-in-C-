# include <iostream>
# include <cmath>
# define ull unsigned long long int
using namespace std;

ull dec_to_bin(int n){
    ull bin = 0;
    ull count = 0;
    while (n!=0){
        int rem = n%2;
        ull multiplier = pow(10,count);
        bin+=(rem*multiplier);
        n = n/2;
        count++;
    }
    return bin;
}

int main(){
    cout<<dec_to_bin(25)<<endl;
}
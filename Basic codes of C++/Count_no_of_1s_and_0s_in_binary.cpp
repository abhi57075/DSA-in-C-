# include <iostream>
# include <algorithm>
using namespace std;

int count_ones(int n){  // uses algorithm header file
    return __builtin_popcount(n);
}

void count_ones_and_zeros (int n){
    int count0 = 0, count1 = 0;
    while (n > 0){
        if (n&1){ // any number bitwise 'and' with 1 will always give 1 or 0 as result
            count1++;
        }
        else{
            count0++;
        }
        n=n>>1;
    }
    cout<<count0<<" "<<count1<<endl;
}

int main(){
   int x = 25;
   cout<<count_ones(x)<<endl;
   count_ones_and_zeros(x);
}
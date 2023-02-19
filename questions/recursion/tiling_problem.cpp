# include <iostream>
using namespace std;

/*
given a 2xn board and tiles of size 2x1 count the number of ways to tile the given board using these tiles
*/

int tilingways (int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return tilingways(n-1)+tilingways(n-2);
}

int main(){
    cout<<tilingways(4)<<endl;
}
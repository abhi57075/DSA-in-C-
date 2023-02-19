# include <iostream>
using namespace std;

/*
Write a program to find a unique number in an array where all the numbers except one, are present twice
array -> {2,4,6,3,4,6,2}

XOR : if same input then 0 else 1
A number XORed with itself always gives 0 
xor all the elments of the array and the result will be the ans
*/

int unique(int arr[], int n){
    int xorsum = 0;
    for (int i = 0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int arr[7] = {2,4,6,3,4,6,2};
    cout<<unique(arr,7)<<endl;
}
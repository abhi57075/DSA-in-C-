# include <iostream>
using namespace std;

/*
Write a program to find 2 unique numbers in an array where all numbers except 2 are present twice
array -> {2,4,6,7,4,5,6,2} 
*/

int GETBIT(int n, int pos){
    return n&(1<<pos);
}

void unique_2(int arr[], int n){
    int xorsum = 0;
    for (int i = 0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }

    int newxor = 0;
    for (int i = 0; i<n; i++){
        if (GETBIT(arr[i],pos-1)){
            newxor = newxor^arr[i];
        }
    }

    cout<<newxor<<" "<<(tempxor^newxor)<<endl;
}

int main(){
    int arr[] = {1,2,3,1,2,3,5,7};
    unique_2(arr,8);
}
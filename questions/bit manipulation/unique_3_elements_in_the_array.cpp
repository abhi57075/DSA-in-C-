# include <iostream>
using namespace std;

/*
Given an array of elements there is a unique number which occurs only once, whereas all others occurs thrice
*/

int getbit(int n, int pos){
    return n&(1<<pos)!=0?1:0;
}

int setbit(int n, int pos){
    return n|(1<<pos);
}

int unique_3(int arr[], int n){

    int result = 0;

    for (int i = 0; i<64; i++){
        int sum = 0;
        for (int j = 0; j<n; j++){
            if (getbit(arr[j],i)){
                sum++;
            }
        }
        if (sum%3!=0){
            result = setbit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,1,2,3,1,2,3,4};
    cout<<unique_3(arr,10)<<endl;
}
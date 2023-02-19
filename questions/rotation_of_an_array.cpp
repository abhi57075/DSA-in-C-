# include <iostream>
using namespace std;

// left shift of [1,2,3,4,5] by 2 is [3,4,5,1,2]
void left_shift(int arr[],int size, int shift){
    int res[size];
    for (int i = 0; i < size; i++){
        res[i] = arr[(i+shift)%size];
    }
    for (auto i: res){
        cout<<i<<" ";
    }
    cout<<endl;
}

// right shift of [1,2,3,4,5] by 2 is [4,5,1,2,3]
void right_shift(int arr[],int size, int shift){
    int res[size];
    for (int i = 0; i < size; i++){
        res[i] = arr[(i+shift+1)%size];
    }
    for (auto i: res){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    left_shift(arr,5,2);
    right_shift(arr,5,2);
}
# include <iostream>
using namespace std;

void array_passed_by_value(int arr[], int l){
    for (int i = 0; i<l; i++){
        arr[i]*=2;
    }
}

void array_passed_by_reference(int *arr, int l){
    for (int i = 0; i<l; i++){
        arr[i]*=2;
    }
}

void display_array(int arr[],int l){
    for (int i = 0; i<l; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // when array is getting passed as a parameter to a function the original array is getting passed and not its copy
    array_passed_by_value(arr,5);
    display_array(arr,5);
    array_passed_by_reference(arr, 5);
    display_array(arr,5);
}
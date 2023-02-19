# include <iostream>
using namespace std;

// A0 >= A1 <= A2 >= A3 <= 4 >= A5

void display_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void wave_sort (int arr[], int n){
    for (int i = 1; i<n; i+=2){
        if (arr[i]>arr[i-1]){
            swap (arr[i],arr[i-1]);
        }
        if (arr[i]>arr[i+1] && i<=n-2){
            swap (arr[i],arr[i+1]);
        }
    }
    display_array(arr,n);
}

int main(){
    int arr[] = {1,3,4,7,5,6,2};
    wave_sort(arr,7);
}
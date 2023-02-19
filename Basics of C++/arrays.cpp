# include <iostream>
using namespace std;

void display_array(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // declaration of an array at compile time
    int arr[5];
    for (int i = 0; i<5; i++){
        arr[i]=i;
    }
    display_array(arr,5);

    // dynamic declaration of an array
    int *arr2 = new int[5];
    for (int i = 0; i<5; i++){
        arr2[i]=i*20;
    }
    display_array(arr2,5);

    int a[3] = {3,12,1};
    display_array(a,3);

    int b[] = {3,12,1};
    display_array(b,3);

    int c[3] = {}; // all the values will be zero
    display_array(c,3);

    int d[3] = {3}; // the first value will be 3 rest all will be zero
    display_array(d,3);

    cout<<a[1]<<endl;
    cout<<++a[1]<<endl;

}

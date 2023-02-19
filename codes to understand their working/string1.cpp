# include <iostream>
using namespace std;

// If we do not initialize an array we should mention its size;
// int arr[5]  or  int arr[] = {1,2,3}

int main(){
    char str[5] = "STR";
    cout<<str<<endl;
    for (int i = 0; i<5; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
// Matrix of size n*m (3*4)
# include <iostream>
using namespace std;

void display_matrix(int arr[], int row, int col){
    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            cout<<arr[i*col+j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row = 3, col = 4;

    int *arr = new int [row*col];

    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            arr[i*col+j] = i+j;
        }
    }
    display_matrix(arr,3,4);
}
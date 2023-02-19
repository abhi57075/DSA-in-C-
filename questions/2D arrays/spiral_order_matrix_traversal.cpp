# include <iostream>
using namespace std;

/*
let us consider the matrix
1 2 3
4 5 6
7 8 9

The matrix should be printed in this order
1 2 3 6 9 8 7 4 5
*/

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //Spiral order print
    int row_start = 0;
    int row_end = m-1;
    int col_start = 0;
    int col_end = n-1;

    while (row_start<=row_end && col_start<=col_end){
        // row start
        for (int col = col_start; col <= col_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        // column end
        for (int row = row_start; row<=row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        // row end
        for (int col = col_end; col >= col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        // column start
        for (int row = row_end; row >= row_start; row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
}
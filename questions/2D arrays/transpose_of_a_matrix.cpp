# include <iostream>
using namespace std;

/*
let us consider the matrix
1 2 3
4 5 6
7 8 9

The transpose of a matrix is: 
1 4 7
2 5 8
3 6 9
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

    for (int i = 0; i<m; i++){
        for (int j = i; j<n; j++){
            if (i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
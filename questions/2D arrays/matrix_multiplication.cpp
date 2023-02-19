# include <iostream>
using namespace std;

/*
[[1 2 3],       [[10,20,30],         [[300, 360, 420],
 [4,5,6],   X    [40,50,60],    =     [660, 810, 870],
 [7,8,9]]        [70,80,90]]          [1020,1260,1500]]

 Multiplication of 2 matrices is only possible if and only if number of columns in the first matrix is equal to the number of rows in the second matrix
 Size of the resultant matrix is rows of 1st matrix and columns of 2nd matrix.
*/

int main(){
    int r1,c1;
    cin>>r1>>c1;

    int arr1[r1][c1];
    for (int i = 0; i<r1; i++){
        for (int j = 0; j<c1; j++){
            cin>>arr1[i][j];
        }
    }

    int r2,c2;
    cin>>r2>>c2;

    int arr2[r2][c2];
    for (int i = 0; i<r2; i++){
        for (int j = 0; j<c2; j++){
            cin>>arr2[i][j];
        }
    }

    int ans[r1][c2];
    for (int i = 0; i<r1; i++){
        for (int j = 0; j<c2; j++){
            ans[i][j]=0;
        }
    }
    
    for (int i = 0; i<r1; i++){
        for (int j = 0; j<c2; j++){
            for (int k = 0; k<c1; k++){
                ans[i][j]+=(arr1[i][k]*arr2[k][j]);
                
            }
        }
    }

    for (int i = 0; i<r1; i++){
        for (int j = 0; j<c2; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
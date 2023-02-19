# include <iostream>
using namespace std;

/*
Example of a sorted matrix
1  4  7  11
2  5  8  12
3  6  9  16
10 13 14 17

the above matrix is sorted row wise and column wise

Idea:
1.Start from top right element
2.You are at (r,c)
3.If matrix[r][c] == target; return true;
4.If matrix[r][c] > target; c-- else r++;
*/

int main(){
    int m,n,target;
    cin>>m>>n>>target;
    int arr[m][n];
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int row_start = 0, col_start = n-1;
    bool found = false;
    while (row_start < col_start && col_start >= 0){
        if (arr[row_start][col_start]==target){
            found = true;
            break;
        }
        else if (arr[row_start][col_start]>target){
            row_start++;
        }
        else{
            col_start--;
        }
    }
    found==false?cout<<"Does not exist in the matrix"<<endl:cout<<"Found"<<endl;
}
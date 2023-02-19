# include <iostream>
using namespace std;

/*
You are given an array arr[] of N integers including 0. 
The task is to find the smallest positive number missing from the array.

Example: 
Input:
6
0 -9 1 3 -4 5
Output:
2

Approach:
Build a boolean check[] array that will depict if any element x is present in the array or not
Iterate over the array and mark non negative a[i] as True.
Now iterate over check[] to find the index of 1st positive value and its value in check will be false
*/

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }

    const int N = 1e6+2;
    bool check[N] = {0};

    for (int i = 0; i<n; i++){
        if (a[i]>=0){
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 0; i<N; i++){
        if (check[i]==0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}
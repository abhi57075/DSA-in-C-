# include <iostream>
# include <limits.h>
using namespace std;

/*
Given an array arr[] of size n.
The task is to find the first repeating element in the array of integers and 
whose index of first occurence is smallest

Example :
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice ans its first appearance is at index 2 which is less than 3 whose first occuring index is 3.
*/

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    const int N = 1e6+2;
    int idx[N] = {-1};
    int minindx = INT_MAX;

    for (int i = 0; i<n; i++){
        if (idx[a[i]]!=1){
            minindx = min(minindx,idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    
    if (minindx == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<minindx+1<<endl;
    }
    //7
    //1 5 3 4 3 5 6
}
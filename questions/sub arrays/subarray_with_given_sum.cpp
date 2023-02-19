# include <iostream>
using namespace std;

/*
Given an unsorted array A of size N of non negative integers, find a continuous sub array which adds to a given number S 

Example:
Input:
N = 5, S = 12;
A[] = {1,2,3,7,5}
Output:
2 4
Explanation:
The sum from 2nd position to 4th position is 12.

Optimized Approach:

ALSO KNOWN AS 2 POINTERS SUM

Keep 2 pointers start and end, and a variable currsum sum from start to end.
Increment end till currsum + a[end] > S.
Start increasing start until currsum <= S.

*/

int main(){
    int n,s;
    cin>>n>>s;

    int a[n];
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }

    int i = 0, j = 0, start = -1, end = -1, sum = 0;
    while (j<n && sum + a[j]<=s){
        sum+=a[j];
        j++;
    }

    if (sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while (j<n){
        sum += a[j];
        while (sum > s){
            sum-=a[i];
            i++;
        }
        if (sum == s){
            start = i+1;
            end = j+1;
            break;
        }
        j++; 
    }
    cout<<start<<" "<<end<<endl;
}
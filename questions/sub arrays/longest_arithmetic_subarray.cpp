# include <iostream>
using namespace std;

/*
An arithmetic array is an array that contains at least 2 integers and the differences between consecutive 
integers are equal. For example [9,10],[3,3,3],[9,7,5,3] are arithmetic arrays while [1,3,4,6],[2,1,2] and
[1,2,4] are not arithmetic arrays.
Sarasvati has an array of N non negative numbers . The ith integer of the array is Ai.
She wants to choose a contigious arithmetic subarray from her array that has the maximum length.
Please help her to determine the length of the longest contigious arithmetic subarray.

Time limit : 20 seconds per test case

1 sec = 10^8 operations (speed of C++)
20 sec = 2 x 10^9 operations
2<=N<=2000 = O(n^2) = O(4x10^6) this can be done within this time limit
2<=N<=2x10^5 = O(n^2) = O(4x10^10) this cannot be done within the time limit (will give TLE)

Approach:
Maintain the following variables
1. Previous common difference - pd
2. Current arithmetic subarray length - curr
3. Max arithmetic subarray length - ans
    
    2 CASES
    1. pd == A[i]-A[i-1]
       current ans increases by 1
       ans = max(ans,cur)
    2. pd != A[i]-A[i-1]
       Update curr ans to 2.  
*/

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }
    int ans = 2;
    int pd = a[1]-a[0];
    int j = 2;
    int curr = 2;
    while (j<n){
        if (pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd = a[j]-a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    // take array as 10 7 4 6 8 10 11
}
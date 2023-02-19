# include <iostream>
# include <vector>
# include <limits.h>
using namespace std;

/*
Maximum sum subarray (KADANES ALGORITHM)
Find a  subarray in the array such that sum of its element is maximum

Time complexity is O(n)

Example : [-5,4,6,-3,4,-1]
The subarray which has maximum sum is [4,6,-3,4] which on addition gives 11
*/

int maxSumSubArray (vector<int>a){
    int maxSum = INT_MIN;
    int curSum = 0;

    for (int i = 0; i<a.size(); i++){
        curSum = curSum + a[i];
        if (curSum > maxSum){
            maxSum = curSum;
        }
        if (curSum < 0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector <int> arr = {-5,4,6,-3,4,-1};
    cout<<maxSumSubArray(arr)<<endl;
}

/*

arr = [5,-4,-2,6,-1]

when i = 0; element = 5, curSum = 5, maxSum = 5;
when i = 1; element = -4, curSum = 1, maxSum = 5;
when i = 2; element = -2, curSum = 0, maxSum = 5;
when i = 3; element = 6, curSum = 6, maxSum = 6;
when i = 4; element = -1, curSum = 5, maxSum = 6;

*/



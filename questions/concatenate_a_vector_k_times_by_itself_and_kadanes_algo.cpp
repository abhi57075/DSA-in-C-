# include <iostream>
# include <vector>
using namespace std;

/*
Concatenate a vector by itself k times and then find the maximum sum of the subarray from the newly formed array

Example: vector <int> v = {1,-2,3}, concatenate by 3 times
        newly formed vector is v = {1,-2,3,1,-2,3,1,-2,3}
        and the maximum sum of the subarray is 7 
        and the subarray is {3,1,-2,3,1,-2,3} whose addition of each of the elements gives us 7
*/

long maxSumOfSubConcatenatedArray(vector <int> v, int k){
    long maxSum = -1e6;
    long curSum = 0;
    for (int i = 0; i<v.size()*k; i++){
        curSum += v.at(i%v.size());
        maxSum = max(maxSum, curSum);
        if (curSum < 0){
            curSum = 0;
        }
    }
    return maxSum;
} 

int main(){
    vector <int> v = {12,34,-10,-4,2,-40};
    cout<<maxSumOfSubConcatenatedArray(v,4)<<endl;
}


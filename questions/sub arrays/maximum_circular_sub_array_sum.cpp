# include <iostream>
# include <limits.h>
using namespace std;

/*
Case 1 : {-1,4,-6,7,5,-4} => {7,5} (No rafting needed) => ans  = 12
Case 2 : {4,-4,6,-6,10,-11,12} => {12,4,-4,6,-6,10} {Rafting is needed} => ans = 22
        Max subarray sum = total sum of array - sum of non contributing elements

*/

int kadanes (int arr[], int n){
    int cursum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i<n; i++){
        cursum+=arr[i];
        if (cursum>maxsum){
            maxsum = cursum;
        }
        if(cursum<0){
            cursum = 0;
        }
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadanes(arr,n);
    //cout<<nonwrapsum<<endl;

    int totalsum = 0; //sum of all elements of the array
    for (int i = 0; i<n; i++){
        totalsum+=arr[i];
        arr[i] = -arr[i];
    }

    /*
    for (auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<totalsum<<endl;
    cout<<kadanes(arr,n)<<endl;
    */

    wrapsum = totalsum + kadanes(arr,n);
    //cout<<wrapsum<<endl;
    
    cout<<max(wrapsum,nonwrapsum)<<endl;
}
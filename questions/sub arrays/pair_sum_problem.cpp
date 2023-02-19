# include <iostream>
using namespace std;

/*

Check if there exists 2 elements in an array such that their sum is equal to given k

Approach:
1. Sort the array.
2. Take low as element at index 0 and high as element at index n-1.
3. If low + high > key then high--
4. If low + high < key then low++

*/

bool pairsum (int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while (low<high){
        if (arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    cout<<pairsum(arr,8,k);
}
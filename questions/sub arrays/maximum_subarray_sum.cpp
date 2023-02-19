# include <iostream>
# include <limits.h>
using namespace std;

/*
find the subarray in the array which has the maixmum sum
Array = {-1,4,7,2}
Sub arrays :
-1          = -1
-1,4        = 3
-1,4,7      = 10
-1,4,7,2    = 12
4           = 4
4,7         = 11
4,7,2       = 13 --> ans
7           = 7
7,2         = 9
2           = 2
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int cursum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i<n; i++){
        cursum += arr[i];
        if (cursum>maxsum){
            maxsum = cursum;
        }
        if (cursum<0){
            cursum = 0;
        }
    }
    cout<<maxsum<<endl;
}
# include <iostream>
using namespace std;

/*
array =     10 23 13 25 49 9 31 100 1 -1
ans_array = 10 23 23 25 49 49 49 100 100 100  // this array will give us the maximum element from the array[0] till array[i]
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int prefix_max[n];
    prefix_max[0]=arr[0];
    int cur_max = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>cur_max){
            prefix_max[i]=arr[i];
            cur_max = arr[i];
        }
        else{
            prefix_max[i] = cur_max;
        }
    }
    for (auto i: prefix_max){
        cout<<i<<" ";
    }
    cout<<endl;
}

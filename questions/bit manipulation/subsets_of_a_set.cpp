# include <iostream>
using namespace std;

/*
    {a,b,c}
{},         000     0
{c},        001     1
{b},        010     2
{b,c},      011     3
{a},        100     4
{a,c},      101     5
{a,b},      110     6
{a,b,c}     111     7
*/

void subsets (int arr[], int n){
    for (int i = 0; i<(1<<n); i++){
        for (int j = 0; j<n; j++){
            if (i & (1<<j)){  // If the jth bit in i is true
                cout<<arr[j];
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[4] = {1,2,3,4};
    subsets(arr,4);
}
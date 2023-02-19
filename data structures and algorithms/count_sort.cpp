# include <iostream>
using namespace std;

void display_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void count_sort (int arr[], int n){
    int k = arr[0];
    for (int i = 0; i<n; i++){
        k = max(k,arr[i]);
        cout<<k<<endl;
    }
    k+=1;
    

    int count[k+1] = {0};
    for (int i = 0; i<n; i++){
        count[arr[i]]++;
    }
    //display_array(count,k);

    for (int i = 1; i<=k; i++){
        count[i]+=count[i-1];
    }
    //display_array(count,k);

    int output[n];
    for (int i = n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    display_array(output,n);
    
}

int main(){
    int arr[] = {1,2,3,1,2};
    count_sort(arr,5);
}
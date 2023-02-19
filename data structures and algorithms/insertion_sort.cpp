# include <iostream>
using namespace std;

void display_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for (int i = 1; i<n; i++){
        int current = arr[i];
        //cout<<"Current : "<<current<<endl;
        int j = i - 1;
        //cout<<"I and J : "<<i<<" "<<j<<endl;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            //display_array(arr,n);
            j--;
            //cout<<"the value of j : "<<j<<endl;
        }
        arr[j+1] = current;
        //display_array(arr,n);
    }

    display_array(arr,n);
    
}
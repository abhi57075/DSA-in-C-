# include <iostream>
using namespace std;

int first_occurence (int arr[], int n, int i, int key){
    if (i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return first_occurence(arr,n,i+1,key);
}

int last_occurence (int arr[], int n, int i, int key){
    if (i==n){
        return -1;
    }
    int restarray = last_occurence(arr,n,i+1,key);
    if (restarray!=-1){
        return restarray;
    }
    if (arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,2,4,3,6,4};
    cout<<first_occurence(arr,11,0,2);
    cout<<last_occurence(arr,11,0,2);
}
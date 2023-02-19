// merge sort is a divide and conquer algorithm
# include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for (int i = 0; i<n1; i++){
        b[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i<n1 && j<n2){
        if (a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while (i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while (j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }

}

void merge_sort(int arr[], int l, int r){
    if (l<r){
        int mid = (l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n);
}

// T(n) = 2T(n/2)+n => nlogn time complexity

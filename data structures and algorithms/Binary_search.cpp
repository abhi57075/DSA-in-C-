# include <iostream>
# include <vector>
using namespace std;

int binary_search_1 (int a[],int n,int key){
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (a[mid]==key){
            return mid;
        }
        else if (key > a[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int binary_search_2 (vector<int> v, int key){
    int low = 0, high = v.size()-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (v.at(mid)==key){
            return mid;
        }
        else if (key > v.at(mid)){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    vector <int> v = {1,2,3,4,5,6,7,8};
    cout<<binary_search_1(arr,7,7)<<endl;
    cout<<binary_search_2(v,99)<<endl;
}
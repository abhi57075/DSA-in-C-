# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
using namespace std;

void display_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display_vector(vector<int>v){
    for (auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr[5] = {10,23,45,22,31};
    vector <int> v = {100,230,450,220,310};
    string s = "Abhishek";

    // reverse an array
    reverse(arr,arr+5);
    display_array(arr,5);

    // sort an array from lowest to highest
    sort(arr,arr+5);
    display_array(arr,5);

    // sort an array from highest to lowest
    sort(arr,arr+5,greater<int>());
    display_array(arr,5);

    // sum of all elements of an array
    int sum = 0;
    sum = accumulate(arr,arr+5,sum); // accumulate is a function from the numeric library
    cout<<sum<<endl;

    // reverse a vector
    reverse(v.begin(),v.end());
    display_vector(v);

    // sort a vector from lowest to highest
    sort(v.begin(),v.end());
    display_vector(v);

    // sort a vector from highest to lowest
    sort(v.begin(),v.end(),greater<int>());
    display_vector(v);

    // sum of all elements of a vector
    int sumv = 0;
    sumv = accumulate(v.begin(),v.end(),sumv); // accumulate is a function from the numeric library
    cout<<sumv<<endl;

    // reverse a string
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    // sort a string from lowest to highest
    sort(s.begin(),s.end());
    cout<<s<<endl;

    // sort a string from highest to lowest
    sort(s.begin(),s.end(),greater<char>());
    cout<<s<<endl;

    // find max and min
    int x = max(123,234); // only 2 arguments can be passed
    int y = min(123,234);
    cout<<x<<" "<<y<<endl;

}
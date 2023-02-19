# include <iostream>
# include <vector>
using namespace std;

void swap (vector <int> &v, int &i, int &j){
    int temp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = temp;
}

void display_vector (vector <int> v){
    for (auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void dutch_national_flag_algo(vector <int> &v){
    int start = 0;
    int mid = 0;
    int end = v.size()-1;
    
    // Iterate while mid is not greater than end.
    while (mid <= end)
    {
        // Place the element at the starting if it's value is less than pivot.
        if (v.at(mid) == 0)
        {
            swap(v.at(mid), v.at(start));
            mid = mid + 1;
            start = start + 1;
        }

        // Place the element at the end if it's value is greater than pivot. 
        else if (v.at(mid) == 2)
        {
            swap(v.at(mid), v.at(end));
            end = end - 1;
        }

        else
        {
            mid = mid + 1;
        }
    }
}

int main(){
    vector <int> v = {1,1,0,2,0,2};
    dutch_national_flag_algo(v);
    display_vector(v);
}

/*
Dutch National Flag Algorithm
-> Used when the array contains 0,1 and 2 as its elements
-> By using mergesort time complexity is O(n*logn)
-> Another method can be count no of 0,1 and 2 in the array and then store them in a new array till 0,1 and 2 count becomes zero 
   This takes time complexity O(2n)
-> Dutch National Flag Algorithm takes time O(n).
-> Working of this algo:

    Initially: set mid and low as arr[0] and high as arr[n-1]

    |   1   |   1   |   0   |   2   |   0   |   2   |
    mid,low                                   high

    Check value of arr[mid]
    if 0 : swap(arr[low],arr[mid]) and then increment low (low++) and mid (mid++)
    if 1 : mid++;
    if 2 : swap(arr[mid],arr[high]) and then increment mid (mid++) and decrement high (high--)

*/
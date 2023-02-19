# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
using namespace std;

void display_vector (vector<int>v){
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector <int> v;
    v = {100,62,13,24,54,63,7,81,49,10};

    // to print size of vector
    cout<<v.size()<<endl;
    
    // to change element at a particular index
    v.at(0) = 0; // if we asked for an index greater than 9 then we will get an error
    display_vector(v);

    v.pop_back(); // deletes last element of the vector;
    display_vector(v);

    // reverse vector
    reverse(v.begin(),v.end()); //algorithm function
    display_vector(v);

    // sort vectors from lowest to highest
    sort(v.begin(),v.end()); // algorithm function
    display_vector(v);

    // to use binary_search in vector vector should be sorted
    cout<<binary_search(v.begin(),v.end(),20)<<endl; // if found then 1 else 0
    cout<<binary_search(v.begin(),v.end(),13)<<endl; // algorithm function

    // sort vectors from highest to lowest
    sort(v.begin(),v.end(),greater<int>()); // algorithm funciton
    display_vector(v);

    // sum of all elements in a vector
    int sum = accumulate(v.begin(),v.end(),0); //numeric function
    cout<<sum<<endl;

    // maximum and minimum in a vector
    cout<<*max_element(v.begin(),v.end())<<" "<<*min_element(v.begin(),v.end())<<endl;

    // delete the element at index 5
    v.erase(v.begin()+5);
    display_vector(v);    
    // delete elements form index 0 to 3 (0 inclusive and 3 exclusive)
    v.erase(v.begin()+0,v.begin()+3);
    display_vector(v);

    // count occurences of x in the vector
    cout<<count(v.begin(),v.end(),7)<<endl;
    cout<<count(v.begin(),v.end(),10)<<endl;

    // find() -> returns the element if found
    auto it = find(v.begin(),v.end(),7);
    auto it_2 = find(v.begin(),v.end(),10);
    cout<<it-v.begin()<<endl; // writing this way will give us the first occurence of 7
    cout<<it_2-v.begin()<<endl; // it2 will be equal to v.end(). This will return the index 5(which is the size of the vector)



    // Upper bounds and lower bounds
    /*
    when using lower_bound() and upper_bound() make sure the vector is sorted otherwise we may get absurd result.
    lower_bound() gives us the given number if present or the number greater than the given number
    upper_bound() gives us the number which is always greater than the given number
    */

    vector <int> vec = {12,23,45,21,22,11,54,34,66,51};
    sort(vec.begin(),vec.end());
    display_vector(vec);

    auto it1 = lower_bound(vec.begin(),vec.end(),23);
    auto it2 = lower_bound(vec.begin(),vec.end(),20);
    auto it3 = lower_bound(vec.begin(),vec.end(),100);

    // print the number obtained from lower_bound() function 
    it1 == vec.end()?cout<<-1<<endl:cout<<*it1<<endl;
    it2 == vec.end()?cout<<-1<<endl:cout<<*it2<<endl;
    it3 == vec.end()?cout<<-1<<endl:cout<<*it3<<endl;

    // print the index of the number obtained from lower_bound() function
    it1 == vec.end()?cout<<-1<<endl:cout<<it1 - vec.begin()<<endl;
    it2 == vec.end()?cout<<-1<<endl:cout<<it2 - vec.begin()<<endl;
    it3 == vec.end()?cout<<-1<<endl:cout<<it3 - vec.begin()<<endl;



    auto it11 = upper_bound(vec.begin(),vec.end(),23);
    auto it22 = upper_bound(vec.begin(),vec.end(),20);
    auto it33 = upper_bound(vec.begin(),vec.end(),100);

    // print the number obtained from upper_bound() function 
    it11 == vec.end()?cout<<-1<<endl:cout<<*it11<<endl;
    it22 == vec.end()?cout<<-1<<endl:cout<<*it22<<endl;
    it33 == vec.end()?cout<<-1<<endl:cout<<*it33<<endl;

    // print the index of the number obtained from upper_bound() function
    it11 == vec.end()?cout<<-1<<endl:cout<<it11 - vec.begin()<<endl;
    it22 == vec.end()?cout<<-1<<endl:cout<<it22 - vec.begin()<<endl;
    it33 == vec.end()?cout<<-1<<endl:cout<<it33 - vec.begin()<<endl;



    // concatenate 2 vectors
    vector <int> aa = {1,2,3};
    vector <int> bb = {4,5,6,7};
    vector <int> aabb(aa);
    aabb.insert(aabb.end(),bb.begin(),bb.end());
    display_vector(aabb);

}

/*

Vectors returns iterators; arrays use pointers

1. vectors are used when we require dynamic arrays.
2. It is there in #include<vector> header file.
3. Size should not be defined when initializing a vector. Size issues does not happen in vector.
4. Dynamic allocation : vector <int> *vp = new vector <int> ();
5. Static allocation : vector <int> v

*/
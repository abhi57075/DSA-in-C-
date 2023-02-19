# include <iostream>
# include <map>
using namespace std;

void display_map_1 (map <int,string> c){
    // display elements of the map
    map <int,string> :: iterator p = c.begin();
    while (p!=c.end()){
        cout<<p->first<<"   "<<p->second<<endl;
        p++;
    }
}
void display_map_2 (map <int,string> c){
     // display elements of the map
    map <int,string> :: iterator q;
    for (q = c.begin(); q!=c.end(); q++){
        cout<<(*q).first<<"   "<<(*q).second<<endl;
    }
}

void display_map_3 (map <int,string> c){
    for (auto &r : c){
        cout<<r.first<<"   "<<r.second<<endl;
    }
}

int main(){
    map <int,string> customer;
    customer[100] = "Dwayne";
    customer[200] = "Robert";
    customer[300] = "Antonio";
    customer[400] = "Thomas";
    customer[500] = "Bob";

    map <int,string> c {{10,"San francisco"},{20,"New Jersey"},{30,"Colombia"},{40,"New York"},{50,"Boston"}};
    
    cout<<c[10]<<endl;
    cout<<c[100]<<endl; // will not give an error and not print anything
    c[6]; // If no value is provided then empty string will be stored in case
    cout<<c.at(6)<<endl;

    cout<<c.size()<<endl;
    cout<<c.empty()<<endl; // if empty then 1 else 0

    // insert an element to the map
    c.insert({600,"Havanna"});
    c.insert(pair<int,string>(700,"Sydney"));
    display_map_3(c);

    c.clear(); // clears the map;
    display_map_1(c);

    //find the value in the map
    auto it = customer.find(100);
    if (it==customer.end()){
        cout<<"No such key present"<<endl;
    }
    else{
        cout<<it->second<<endl;
    }

    customer.erase(100); // key value pair of 3 is deleted
    display_map_2(customer);

    auto it2 = customer.find(200); // will give an error if 200 is not in map
    cout<<(*it2).second<<endl;


}




/*
maps in c++
1. normal map (time complexity is O(logn))
2. unordered map (time compleity is O(1))
3. multi map (rarely used)

2 types of array in c++     1. Numeric array        2. Associative array
    1. Numeric array : whose index are numbers
    2. Associative array : index can be string, int or anything else.
                           key -> index;  value -> value stored in key
                           key should be unique and cannot be changed and it can be inserted or deleted but cannot be altered

-> maps always arranges its key in sorted order.
-> In case keys are of string type they are sorted in dictionary order


Difference between maps and unordered maps
    1. inbuilt implementation
    2. time complexity O(1)
    3. valid keys data type

-> In unordered map, the keys are not stored in a sorted way
-> In normal maps, the keys are compared with other keys and then its position is decided. Normal maps uses RED BLACK TREES ALGORITHM
-> In unordered maps, the hash values of keys are calculated. This reduces time complexity of all its functions to O(1)
-> In unordered maps, we cannot use complex data tpes like pair because hash function is not defined for pair


In multimaps duplication of keys is allowed

*/
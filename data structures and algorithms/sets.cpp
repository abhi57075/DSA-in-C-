# include <iostream>
# include <set>
using namespace std;

void display_set_1 (set<string> s){
    for (string i : s){
        cout<<i<<" ";
    }
    cout<<endl;
}

void display_set_2 (set<string> s){
    for (auto it = s.begin(); it!= s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void display_set_3 (multiset<int> s){
    for (auto it = s.begin(); it!= s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    set <string> s;
    s.insert("abc");
    s.insert("ghi");
    s.insert("qwerty");
    s.insert("qwerty"); // unique elements in the set s
    display_set_1(s);
    auto it = s.find("abc");
    if (it==s.end()){
        cout<<-1<<endl;
    }
    else{
        cout<<*it<<endl; // abc will be printed
    }
    s.erase("abc");
    s.erase("abhi"); // will not throw an error
    display_set_2(s);

    // unoredered set works the same as unordered map
    // multiset allows insertion of duplicate values


    multiset <int> s2 = {10,10,10,20,30};
    // if we want to remove only the first occurence of an element in a multiset
    auto it3 = s2.find(10);
    if (it3!=s2.end()){
        s2.erase(it3);
    }
    display_set_3(s2);

    // if we want to remove all occurences of an element in a multiset
    s2.erase(10);
    display_set_3(s2);
    
    // in normal sets both of them will work the same as in normal set, each element is unique
}


/*
Sets
1.Unordered sets
2.Multi sets
3.Normal sets

Declaration: set<string> s
             set<set<int>> s;

All the values in set will be stored in sorted order
*/
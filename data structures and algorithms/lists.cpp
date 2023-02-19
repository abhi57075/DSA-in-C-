# include <iostream>
# include <list>
using namespace std;


void display_list (list <int> l){
    list <int> :: iterator p = l.begin();

    while (p!=l.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
}


int main(){

    list <int> l1 {10,23,12,12,45,76,53,98,78,72,9};
    list <string> l2;

    cout<<l1.size()<<endl;

    l1.push_back(1);
    l1.push_front(0);
    display_list(l1);

    l1.sort();
    display_list(l1);

    l1.reverse();
    display_list(l1);

    l1.remove(1000); // if 1000 is not there error will not be thrown
    display_list(l1);

    l1.remove(12); // if 12 is there all occurences of 12 will be removed
    display_list(l1);

    l1.clear(); // clears the entire list
    display_list(l1);
}
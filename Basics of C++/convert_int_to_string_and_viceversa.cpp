# include <iostream>
using namespace std;

int main(){
    int x = 10;
    string s = "My number is : ";
    string s2 = to_string(x);
    string ans = s+s2;
    cout<<ans<<endl;

    string p = "100 is my age 200";
    int y = stoi(p);
    cout<<++y<<endl;
}
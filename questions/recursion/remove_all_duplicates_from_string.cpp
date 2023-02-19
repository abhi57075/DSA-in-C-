# include <iostream>
using namespace std;

/*
string -> aaaabbbeeecdddd
ans -> abecd
*/

string remove_duplicate (string s){
    if (s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = remove_duplicate(s.substr(1));

    if (ch==ans[0]){
        return ans;
    }
    else{
        return ch+ans;
    }
}

int main(){
    cout<<remove_duplicate("aaaabbbeeecdddd")<<endl;
}
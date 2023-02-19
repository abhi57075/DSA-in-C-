# include <iostream>
using namespace std;

/*
string -> axxbdxcefxhix
ans -> abdcefhixxxxx
*/

string move_all_x (string s){
    if (s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = move_all_x(s.substr(1));
    
    if (ch == 'x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}

int main(){
    cout<<move_all_x("axxbdxcefxhix")<<endl;
}
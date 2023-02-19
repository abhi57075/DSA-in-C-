# include <iostream>
using namespace std;

/*
string -> AB
Substrings -> "", B, 66, A, BA, 66A, 65, B65, 6665
*/

void subseq (string s, string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int ascii_code = ch;
    string rest_of_the_string = s.substr(1);

    subseq(rest_of_the_string,ans);
    subseq(rest_of_the_string,ans + ch);
    subseq(rest_of_the_string,ans + to_string(ascii_code));
}

int main(){
    subseq("AB","");
}
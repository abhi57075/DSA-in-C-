# include <iostream>
using namespace std;

/*
If string is of length n then there will be a total of 2^n substrings
Example : "ABC"
Substrings -> "", A, B, AB, C, AC, BC, ABC
*/

void subsequence (string s, string ans){

    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string rest_of_string = s.substr(1);

    subsequence(rest_of_string, ans);
    subsequence(rest_of_string,ans+ch);

}

int main(){
    subsequence("ABC","");
}
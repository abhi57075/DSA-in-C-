# include <iostream>
using namespace std;

// I/P : aabbc      O/P : a2b2c1
// I/P : abcd       O/P : a1b1c1d1
// I/P : abbdcaas   O/P : a1b2d1c1a2s1

string shrink_string(string s){
    string ans;
    char temp = s[0];
    ans += temp;
    int count = 0;
    for (int i = 0; i<s.size(); i++){
        if (s[i] != temp){
            ans += to_string(count);
            count = 1;
            ans += s[i];
            temp = s[i];
        }
        else{
            count += 1;
        }
    }
    ans += to_string(count);
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<shrink_string(s)<<endl;
}
#include<iostream>
using namespace std;

// I/P : abcDEF
// O/P : ABCdef

string upper_lower_conversion(string s){
    int len = s.size();
    string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string l = "abcdefghijklmnopqrstuvwxyz";
    string ans;

    for (int i = 0; i<len; i++){
        if ((s[i]-'a')<=25 && (s[i]-'a')>=0){
            ans+=u[s[i]-'a'];
        }
        else{
            ans+=l[s[i]-'A'];
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<upper_lower_conversion(s)<<endl;
}
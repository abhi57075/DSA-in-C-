# include <iostream>
using namespace std;

int main(){
    string s = "aabhisshhhheeekkk";
    string ans;
    ans += s[0];
    for (int i = 0; i<s.size(); i++){
        if (s[i]!=s[i+1]){
            ans+=s[i+1];
        }
    }
    cout<<ans<<endl;
}
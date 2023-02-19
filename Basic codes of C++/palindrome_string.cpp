# include <iostream>
# include <algorithm>
using namespace std;

void palindrome1 (string s){
    // copy s to a
    string a = s;
    reverse(s.begin(),s.end());
    (s.compare(a)!=0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
}

void palindrome2 (string s){
    int start = 0;
    int end = s.size()-1;
    bool flag = 1;
    while(start<end){
        if (s[start]!=s[end]){
            flag = 0;
            break;
        }
        else{
            start++;
            end--;
        }
    }
    flag == 1?cout<<"Yes"<<endl:cout<<"No"<<endl;
}

int main(){
    string s;
    getline(cin,s);
    palindrome1(s);
    palindrome2(s);  
}
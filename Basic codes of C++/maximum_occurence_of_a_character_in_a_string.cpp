# include <iostream>
using namespace std;

int main(){
    // Method 1 : If all characters are lower case or upper case 
    string s = "abhishek jain";
    int max = 0;
    char res;
    int count[26] = {};
    for (int i = 0; i<s.size(); i++){
        count[s[i]-'a']++;
    }
    for (int i = 0; i<26; i++){
        if(count[i]>max){
            max = count[i];
            res = ('a'+i);
        }
    }
    cout<<res<<endl;
}
# include <iostream>
# include <vector>
using namespace std;

// I/P : welcome to coding
// O/P : coding to welcome

string reverse (string s){

    vector <string> words;
    int l = s.size();
    string temp;
    for (int i = 0; i<l; i++){
        if (s[i]==' '){
            words.push_back(temp);
            temp = "";
        }
        else{
            temp.push_back(s[i]);
        }
    }
    words.push_back(temp);


    int i = 0, j = words.size()-1;
    while (i<j){
        swap(words[i],words[j]);
        i++;
        j--;
    }

    
    string ans;
    for (int i = 0; i<words.size(); i++){
        ans+=words[i];
        ans.push_back(' ');
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    string ans = reverse(s);
    cout<<ans<<endl;
}
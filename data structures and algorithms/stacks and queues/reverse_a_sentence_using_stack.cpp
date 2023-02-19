# include <iostream>
# include <stack>
using namespace std;

void reverse_sentence(string s){
    stack <string> st;

    for (int i = 0; i<s.size(); i++){
        string word = "";
        while (s[i] != ' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while (st.empty()!=true){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    string s;
    getline(cin,s);
    reverse_sentence(s);
}
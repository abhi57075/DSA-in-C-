# include <iostream>
# include <stack>
using namespace std;

bool is_valid(string s){
    int n = s.size();
    stack <char> st;
    bool ans = true;
    for (int i = 0; i<n; i++){
        if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if (s[i]==')'){
            if (!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if (s[i]==']'){
            if (!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if (s[i]=='}'){
            if (!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if (!st.empty()){
        return false;
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    cout<<is_valid(s)<<endl;
}
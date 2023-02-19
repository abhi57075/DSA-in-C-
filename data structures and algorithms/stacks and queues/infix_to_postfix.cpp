# include <iostream>
# include <stack>
# include <math.h>
using namespace std;

/*
Example : (a- b/c)*(a/k -l)
Algorithm : 
1. If operand -> print
2. If '(' -> push to stack
3. If ')' -> pop from stack and pop until '(' is found.
4. If operator -> pop from stack and print until an operator with less precedence is found

Ans : abc/-ak/l-*
*/

int show_precedence(char c){
    if (c == '^'){
        return 3;
    } 
    else if (c == '*' || c == '/'){
        return 2;
    }
    else if (c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}   

string infix_to_postfix(string s){
    stack <char> st;
    string result;

    for (int i = 0; i<s.size(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            result+=s[i];
        }
        else if (s[i]=='('){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                result += st.top();
                st.pop();
            }
            if (!st.empty()){
                st.pop();
            } 
        }
        else{
            while (!st.empty() && (show_precedence(st.top()) > show_precedence(s[i]))){
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()){
        result += st.top();
        st.pop();
    }

    return result;
}

int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout<<infix_to_postfix(s)<<endl;
}
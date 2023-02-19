# include <iostream>
# include <stack>
# include <math.h>
# include <algorithm>
using namespace std;

/*
Example : (a- b/c)*(a/k -l)
Iterate this string backwards: )l- k/a (*)c/b - a(
Convert opening bracket to close brackets
Ans: 
1. If operand -> print
2. If '(' -> push to stack
3. If ')' -> pop form stack and print until '(' is found
4. If operator -> pop from stack and print until an operator with less precedence is found

Now by doing this we will get the ans as -> lka/-cb/a-*
Now reverse this and it will be the ans -> *-a/bc-/akl
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

string infix_to_prefix(string s){
    reverse(s.begin(),s.end());

    stack <char> st;
    string result;

    for (int i = 0; i<s.length(); i++){
        if ((s[i]>='a' && s[i]<='z') && (s[i]>='A' && s[i]<='Z')){
            result+=s[i];
        }
        else if (s[i]==')'){
            st.push(s[i]);
        }
        else if (s[i]=='('){
            while (!st.empty() && st.top()!=')'){
                result += st.top();
                st.pop();
            }
            if (!st.empty()){
                st.pop();
            }
        }
        else{
            while (!st.empty() && (show_precedence(st.top()) >= show_precedence(s[i]))){
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

    reverse(result.begin(),result.end());
    return result;
}

int main(){
    cout<<infix_to_prefix("(a-b/c)*(a/k-l)")<<endl;
}
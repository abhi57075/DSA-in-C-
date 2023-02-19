# include <iostream>
# include <vector>
using namespace std;

// I/P : )((()      O/P : 3 
// Explanation : 3 brackets required to make the paranthesis logical
//               that is one '(' and two '))'
//               '(' )((() ')' ')'

// I/P : ((      O/P : 2 
// Explanation : 2 brackets required to make the paranthesis logical
//               that is two '))'
//               (( ')' ')'

// I/P : (((((   O/P : 5 
// Explanation : 5 brackets required to make the paranthesis logical
//               that is five ')))))'
//               ((((( ')' ')' ')' ')' ')'

// I/P : ))(      O/P : 3 
// Explanation : 3 brackets required to make the paranthesis logical
//               that is two '((' and one ')'
//               '(' '(' ))( ')' 

int required_brackets(string s){
    vector <char> v;
    v.push_back(s[0]);
    for (int i = 1; i<s.size(); i++){
        if (v.size()!=0){
            if (v.at(v.size()-1)=='('  &&  s[i]==')'){
                v.erase(v.begin()+v.size()-1);
            }
            else{
                v.push_back(s[i]);
            }
        }
        else{
            v.push_back(s[i]);
        }
    }
    return v.size();
}

int main(){
    string s;
    getline (cin,s);
    cout<<required_brackets(s)<<endl;
}
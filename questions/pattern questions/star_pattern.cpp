# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

/*
        *
      * * *
    * * * * * 
      * * *
        *
*/

int main(){
    int start = 3;
    int end = 3;
    vector <string> v;
    string temp;
    for (int i = 0; i<=3; i++){
        for (int j = 0; j<7; j++){
            if(j>=start &&  j<=end){
                temp+="*";
            }
            else{
                temp+=" ";
            }
            temp+=" ";
        }
        cout<<temp<<endl;
        v.push_back(temp);
        temp = "";
        start--;
        end++;
    }
    
    reverse(v.begin(),v.end());
    v.erase(v.begin()+0);

    for (auto i: v){
        cout<<i<<endl;
    }
    
}
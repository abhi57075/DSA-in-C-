# include <iostream>
# include <vector>
using namespace std;

/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/

int main(){
    vector <string> v;
    string temp;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j<10; j++){
            if (j<=i){
                temp+="*";
            }
            else if (j>=9-i){
                temp+="*";
            }
            else{
                temp+=" ";
            }
        }
        v.push_back(temp);
        cout<<temp<<endl;
        temp = "";
    }

    /*reverse(v.begin(),v.end());
    for (auto i: v){
        cout<<i<<endl;
    } 
    */
    // we could write the above piece of code also
    for (int i = v.size()-1; i>=0; i--){
        cout<<v.at(i)<<endl;
    }   
}
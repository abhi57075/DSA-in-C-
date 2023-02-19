# include <iostream>
using namespace std;

/* 
*****
****
***
**
*
*/

int main(){
    string s;
    for (int i = 0; i<5; i++){ // row
        for (int j = 0; j<5-i; j++){
            s += '*';
        }
        cout<<s<<endl;
        s="";
    }
}
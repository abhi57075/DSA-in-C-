# include <iostream>
using namespace std;

/* 
    *
   **
  ***
 ****
*****
*/

int main(){
    string s;
    int k = 4;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            if (j>=k){
                s+='*';
            }
            else{
                s+=' ';
            }
        }
        cout<<s<<endl;
        s = "";
        k--;
    }
}
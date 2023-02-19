# include <iostream>
using namespace std;

/* 
*****
*   *
*   *
*****
*/

int main(){
    string s;
    for (int i = 0; i<4; i++){ // i -> row
        for (int j = 0; j<5; j++){ // j -> column
            if( i==0 || i==3){
                s+='*';
            }
            else{
                if (j == 0 || j == 4){
                    s+='*';
                }
                else{
                    s+=' ';
                }
            }
        }
        cout<<s<<endl;
        s="";
        
    }
    cout<<s<<endl;
}
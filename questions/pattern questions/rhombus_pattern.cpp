# include <iostream>
using namespace std;

/*
    * * * * *
   * * * * * 
  * * * * *
 * * * * *
* * * * *
*/

int main(){
    int a = 5;
    int b = 10;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<10; j++){
            if (j>=a && j<b){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
        }
        a--;
        b--;
        cout<<endl;
    }
}
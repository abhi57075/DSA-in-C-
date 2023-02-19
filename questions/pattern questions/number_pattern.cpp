# include <iostream>
using namespace std;

/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
*/

int main(){
    int a = 1;
    int start = 4;
    int end = 4;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            if (j >= start && j<=end){
                cout<<a<<" ";
                a++;
            }
            else{
                cout<<" ";
            }
        }
        a = 1;
        start--;
        end++;
        cout<<endl;
    }
}
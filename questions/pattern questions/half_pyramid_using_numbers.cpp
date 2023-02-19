# include <iostream>
using namespace std;

/* 
1
22
333
4444
55555
*/

int main(){
    string s;
    int k = 1;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j<5; j++){
            if (j<=i){
                cout<<k;
            }
        }
        cout<<endl;
        k++;
    }
    
}
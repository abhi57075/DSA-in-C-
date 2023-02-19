# include <iostream>
using namespace std;

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int main(){
    int k = 1;
    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if (i+j<=4){
                cout<<k<<" ";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        k=1;
    }
}
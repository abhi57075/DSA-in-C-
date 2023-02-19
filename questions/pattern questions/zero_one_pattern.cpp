# include <iostream>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

int main(){
    int a = 1,b = 0;
    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if (j<=i){
                if(i%2 == 0){
                    if ((i+j)%2 == 0){
                        cout<<a<<" ";
                    }
                    else{
                        cout<<b<<" ";
                    }
                }
                else{
                    if ((i+j)%2==0){
                        cout<<a<<" ";
                    }
                    else{
                        cout<<b<<" ";
                    }
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
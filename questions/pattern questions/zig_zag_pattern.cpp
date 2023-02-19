# include <iostream>
using namespace std;

/*
    *       *
   * *     * *
  *   *   *   *
 *     * *     *
*       *       *
*/

int main(){
    int n;
    cin>>n;
    int a = n-1;
    int b = n-1;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<=(n-1)*4; j++){
            if (j == a || j == a+(n-1)*2){
                cout<<"*";
            }
            else if (j == b || j == b+(n-1)*2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        a--;
        b++;
    }
}
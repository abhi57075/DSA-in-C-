# include <iostream>
# include <vector>
using namespace std;

/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/

int main(){
    vector <string> v;
    string temp = "1";
    int start = 1;
    for (int i = 0; i<5; i++){
        v.push_back(temp);
        ++start;
        temp = to_string(start)+" "+temp+" "+to_string(start); 
    }
    int k = 8;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<=10; j++){
            if (j==k){
                cout<<v.at(i)<<endl;
                break;
            }
            else{
                cout<<" ";
            }
        }
        k-=2;
    }

}
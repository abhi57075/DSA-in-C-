# include <iostream>
# include <map>
using namespace std;

/*
I/P : 8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
O/P : abc 3
      def 1
      ghj 3
      jkl 1
*/

int main(){
    map <string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i<n; i++){
        string s;
        cin>>s;
        m[s]+=1;
    }
    for (auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
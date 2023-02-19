// >> - extraction operator
// << - insertion operator 
# include <iostream>
using namespace std;

class complex{
    int r,i;
    public:
    complex (int x = 0, int y = 0){
        r = x;
        i = y;
    }
    friend ostream& operator << (ostream& var1, const complex& var2);
};
ostream& operator << (ostream& var1, const complex& var2){
    var1<<var2.r<<" + i"<<var2.i;
    return var1;
}

int main(){
    complex obj1(2,4);
    cout<<obj1<<endl;
}

# include <iostream>
using namespace std;

int bin_to_dec (string s){
    int dec = 0;
    int base = 1;
    int l = s.size();
    for (int i = l-1; i>=0; i--){
        if (s[i]=='1'){
            dec+=base;
        }
        base = base*2;
    }
    return dec;
}

int binary_to_decimal(string s){
    return stoi(s,0,2);
}

int main(){
    string s = "11001";
    cout<<bin_to_dec(s)<<endl;
    cout<<binary_to_decimal(s)<<endl;
}
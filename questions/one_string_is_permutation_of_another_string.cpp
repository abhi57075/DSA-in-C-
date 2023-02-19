# include <iostream>
using namespace std;

// I/P : abcde; bcdea   O/P : Yes
// I/P : abc; bda   O/P : No
// frequency of each element in both of the strings should be same that is both their lengths should be same

// total number of ASCII characters = 256 (0 to 255)

int main(){
    
    string a,b;
    getline(cin,a);
    getline(cin,b);

    bool flag = 1;
    
    int freq[256] = {};

    for (int i = 0; i<a.size(); i++){
        freq[a[i]]++;
    }

    for (int i = 0; i<b.size(); i++){
        freq[b[i]]--;
    }

    for (int i = 0; i<256; i++){
        if (freq[i]!=0){
            flag = 0;
            break;
        }
    }
    flag==1?cout<<"YES"<<endl:cout<<"NO"<<endl;

}

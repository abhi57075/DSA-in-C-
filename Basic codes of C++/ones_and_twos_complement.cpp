# include <iostream>
using namespace std;

char flip (char c){
    return c=='0'?'1':'0';
}

void ones_complement_and_twos_complement(string bin){
    int n = bin.size();
    string ones,twos;
    int i;

    // ones complement of 11001 is 00110 that is flip all 1s and 0s
    for (i = 0; i<n; i++){
        ones+=flip(bin[i]);
    }

    // twos complement of 11001 is 00111 (00110 + 1)
    // simply add 1 to the ones complement
    
    // for 2s complement go from right to left in ones complement.
    // if we get 1 make it 0 and keep going left till we encounter 0.
    // flip that 0 and go out of the loop

    twos = ones;
    for (i = n-1; i>=0; i--){
        if (ones[i]=='1'){
            twos[i]='0';
        }
        else{
            twos[i]='1';
            break;
        }
    }

    // if break statement was not executed it means the ones consists of all 1's in it.
    // in such case add extra 1 at the beginning

    if (i==-1){
        twos = '1' + twos;
    }
    cout<<ones<<endl;
    cout<<twos<<endl;
}

int main(){
    string s = "11001";
    ones_complement_and_twos_complement(s);
}
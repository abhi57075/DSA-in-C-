# include <iostream>
# include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        vector<long long int> pattern1;
        if(x<5){
            cout<<"NO"<<endl;
        }
        else{
            long start_of_pattern_1 = 5;
            long diff = 7;
            while (start_of_pattern_1 <= x){
                pattern1.push_back(start_of_pattern_1);
                start_of_pattern_1+=diff;
                diff+=2;
            }
            ////////////////////////////////////

            int index1 = 0;
            int q = 3;
            bool arr[x+1] = {false};
            long varlength = pattern1.size();
            for (int i = 5; i<=x; i++){
                if(i==pattern1[index1] && index1<varlength){
                    for(int j = i; j<=x; j+=q){
                        arr[j]=true;
                    }
                    q+=1;
                    index1++;
                }
            }
            arr[x]==1?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
    }
}
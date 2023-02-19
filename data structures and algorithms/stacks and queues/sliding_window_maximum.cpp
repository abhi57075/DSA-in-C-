# include <iostream>
# include <vector>
# include <deque>
using namespace std;

/*
Sliding window maximum
Array -> {1,3,-1,-3,5,3,6,7}
k =  3;
In window 1 : {1,3,-1} max is 3
In window 2 : {3,-1,-3} max is 3
In window 3 : {-1,-3,5} max is 5
In window 4 : {-3,5,3} max is 5
In window 5 : {5,3,6} max is 6
In window 6 : {3,6,7} max is 7
Ans array should be {3,3,5,5,6,7}
*/

int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for (auto &i: a){
        cin>>i;
    }

    deque<int> q; //elements of deque should be in non decreasing order
    // we are pushing indices into our deque
    vector<int> ans;
    for (int i = 0; i<k; i++){
        while (!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }

    for (auto i: q){
        cout<<i<<" ";
    }
    cout<<endl;
    
    ans.push_back(a[q.front()]);
    for (int  i = k; i<n; i++){
        if (q.front() == i-k){
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for (auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
# include <iostream>
# include <stack>
using namespace std;

void insert_at_bottom(stack <int> &st, int element){
    if (st.empty()){
        st.push(element);
        return;
    }

    int top_element = st.top();
    st.pop();
    insert_at_bottom(st,element);
    st.push(top_element);
}

void reverse (stack <int> &st){
    if (st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,element);
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(30);
    st.push(20);
    st.push(50);
    st.push(40);
    st.push(100);

    reverse (st);

    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
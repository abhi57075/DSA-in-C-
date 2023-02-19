# include <iostream>
using namespace std;
# define n 100

/* Operations on queue
1. enqueue(x) -> push
2. dequeue(x) -> pop (from the front)
3. peek() -> gives the value at the front
4. empty() -> 

Make 2 pointers front and back
*/

class queue {
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push (int x){
        if (back == n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        
        if (front == -1){
            front++;
        }
    }

    void pop(){
        if (front == -1 || front > back){
            cout<<"NO elements in queue!"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if (front == -1 || front > back){
            cout<<"No elements in queue!"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if (front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

}
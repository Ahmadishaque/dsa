#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int (size);
        top=-1;
    }

    void push(int data){
        if(size-top > 1){
            top++;
            arr[top]=data;
        }
        else{
            cout<< "stackis full"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is empty";
        }
    }
    bool empty(){
        if(top < 0){
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int peek(){
        if(top > 0){
            return arr[top];
        }
        else{
            cout << "stack is empty";
        }
        return -1;
    }

};

int main(){

    Stack st(6);

    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.pop();

    
    cout<< st.peek()<<endl;
    cout<< st.empty()<<endl;
    return 1;
}
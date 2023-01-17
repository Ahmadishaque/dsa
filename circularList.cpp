#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertNode(node* &tail, int element, int data){
    //empty list
    if(tail==NULL){
        node* temp = new node(data);
        tail=temp;
        temp->next= temp;
    }

    //non empty list
    else{
        node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }
        node* temp = new node(data);
        temp->next = curr->next;
        curr->next=temp;
    }
}

void deletenode(node* &tail, int element){
    if(tail == NULL){
        return;
    }

    else{
        node* prev=tail;
        node* curr=prev->next;

        while(curr->data != element){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next; 
        if(tail==NULL){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(node* &tail){
    node* temp = tail;
    do{
        cout<< tail->data<<" ";
        tail= tail->next;
    }while(tail != temp);

}

int main(){
    node* tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 6);
    insertNode(tail, 6, 9);    
    print(tail);
    cout<<endl;

    deletenode(tail, 6);
    print(tail);

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
}; 


void InsertAtHead(node* &head, int data){
    node* temp = new node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(node* &tail, int data){
    node* temp = new node(data);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(node*tail, node*head, int position, int data){
    node* temp=head;
    if(position==1){
        InsertAtHead(head, data);
        return;
    }
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        InsertAtTail(tail, data); 
        return;
    }
    node* NodeToInsert = new node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void print( node* &head){
    node*temp=head;
    while( temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
bool isLoop(node* &head) {
    if(head == NULL){
        return false;
    }

    map<node*, bool>visited;

    node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp]=1;
        temp = temp->next;
    }
    return false; 
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail=node1;

    InsertAtTail(tail, 20);

    InsertAtTail(tail, 30);

    InsertAtPosition(tail, head, 2, 25);

    tail->next = head->next;

    node* node2 = NULL;

    node2 = node1;

//    cout<<node1<<" "<<node2;
    // if(isLoop(head)){
    //     cout<< "Loop is present"<<endl;
    // }
    // else{
    //     cout<<"Loop is absent"<<endl;
    // }
    // //print(head);
    // cout<<endl;
    // cout<<"Tail"<< tail -> data<<endl;
    // cout<<"Head"<< head -> data<<endl;


}
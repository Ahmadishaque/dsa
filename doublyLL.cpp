#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,  int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev= temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    temp->prev=tail;
    tail->next=temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int positioin, int data){
    if(positioin==1){
        insertAtHead(head, data);
        return;
    }

    Node*temp = head;
    int count =1;

    while(count<positioin-1){
        count++;
        temp = temp->next;
    }

    if(temp->next==NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next=temp->next;
    nodeToInsert->prev=temp;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
}

void deletenode(Node* &head, int position){
    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        temp->next=NULL;
        head=temp->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count=1;
        while(count<position){
            count++;
            prev=curr;
            curr= curr->next;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next->prev=curr->prev;
        curr->next=NULL;
        delete curr;

    }

}

bool floydDetectLoop(Node* &head){
    Node* slow = head;
    Node* fast = head->next;

    if(head == NULL){
        return false;
    }

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow -> next;
       if(slow==fast){
        cout<<" the cycle is preseent is :"<<slow->data<<endl;
        return true;
       } 
    }
    return false;
}

int main(){
    Node* node1 =new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // print(head);
    // cout<<endl;
    


    insertAtHead(head, 15);
    // print(head);
    // cout<<endl;

    insertAtTail(tail, 20);
    // print(head);
    // cout<<endl;

    insertAtPosition(head, tail, 2, 45);

    tail-> next = head->next->next;
    // print(head);

    if(floydDetectLoop(head)){
        cout<<"loop is present"<<endl;

    }
    else{
        cout<< "loop is absent"<<endl;
    }




    //cout<< getLength(head)<<endl;
}


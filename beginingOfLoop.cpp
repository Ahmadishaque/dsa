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

void InsertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

Node* floydDetectLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;

    if(head == NULL){
        return NULL;
    }

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow -> next;
       if(slow==fast){
        //cout<<" the cycle is preseent is :"<<slow->data<<endl;
        return slow;
       } 
    }
    return NULL;
}

Node* getNode(Node* &head){
    if (head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow  = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection -> next;
    }
    return slow;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 40);
    InsertAtHead(head, 50);

    tail->next = head->next->next;

    if(floydDetectLoop(head) != NULL){
        cout<< "Loop is present "<< endl;      
    }
    else
    {
        cout<< "loop is absent" <<endl;
    }

    Node* loop = getNode(head);
    cout<< "loop starts at"<< loop->data <<endl;
    
}
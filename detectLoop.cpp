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
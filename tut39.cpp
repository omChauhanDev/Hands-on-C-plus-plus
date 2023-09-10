#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
            
    Node(int data){
        this->data = data;
        this->next = NULL;
    }            
};

bool detectLoop(Node* head) {

    if(head == NULL)
        return true;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}

int main(){
    return 0;
}
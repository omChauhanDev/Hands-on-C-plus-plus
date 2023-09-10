#include <iostream>
using namespace std;

class DoublyLL{
    
    public:
        int data;
        DoublyLL* next;
        DoublyLL* prev; 

    DoublyLL(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    
    ~DoublyLL(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void printDLL(DoublyLL* head){
    DoublyLL* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"  Head = "<<head->data<<"  "<<endl;
}

void insertAtHead(DoublyLL* &tail, DoublyLL* &head, int d) {

    //empty list
    if(head == NULL) {
        DoublyLL* temp = new DoublyLL(d);
        head = temp;
        tail = temp;
    }
    else{
        DoublyLL* temp = new DoublyLL(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}

DoublyLL* reverseLL(DoublyLL* head){
    DoublyLL* back = NULL;
    DoublyLL* cur = head;
    DoublyLL* forward = NULL;
    while(cur != NULL){
        forward = cur->next;
        cur->next = back;
        cur->prev = forward;
        back = cur;
        cur = forward;
    }
    return back;
}

int main(){
    DoublyLL* node1 = new DoublyLL(7);
    DoublyLL* head = node1;
    DoublyLL* tail = node1;
    printDLL(head);
    insertAtHead(tail, head, 6);
    insertAtHead(tail, head, 5);
    insertAtHead(tail, head, 4);
    insertAtHead(tail, head, 3);
    insertAtHead(tail, head, 2);
    insertAtHead(tail, head, 1);
    printDLL(head);
    head = reverseLL(head);
    printDLL(head);
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void printLL(Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"Head = "<<head->data<<endl;
    cout<<"Tail = "<<tail->data<<endl;
    cout<<endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(Node* &head, Node* &tail, int p, int d){
    if(p==1){
        insertAtHead(head, d);
        return;
    }
    else{
        Node* temp = new Node(d);
        Node* pre = head;
        int cnt = 1;
        while(cnt<p-1){
            pre = pre->next;
            cnt++;
        }
        temp->next = pre->next;
        pre->next = temp;
        if(temp->next == NULL){
            tail = temp;
        }
    }
}

void deleteN(Node* &head, Node* &tail, int p){
    if(p==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* pre = NULL;
        Node* cur = head;
        int cnt = 1;
        while(cnt<p){
            pre = cur;
            cur = cur->next;
            cnt++;
        }
        pre->next = cur->next;
        cur->next = NULL;
        delete cur;
        //For updating tail
        if(pre->next == NULL){
            tail = pre;
        }
    }
}
int getLen(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

bool unique(Node* head, int n){
    Node* pre = head;
    int count = 1;
    while(count<n-1){
        Node* cur = pre->next;
        while(cur!=NULL){
            if(pre->data==cur->data){
                return false;
            }
            cur=cur->next;
        }
        pre = pre->next;
        count++;
    }
    return true;
}


int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;
    deleteN(head, tail, 1);
    printLL(head, tail);

    insertAtHead(head, 1);
    printLL(head, tail);

    insertAtHead(head, 0);
    printLL(head, tail);

    insertAtTail(tail, 4);
    printLL(head, tail);

    insertAtTail(tail, 10);
    printLL(head, tail);

    insertAtPos(head, tail, 3, 15);
    printLL(head, tail);
    
    deleteN(head, tail, 5);
    printLL(head, tail);

    // insertAtPos(head, tail, 1, 15);
    // printLL(head, tail);
    
    int n = getLen(head);
    if(unique(head, n)){
        cout<<"Given Linked List is unique"<<endl;
    }
    else{
        cout<<"Given Linked List is not unique"<<endl;
    }

    return 0;
}
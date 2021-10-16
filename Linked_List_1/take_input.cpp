#include <iostream>
using namespace std;
#include "Node_Class.h"

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* takeInput(){
    Node* head = NULL;
    int data;
    cin >> data;
    while(data != -1){
        Node* newNode = new Node(data);
        if (head == NULL){
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}
int main(){
    Node* head = takeInput();
    print(head);



return 0;
}
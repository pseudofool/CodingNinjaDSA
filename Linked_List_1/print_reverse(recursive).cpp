Node *removeDuplicates(Node *head)
{
    //base case
    if (head == NULL || head->next == NULL){
        return head;
    }
    // recursive call
    Node* temp = removeDuplicates(head->next);
    //head->next = temp;
    if (head->data == temp->data){
        Node* a = head;
        head = head->next;
        delete a;
    }
    return head;
    
}
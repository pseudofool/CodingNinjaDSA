int length(Node *head)
{
    //Write your code here
    Node* temp = head;
    int len = 0;
    while(temp!= NULL){
        temp = temp->next;
        len++;
    }
    return len;
    
}
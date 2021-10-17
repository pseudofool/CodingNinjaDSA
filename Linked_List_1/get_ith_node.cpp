void printIthNode(Node *head, int i)
{
    //Write your code here
	int count = 0;
    Node* temp = head;
    while( temp != NULL && count < i){
        temp = temp->next;
        count++;
    }
    if (temp!= NULL){
        cout << temp->data;
    }
}
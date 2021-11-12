// time complexity - O(N)
Node *reverseLinkedListRec(Node *head)
{
    //base base
    if (head == NULL || head->next == NULL){
        return head;
    }
    //recursive call
    Node *tempH = reverseLinkedListRec(head->next);

    //calculation
    // note after reversing using recursion, head actually points to the end node of new Linked list
    Node* tail = head->next;
    tail->next = head;
	head->next = NULL;
    return tempH;
}
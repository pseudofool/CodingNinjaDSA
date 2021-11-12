Node *midPoint(Node *head)
{
    if (head == NULL){
        return head;
    }
    // slow and fast both pointing to head
    Node* fast = head;
    Node* slow = head;
    while(fast->next!= NULL && fast->next->next!= NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    else if(head2 == NULL)
    {
        return head1;
    }
    Node *fHead = NULL;
    Node *fTail = NULL;
    
    if (head1->data < head2->data){
        fHead = head1;
        fTail = head1;
        head1 = head1->next;
    }else{
        fHead = head2;
        fTail = head2;
        head2 = head2->next;
    }
    
    while(head1 != NULL && head2 != NULL){
    	if (head1->data < head2->data){
            fTail->next = head1;
            fTail = head1;
            head1 = head1->next;
        }else{
            fTail->next = head2;
            fTail = head2;
            head2 = head2->next;
        }
    }
    if (head1 == NULL){
        fTail->next = head2;
    }
    if (head2 == NULL){
        fTail->next = head1;
    }
    return fHead;
}

Node *mergeSort(Node *head){
    //base case
	if (head == NULL || head->next == NULL){
        return head;
    }
    // creating pivot
    Node *pivot = midPoint(head);
    
    // creating two heads for two LL
    Node *h1 = head;
    Node *h2 = pivot->next;

    // breaking the two LL
    pivot->next = NULL;
    
    // recurive call to sort the two LLs
    Node* fH1 = mergeSort(h1);
    Node* fH2 = mergeSort(h2);
    
    // merging the two sorted LLs
    Node *ans = mergeTwoSortedLinkedLists(fH1, fH2);
    return ans;
    
}
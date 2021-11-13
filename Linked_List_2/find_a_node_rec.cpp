int findNodeRec(Node *head, int n)
{
    // base case
	if (head == NULL)
        return -1;
    
    // recursive call
    int tempAns = findNodeRec(head->next, n);
    
    // checking at first node
    if (tempAns == -1){
        if (head->data == n){
            return 0;
        }
        return -1;
    }
    return tempAns+1;
}
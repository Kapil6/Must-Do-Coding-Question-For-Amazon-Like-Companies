/* Function to merge the two sorted linked lists */

// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    Node *ans = NULL;
    
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
        
    if (head1->data <= head2->data)
    {
        ans = head1;
        ans->next = sortedMerge(head1->next, head2);
    }
    else
    {
        ans = head2;
        ans->next = sortedMerge(head1, head2->next);
    }
    return ans;
}

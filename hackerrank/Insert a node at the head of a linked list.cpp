SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    n->next = llist;
    llist = n; 
    return llist;   
}
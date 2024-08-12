SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == nullptr){
        return new SinglyLinkedListNode(data);
    }
    
    SinglyLinkedListNode* i = head;
    while (i->next != nullptr){
        i = i->next;
    }
    i->next = new SinglyLinkedListNode(data);
    
    return head;
}   



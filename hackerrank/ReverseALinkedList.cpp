SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    
    SinglyLinkedListNode*  prev = nullptr, *temp = nullptr, *act = llist;
    
    while (act != nullptr) {
        temp = act->next;
        act->next = prev;
        prev = act;
        act =temp;
        
    }
    return prev;

}
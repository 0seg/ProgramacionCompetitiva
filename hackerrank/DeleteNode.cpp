
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

    if(llist == nullptr) return nullptr; 
    if(position == 0){
        llist =llist->next;
        return llist;
    }
    int steps = 0;
    SinglyLinkedListNode* it =llist;
    while(it != nullptr &&  steps != (position-1)){
        it = it->next;
        steps++;    

    }
    if(it == nullptr or it->next == nullptr) return llist;

    it->next = it->next->next;
    return llist;
}
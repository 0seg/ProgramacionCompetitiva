
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    int steps = 0;
    if(position == 0){
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        if(llist==nullptr){        
            llist = newNode;
        }else{
            steps++;
            newNode->next = llist;
            llist = newNode;}
    
    
    }else{
        SinglyLinkedListNode* currentNode = llist;
        while (currentNode->next != nullptr and steps != (position-1 )) {
            currentNode = currentNode->next;
            steps++;
        }
        SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        newNode->next = currentNode->next;
        currentNode->next = newNode;
        
        }

    return llist;
}
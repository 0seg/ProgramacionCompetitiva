

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    for(temp; temp!=nullptr; temp= temp->next){
        cout << temp->data << "\n";
    }
}
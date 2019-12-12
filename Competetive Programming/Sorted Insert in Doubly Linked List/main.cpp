DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp;
    temp->data = data;
    //if list is empty, temp becomes head
    if(head==NULL){
        head = temp;
        return head;
    }

    //if data is less than 1st data, temp is inserted before head
    if(data<=head->data){
        temp->next = head;
        head->prev = temp;
        head = temp;
        return head;
    }

    DoublyLinkedListNode* cur = head;
    DoublyLinkedListNode* prev;

    //iterating loop to find suitable position of temp
    while(data>cur->data){
        prev = cur;
        //if temp is the largest value in the entire list.
        if(cur->next == NULL){
            cur->next = temp;
            temp->prev = cur;
            return head;
        }
        cur = cur->next;
    }
    //data is less than cur and more than prev so insert between them
    prev->next = temp;
    cur->prev = temp;
    temp->next = cur;
    temp->prev = prev;
    return head;
}

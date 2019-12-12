int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* cur1 = head1;
    SinglyLinkedListNode* cur2 = head2;
    int l1 = 1;
    int l2 = 1;

    while(cur1->next!=NULL){
        cur1 = cur1->next;
        l1++;
    }
    cout<<"l1"<<l1;

    while(cur2->next!=NULL){
        cur2 = cur2->next;
        l2++;
    }
    cout<<"l2"<<l2;

    cur1 = head1;
    cur2 = head2;
    int x;
    if(l1 - l2 > 0){
        x = l1 - l2;
        while(x--)
            cur1 = cur1->next;

        while(cur1!=cur2){
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        cout<<cur1->data;
        return cur1->data;
    }
    else if(l2 - l1 > 0){
        x = l2 - l1;
        while(x--)
            cur2 = cur2->next;

        while(cur1!=cur2){
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        cout<<cur1->next;
        return cur1->data;
    }
    else{
        while(cur1!=cur2){
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        cout<<cur1->data;
        return cur1->data;
    }

    

}

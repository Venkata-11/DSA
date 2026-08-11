struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head != NULL && head->val == val){
        struct ListNode* remove = head;
        head = head->next;
        free(remove);
    }

    struct ListNode* temp = head;

    while(temp != NULL && temp->next != NULL){
        if(temp->next->val == val){
            struct ListNode *remove = temp->next;
            temp->next = remove->next;
            free(remove);
        }
        else{
            temp = temp->next;
        }
    }

    return head;
}

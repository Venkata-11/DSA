/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head,*temp;
    head=malloc(sizeof(struct ListNode));
    head->next=NULL;

    temp=head;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry!=0){
        int val1=0,val2=0;
        if(l1!=NULL){
            val1=l1->val;
        }
        if(l2!=NULL){
            val2=l2->val;
        }
        int sum=val1+val2+carry;
        temp->next=malloc(sizeof(struct ListNode));
        temp=temp->next;
        if(sum>9){
            sum=sum-10;
            carry=1;
        }
        else{
            carry=0;
        }
        temp->val=sum;
        temp->next=NULL;
        if(l1!=NULL)
            l1=l1->next;
        if(l2!=NULL)
            l2=l2->next;
    }
    return head->next;
}

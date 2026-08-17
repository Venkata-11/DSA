/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* temp,*head;
    head=malloc(sizeof(struct ListNode));
    head->next=NULL;

    temp=head;
    while(list1!=NULL || list2!=NULL){
        if(list1==NULL){
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        }
        else if(list2==NULL){
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        else if(list1->val<=list2->val){
            temp->next=list1;
            list1=list1->next;
            temp=temp->next;
        }
        else if(list1->val>list2->val){
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;
        }
    }
    return head->next;
}

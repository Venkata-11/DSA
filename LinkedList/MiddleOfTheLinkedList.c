/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int i=0;
    struct ListNode *temp1=head;
    struct ListNode *temp2=head;
    while(temp1!=NULL){
        i++;
        temp1=temp1->next;
    }
    int val=i/2;
    int j=0;
    while(j<=val-1){
        temp2=temp2->next;
        j++;
    }
    return temp2;
}

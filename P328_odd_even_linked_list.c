/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head||!(head->next))return head;
    struct ListNode *odd = head;
    struct ListNode *even = head->next;
    struct ListNode *tmp = even;
    while(even&&even->next){
        odd->next = even->next;
        odd = even->next;
        even->next = odd->next;
        even = odd->next;
    }
    odd->next = tmp;
    return head;
    
}

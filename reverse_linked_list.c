/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* next = NULL;
    struct ListNode* curr = NULL;
    struct ListNode* prev = NULL;
    while (head != NULL){
        curr = head; //curr becomes current
        next = head->next; //next becomes next
        head->next = prev; //next becomes prev - which starts at null
        head = next; //head becomes next, which is whats next
        prev = curr; //prev(what was NULL) becomes head (which was previous)
    }
    return prev;
}

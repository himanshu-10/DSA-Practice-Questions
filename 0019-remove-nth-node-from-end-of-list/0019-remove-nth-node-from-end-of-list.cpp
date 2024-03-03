/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
// private:
//     int count(ListNode* head){
//         int count = 0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             count++;
//             temp = temp -> next;
//         }
//         return count;
//     }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // BRUTHFORCE METHOD[TLE]
    // int noOfNode = count(head);
    // int a = noOfNode - n;
    // ListNode* remove = NULL;
    // ListNode* temp = head;

    // while(a-1){
    //     if(temp != NULL && temp -> next != NULL){
    //          temp = temp -> next;
    //     } 
    //     a--;
    // }
    // temp->next = remove;
    // ListNode*next2next = temp -> next;
    // if(temp-> next != NULL){
    //     temp = temp -> next;
    // }
    // delete(remove);
    // temp -> next = next2next;

    // return head;

    // APPROACH 2[TWO POINTER APPROACH]

    ListNode* dummy = new ListNode();
    dummy -> next = head;
    
    ListNode* fast = dummy;
    ListNode* slow = dummy;

    for(int i = 0; i<n; i++){
        fast = fast -> next;
    }
    while(fast -> next != NULL){
        fast = fast -> next;
        slow = slow -> next;
    }
   
    slow -> next = slow -> next -> next;
    // delete(slow -> next);

    return dummy->next;

    }
};
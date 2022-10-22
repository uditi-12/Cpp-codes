/*https://leetcode.com/problems/middle-of-the-linked-list/*/
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
public:
    ListNode* middleNode(ListNode* head) {
        stack<int>s;
        ListNode* h=head;
        while(h!=NULL){
            s.push(h->val);
            h=h->next;
        }
        int n=s.size();
        n=n/2;
        while(n!=0){
            n--;
            head=head->next;
        }
        return head;
    }
};

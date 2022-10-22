/*https://leetcode.com/problems/palindrome-linked-list/*/
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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* h=head;
        while(h!=NULL){
            s.push(h->val);
            h=h->next;
        }
        while(head!=NULL){
            int i=s.top();
            s.pop();
            if(i!=head->val)
                return false;
            head=head->next;
        }
        return true;
    }
};

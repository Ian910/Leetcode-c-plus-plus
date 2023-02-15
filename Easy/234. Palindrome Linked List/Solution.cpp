class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> headReverse;
        ListNode* temp = head;
        while (temp) {
            headReverse.push(temp->val);
            temp = temp->next;
        }
        while (head) {
            if (headReverse.top() != head->val) return false;
            headReverse.pop();
            head = head->next;
        }
        return true;
    }
};
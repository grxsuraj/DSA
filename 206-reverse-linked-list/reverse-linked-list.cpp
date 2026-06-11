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
    ListNode* reverseList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        // Store values
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Replace values in reverse order
        temp = head;
        int i = arr.size() - 1;

        while (temp != NULL) {
            temp->val = arr[i--];
            temp = temp->next;
        }

        return head;
    }
};
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(begin(nums),end(nums));
        while(head && st.find(head->val)!=st.end()){
            head=head->next;
        }
        ListNode* crr=head;
        while(crr!=NULL && crr->next!=NULL){
            if(st.find(crr->next->val)!=st.end()){
                crr->next=crr->next->next;
            }
            else crr=crr->next;
        }
        return head;

    }
};
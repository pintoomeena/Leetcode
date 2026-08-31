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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nums;
        if(head->next == NULL || head->next->next == NULL)return {-1, -1};
        ListNode* prev = head;
        ListNode* temp = head->next;
        int cnt =2;
        while(temp->next != NULL){
            ListNode* next = temp->next;
            if(temp->val > prev->val && temp->val > next->val ||
               temp->val < prev->val && temp->val < next->val){
                nums.push_back(cnt);
            }
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        if(nums.size()<2)return {-1, -1};

        int maxi = nums[nums.size()-1] - nums[0];
        int mini = INT_MAX;
        for(int i = 1; i < nums.size(); i++) {
            mini = min(mini, nums[i] - nums[i-1]);
        }
        return{mini, maxi};
    }
};
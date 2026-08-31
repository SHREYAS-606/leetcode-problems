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
        
        ListNode* cur=head->next;
        ListNode* prev=head;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int i=2;
        int a=-1,b=-1;
        while(cur->next!=NULL){
            if((cur->val>prev->val && cur->val>cur->next->val)||(cur->val<prev->val && cur->val<cur->next->val)){
                if(a==-1){
                    a=i;
                }else if(b==-1){
                    b=i;
                    maxi=max(b-a,maxi);
                    mini=min(b-a,mini);

                }else{
                    maxi=max(i-a,maxi);
                    mini=min(i-b,mini);
                    b=i;
                }
            }
            prev=cur;
            cur=cur->next;
            i++;
        }
        if(maxi==INT_MIN && mini==INT_MAX)return {-1,-1};
        return {mini,maxi};


        
    }
};
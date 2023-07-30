//Leetcode link: https://leetcode.com/problems/middle-of-the-linked-list/description/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
     ListNode *temp=head; //move by one step
     ListNode *temp2=head; //move by two step

        while(temp2!=NULL && temp2->next!=NULL){
            temp=temp->next;
            temp2=temp2->next->next;
        }

return temp;
    }
};

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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        
        if(left==NULL){
            return right;
        }
        
        if(right==NULL){
            return left;
        }
        
        ListNode* ans=new ListNode(-1);
        ListNode* mptr=ans;
        
        while(left!=NULL && right!=NULL){
            
            if(left->val<=right->val){
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            
            else{
                mptr->next=right;
                mptr=right;
                right=right->next;
                
            }
        }
        
        if(left!=NULL){
            mptr->next=left;  //aage ki ll khud chipk jaaegi
        }
        
        if(right!=NULL){
            mptr->next=right;
        }
        
        return ans->next;  //cox first node is -1 uske aage se ll start h
        
    }
};
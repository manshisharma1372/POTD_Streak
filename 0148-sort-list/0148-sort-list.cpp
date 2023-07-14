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
    
      ListNode* merge(ListNode* left, ListNode* right) {
        
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
    
    ListNode* findMid(ListNode* head){
        
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        /*
        while(fast!=NULL && fast->next!=NULL){
              slow=slow->next;
              fast=fast->next->next;
                
            }
        */
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        
        //step 1 find mid
        ListNode* mid= findMid(head);
        
        
        //step 2 recusrsively call sort for left and right half
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        
        left=sortList(left);
        right=sortList(right);
        
        //step 3 merge
        ListNode* mergedll=merge(left,right);
        return mergedll;
        
    }
};
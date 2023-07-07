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
    
    int findLength(ListNode* &head){
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
         if(head==NULL){
        
     
        return NULL;
    }
    
    if(head->next==NULL){
        
        //1 Node
        return head;
        
    }
    
    int len=findLength(head);
    
    if(k>len){
    
        return head;
    }
    
    //no of nodes in ll >=K 
    
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    
    if(forward!=NULL){
        //we still have nodes to reverseKNode
          head->next= reverseKGroup(forward,k);
    }
 
    return prev;
        
    }
};
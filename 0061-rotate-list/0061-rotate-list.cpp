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
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }
        
        int len=findLength(head);
        
        int actualRotation=k%len;
        
        if(actualRotation==0){
            return head;
        }
        
       int newlastNodePos=len-actualRotation-1;
        ListNode* newLastNode=head;
        for(int i=0;i<newlastNodePos;i++){
            newLastNode=newLastNode->next;
        }
        
         ListNode* newhead=newLastNode->next;
        newLastNode->next=NULL;
        
         ListNode* it=newhead;
        while(it->next!=NULL)
        {
            it=it->next;
        }
        it->next=head;
        return newhead;
    }
};
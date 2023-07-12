/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a=headA;
        ListNode* b=headB;
        
        while(a->next!=NULL && b->next!=NULL){
            
            if(a==b){
                return a;
            }
            a=a->next;
            b=b->next;
        }
        
        if(a->next==NULL){
            
            //b waali badi ll hai ya eql h
            //find len of it
            int blen=0;
            while(b->next!=NULL){
                blen++;
                b=b->next;
            }
            
            while(blen--){
                headB=headB->next;
            }
        }
        
        else{
              
            //a waali badi ll hai ya eql h
            //find len of it
            int alen=0;
            while(a->next!=NULL){
                alen++;
                a=a->next;
            }
            
            while(alen--){
                headA=headA->next;
            }
        
        }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        
        return headA;
    }
};
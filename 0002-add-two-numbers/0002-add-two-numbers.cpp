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
    
    ListNode* reverse(ListNode* &head){
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=curr->next;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
        
    }
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        
        if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }
    
   
    
    
    
    //step 2 add both ll
    ListNode* ansHead=NULL;
    ListNode* ansTail=NULL;
    
    int carry=0;
    
    while(head1!=NULL && head2!=NULL){
        
        //calc sum
        int sum=carry+head1->val+head2->val;
        
        //calc digit 
        int digit=sum%10;
        
        //calc carry
        carry=sum/10;
        
        //creating new node for digit
        ListNode* newnode=new ListNode(digit);
        
        //attach newnode in ans waali ll
        if(ansHead==NULL){
            //first Node 
            
            ansHead=newnode;
            ansTail=newnode;
        }
        else{
            ansTail->next=newnode;
            ansTail=newnode;
        }
        
        head1=head1->next;
        head2=head2->next;
        
    }
    
    
    //head1 ka size bada tha head2 se
    while(head1!=NULL){
        
        int sum=carry+head1->val;
        int digit=sum%10;
        carry=sum/10;
        ListNode* newnode=new ListNode(digit);
        ansTail->next=newnode;
        ansTail=newnode;
        head1=head1->next;
    }
    
    //head2 list ki len head1 se jyada h
     while(head2!=NULL){
        
        int sum=carry+head2->val;
        int digit=sum%10;
        carry=sum/10;
        ListNode* newnode=new ListNode(digit);
        ansTail->next=newnode;
        ansTail=newnode;
        head2=head2->next;
    }
    
    //handle carry if both ll finish
    
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        ListNode* newnode=new ListNode(digit);
        ansTail->next=newnode;
        ansTail=newnode;
    }
    
    //reverse ans ll
    
    return ansHead;
        
        
    }
};
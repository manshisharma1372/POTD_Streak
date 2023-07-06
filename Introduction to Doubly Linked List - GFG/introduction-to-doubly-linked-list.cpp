//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* prev;
    int data;
    Node* next;
 
    Node()
    { 
        prev = NULL; 
        data = 0;
        next = NULL;
    }
    
    Node(int value)
    { 
        prev = NULL; 
        data = value;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;
 
    Node()
    { 
        prev = NULL; 
        data = 0;
        next = NULL;
    }
    
    Node(int value)
    { 
        prev = NULL; 
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
  

  
  void insertAtTail(Node* &head, Node* &tail, int data){
      
      if(head==NULL){
          Node* newnode=new Node(data);
          head=newnode;
          tail=newnode;
          return;
      }
      
        //step 1 create a Node
     Node* newnode=new Node(data);
     
     //step 2 connet tail ka next to  new Node
        tail->next=newnode;
      
     //step 3 connect newnode ka prev to tail
        newnode->prev=tail;
        
     
     //step 4 Update tail
     tail=newnode;
      
      
  }
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head=NULL;
        Node* tail=NULL;
        
        for(int i=0;i<arr.size();i++){
            insertAtTail(head,tail,arr[i]);
        }
        
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructDLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
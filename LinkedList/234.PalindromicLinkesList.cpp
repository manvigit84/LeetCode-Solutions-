class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast && fast->next){
            slow= slow->next;
            fast = fast->next->next; //we get the middle element of linked list
        }
        
        ListNode* prev= NULL;     // reversing the other half of linked list
        ListNode* curr= slow;

        while(curr){
      
           ListNode* nextNode= curr->next;

        curr->next = prev;

        prev = curr;
        curr = nextNode;
        }
          ListNode* first = head;  //traversing and comparing both halves
          ListNode* second = prev; 

          while(second){

            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
          }
          return true;
    
         }
};
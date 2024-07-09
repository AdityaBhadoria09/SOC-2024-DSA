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
     
 
 ListNode*reversell(ListNode*head){
 ListNode*prev=nullptr;
 ListNode*next=nullptr;
 while(head!=nullptr){
 next=head->next;
 head->next=prev;
 prev=head;
 head=next;
 }
head=prev;
return head;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
         head=reversell(head);
         ListNode*current=head;
 ListNode*previous=head;
 if(head==nullptr){
    cout<<"list is empty\n";
 }
 else if(n==1){
    head=current->next;
    delete current;
    
    }

 else{
    while(n!=1){
        previous=current;
        current=current->next;
        n--;
    }
    previous->next=current->next;
    delete current; //cant delete node that was created with new node has to use delete instead of free
    current=nullptr;}

    head=reversell(head);
    return head;
    }
};
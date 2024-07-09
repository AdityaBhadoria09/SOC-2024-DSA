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
ListNode*push(ListNode*head,int value){
    ListNode*newp=new ListNode(value);
    
    newp->next=head;
    head=newp;
    return head;
}
ListNode*reversell(ListNode*head){
    if(head==nullptr){
        return head;
    }
    ListNode*current=nullptr;
    ListNode*next=head->next;
    head->next=nullptr;

    while(next!=nullptr){
        current=next;
        next=next->next;
        current->next=head;
        head=current;
    }
    return head;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->val==0){
        return l2;
    }
    if(l2->val==0){
        return l1;
    }
    ListNode*ptr1=l1;
    ListNode*ptr2=l2;
    ListNode*head3=nullptr;
    int carry=0,sum;
    while(ptr1||ptr2){
        sum=0;
        if(ptr1){
            sum+=ptr1->val;
        }
        if(ptr2){
            sum+=ptr2->val;
        }
        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        head3=push(head3,sum);
        if(ptr1){
            ptr1=ptr1->next;
        }
        if(ptr2){
            ptr2=ptr2->next;
        }
       
         }
          if(carry){
            head3=push(head3,carry);
        }
    head3=reversell(head3);
      return head3;
    }
};
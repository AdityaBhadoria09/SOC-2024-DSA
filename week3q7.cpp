#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        // Traverse both lists. When one pointer reaches the end, switch to the other list's head.
        // They will either meet at the intersection node or at the end (nullptr).
        while (ptr1 != ptr2) {
            ptr1 = (ptr1 == nullptr) ? headB : ptr1->next;
            ptr2 = (ptr2 == nullptr) ? headA : ptr2->next;
        }

        return ptr1; // If they intersect, ptr1/ptr2 will be at the intersection node. Otherwise, it will be nullptr.
    }
};

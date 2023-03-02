
#include <iostream>
struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 int main(void){
    struct ListNode x = {val:5}; 
    return 0;
 }
 
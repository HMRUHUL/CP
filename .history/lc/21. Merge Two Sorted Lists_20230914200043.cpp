#include<bits/stdc++.h>
using namespace std;

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* ptr = new ListNode();
        ListNode* curr = ptr;
        
        while(list1 && list2){
              if(list1->val > list2 ->val){
                 curr->next = list2;
                 list2 = list2 -> next;
                }
             else{
                 curr->next = list1;
                 list1 = list1->next;
              }
            curr = curr->next;
        }
        if(list1) curr->next = list1;
        if(list2) curr->next = list2;

        return ptr->next;

    }
};

int main(){
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    Solution sol;
    ListNode* res = sol.mergeTwoLists(head1, head2);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
}
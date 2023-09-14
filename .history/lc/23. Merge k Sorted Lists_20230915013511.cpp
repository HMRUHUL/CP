#include<bits/stdc++.h>
using  namespace std;

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>>pq;
        if(lists.size()==0) return NULL;
        for(int i=0;i<lists.size();i++){
            ListNode* p=lists[i];
            while(p){
                pq.push(p->val);
                p=p->next;
            }
        }
        if(pq.size()==0) return NULL;
        ListNode* head = NULL;
        while(!pq.empty()){
            head=new ListNode(pq.top(), head);
            pq.pop();
        }
        return head;
    }
};

int main(){
    Solution s;
    vector<ListNode*> lists;
    ListNode* head1 = new ListNode(1);
    ListNode* head2 = new ListNode(4);
    ListNode* head3 = new ListNode(5);
    head1->next=head2;
    head2->next=head3;
    lists.push_back(head1);
    head1 = new ListNode(1);    
    head2 = new ListNode(3);
    head3 = new ListNode(4);
    head1->next=head2;  
}
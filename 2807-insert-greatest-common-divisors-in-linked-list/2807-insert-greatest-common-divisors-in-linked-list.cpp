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
    int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p1=head;
        ListNode* p2=head->next;
        
        while(p2!=NULL){
            int num=gcd(p1->val, p2->val);
            ListNode* newnode= new ListNode();
            newnode->val=num;
            newnode->next=p1->next;
            p1->next=newnode;
            
            p2=p2->next;
            p1=newnode->next;
        }
       return head; 
    }
};
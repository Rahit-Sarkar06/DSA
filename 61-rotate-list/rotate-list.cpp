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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int n = 0;
        ListNode *prev;
        ListNode* temp = head;
        while (temp != NULL) {
            n++;
            prev=temp;
            temp = temp->next;
        }

        k = k % n;
        if (k == 0)
            return head;
        int cnt = 0;
        ListNode* c = head;
        ListNode* p;
        n-=k+1;
        while(cnt<n){
            c=c->next;
            cnt++;
        }
        ListNode *m=c->next;
        c->next=NULL;
        prev->next=head;
        head=m;     
        
        return head;
    }
};
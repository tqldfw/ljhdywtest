/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
if(!head)
{return head;}
struct ListNode* temp=malloc(sizeof(struct ListNode));
temp->next=head;
struct ListNode* new=temp;
while(new->next&&new->next->next)
{
    if(new->next->val==new->next->next->val)
    {
        int x=new->next->val;
        while(new->next&&new->next->val==x)
        {
            new->next=new->next->next;
        }
    }
    else
    {new=new->next;}
}
return temp->next;
}

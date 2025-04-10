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
 const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 1;
        int peeche = 0;
        ListNode* temp = head;
        while(head->next!=NULL){
            count++;
            head = head->next;
        }
        peeche = count/2;
        while(peeche--){
            temp = temp->next;
        }

        return temp;
    }
};

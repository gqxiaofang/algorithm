#include<iostream>
using namespace std;
#include <string>
struct ListNode {
    int m_nKey;
    ListNode *m_pNext;
};

int main()
{
    int nodeNum,k;
    ListNode *myList = new ListNode;
    myList->m_nKey = -1;    
    myList->m_pNext = NULL;
    ListNode *cur = myList;
    while(cin>>nodeNum)
    {
        while(nodeNum--)
        {
            int val;
            cin >> val;
            ListNode *tmp = new ListNode;
            tmp->m_nKey = val;
            tmp->m_pNext = NULL;
            cur->m_pNext = tmp;
            cur = cur->m_pNext;
        }
        cur = myList->m_pNext;
        ListNode *slow = myList->m_pNext;

        cin >> k;
        if(k == 0){
            cout << 0 << endl;
            continue;
        }
        while(k>1){
            cur = cur->m_pNext;
            k--;
        }
        while(cur->m_pNext){
            slow = slow->m_pNext;
            cur = cur->m_pNext;
        }
        cout << slow->m_nKey << endl;
    }
    system("pause");
    return 0;
}
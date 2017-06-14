//
// Created by 郑巍 on 2017/4/14.
//

#include "AddTwoNumbers.h"


//    int num1 = 342;
//    int num2 = 465;
//
//    ListNode* p1 = new ListNode();
//    ListNode* p2 = new ListNode();
//    ListNode* p3 = p1;
//    ListNode* p4 = p2;
//
//    while (num1 / 10 != 0)
//    {
//        int i = num1 % 10;
//        num1 = num1 / 10;
//        p1->next = new ListNode(i);
//        p1 = p1->next;
//        p1->next = NULL;
//    }
//    p1->next = new ListNode(num1);
//    p1 = p1->next;
//    p1->next = NULL;
//
//    while (num2 / 10 != 0)
//    {
//        int m = num2 % 10;
//        num2 = num2 / 10;
//        p2->next = new ListNode(m);;
//        p2 = p2->next;
//        p2->next = NULL;
//    }
//    p2->next = new ListNode(num2);
//    p2 = p2->next;
//    p2->next = NULL;
//
//    ListNode* p5 = addTwoNumbers(p3->next, p4->next);
//    while (p5 != NULL)
//    {
//        cout<<p5->val<<endl;
//        p5 = p5->next;
//    }

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode head(0);
    ListNode* p = &head;
    int extra = 0;


    while (l1 || l2 || extra)
    {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
        extra = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;

        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }

    return head.next;
}
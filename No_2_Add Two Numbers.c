#include<stdio.h>
#include<stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * @link https://leetcode.com/problems/add-two-numbers/
 * @title  Add Two Numbers
 */ 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *r, *t, *node;
    int num = 0;
    int val = 0;

    r = (struct ListNode *)malloc(sizeof(struct ListNode));
    r->next = NULL;
    t = r;
    
    while (l1 != NULL || !l2 != NULL || num != 0) {

        node = (struct ListNode *)malloc(sizeof(struct ListNode));  
        val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + num;
        
        node->val = val % 10;
        node->next = NULL;
        num = val / 10;

        t->next = node;
        t = node;

        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    
    t = r->next;
    free(r);
    return t;
}


//
// Created by garen-lee on 2025/1/31.
/**
  ******************************************************************************
  * @file           : L23_mergeKLists.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/31
  ******************************************************************************
  */
//

#include "L23_mergeKLists.h"

ListNode *L23_mergeKLists::mergeKLists(vector<ListNode *> &lists){
    priority_queue<Status> q;
    for (auto node: lists) {
        if (node) q.push({node->val, node});
    }
    ListNode head, *tail = &head;
    while (!q.empty()) {
        auto status = q.top();
        q.pop();
        tail->next = status.ptr;
        tail = tail->next;
        if(status.ptr->next)
            q.push({status.ptr->next->val, status.ptr->next});
    }
    return head.next;

}

void L23_mergeKLists::test(){
    vector<vector<int>> tree_vals = {
            {1, 4, 5},
            {1, 3, 4},
            {2, 6}
    };
    vector<ListNode *> lists;
    ListNode* ans;
    for (auto &tree_val : tree_vals) {
        lists.push_back(create_list(tree_val));
    }
    ans = mergeKLists(lists);
    print_list(ans);
    lists.clear();
    tree_vals = { };
    for (auto &tree_val : tree_vals) {
        lists.push_back(create_list(tree_val));
    }
    ans = mergeKLists(lists);
    print_list(ans);
    lists.clear();
    tree_vals = {{}};
    for (auto &tree_val : tree_vals) {
        lists.push_back(create_list(tree_val));
    }
    ans = mergeKLists(lists);
    print_list(ans);
}
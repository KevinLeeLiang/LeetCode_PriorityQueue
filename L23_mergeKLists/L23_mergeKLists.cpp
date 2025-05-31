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

ListNode *L23_mergeKLists::mergeKLists(vector<ListNode *> &lists) {
    priority_queue<Status> q;
    for (auto &list : lists) {
        while (list) {
            q.push(Status(list->val, list));
            list = list->next;
        }
    }
    ListNode *dummy = new ListNode(-1);
    ListNode *cur = dummy;
    while (!q.empty()) {
        Status status = q.top();
        q.pop();
        cur->next = status.ptr;
        cur = cur->next;
        if (q.empty()) {
            cur->next = nullptr;
        }
    }
    return dummy->next;
}

void L23_mergeKLists::test() {
    vector<vector<int>> tree_vals = {
            {1, 4, 5},
            {1, 3, 4},
            {2, 6}
    };
    vector<ListNode *> lists;
    ListNode *ans;
    for (auto &tree_val : tree_vals) {
        lists.push_back(create_list(tree_val));
    }
    ans = mergeKLists(lists);
    print_list(ans);
    lists.clear();
    tree_vals = {};
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
    lists.clear();
    tree_vals = {{-1, -1, -1}, {-2, -2, -1}};
    for (auto &tree_val : tree_vals) {
        lists.push_back(create_list(tree_val));
    }
    ans = mergeKLists(lists);
    print_list(ans);
}
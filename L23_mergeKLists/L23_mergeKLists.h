//
// Created by garen-lee on 2025/1/31.
/**
  ******************************************************************************
  * @file           : L23_mergeKLists.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/31
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L23_MERGEKLISTS_H
#define PRIORITYQUEUE_L23_MERGEKLISTS_H

#include "util.h"
class L23_mergeKLists : public LeetcodePriorityQueue{
private:
    ListNode* mergeKLists(vector<ListNode*>& lists) ;
public:
    struct Status {
        int val;
        ListNode *ptr;
        bool operator < (const Status &rhs) const {
            return val > rhs.val;
        }
    };
    L23_mergeKLists(){}
    void test();
};


#endif //PRIORITYQUEUE_L23_MERGEKLISTS_H

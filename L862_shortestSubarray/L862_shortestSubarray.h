//
// Created by garen-lee on 2025/5/17.
/**
  ******************************************************************************
  * @file           : L862_shortestSubarray.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/17
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L862_SHORTESTSUBARRAY_H
#define PRIORITYQUEUE_L862_SHORTESTSUBARRAY_H

#include "util.h"
class L862_shortestSubarray : public LeetcodePriorityQueue {
private:
    int shortestSubarray(vector<int>& nums, int k);
public:
    L862_shortestSubarray() {}
    void test();
};


#endif //PRIORITYQUEUE_L862_SHORTESTSUBARRAY_H

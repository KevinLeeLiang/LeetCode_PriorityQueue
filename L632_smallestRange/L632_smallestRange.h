//
// Created by garen-lee on 2025/4/5.
/**
  ******************************************************************************
  * @file           : L632_smallestRange.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/5
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L632_SMALLESTRANGE_H
#define PRIORITYQUEUE_L632_SMALLESTRANGE_H

#include "util.h"
class L632_smallestRange : public LeetcodePriorityQueue {
private:
    vector<int> smallestRange(vector<vector<int>>& nums);
public:
    L632_smallestRange() {}
    void test();
};


#endif //PRIORITYQUEUE_L632_SMALLESTRANGE_H

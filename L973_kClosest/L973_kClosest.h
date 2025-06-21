//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L973_kClosest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L973_KCLOSEST_H
#define PRIORITYQUEUE_L973_KCLOSEST_H

#include "util.h"
class L973_kClosest : public LeetcodePriorityQueue {
private:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k);
    void random_select(vector<vector<int>> &points, int left, int right, int k);
    mt19937 gen{random_device{}()};
public:
    L973_kClosest() {}
    void test();
};


#endif //PRIORITYQUEUE_L973_KCLOSEST_H

//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1094_carPooling.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1094_CARPOOLING_H
#define PRIORITYQUEUE_L1094_CARPOOLING_H

#include "util.h"
class L1094_carPooling : public LeetcodePriorityQueue {
private:
    bool carPooling(vector<vector<int>>& trips, int capacity);
public:
    L1094_carPooling() {}
    void test();
};


#endif //PRIORITYQUEUE_L1094_CARPOOLING_H

//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L621_leastInterval.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L621_LEASTINTERVAL_H
#define PRIORITYQUEUE_L621_LEASTINTERVAL_H

#include "util.h"
class L621_leastInterval : public LeetcodePriorityQueue {
private:
    int leastInterval(vector<char> &tasks, int n);
public:
    L621_leastInterval() {}
    void test();
};


#endif //PRIORITYQUEUE_L621_LEASTINTERVAL_H

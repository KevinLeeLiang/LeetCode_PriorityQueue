//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1046_lastStoneWeight.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1046_LASTSTONEWEIGHT_H
#define PRIORITYQUEUE_L1046_LASTSTONEWEIGHT_H

#include "util.h"
class L1046_lastStoneWeight : public LeetcodePriorityQueue  {
private:
    int lastStoneWeight(vector<int>& stones);
public:
    L1046_lastStoneWeight() {}
    void test();
};


#endif //PRIORITYQUEUE_L1046_LASTSTONEWEIGHT_H

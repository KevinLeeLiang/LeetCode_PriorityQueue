//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L347_topKFrequent.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L347_TOPKFREQUENT_H
#define PRIORITYQUEUE_L347_TOPKFREQUENT_H

#include "util.h"
class L347_topKFrequent : public LeetcodePriorityQueue{
private:
    vector<int> topKFrequent(vector<int>& nums, int k);
public:
    L347_topKFrequent(){}
    void test();
};


#endif //PRIORITYQUEUE_L347_TOPKFREQUENT_H

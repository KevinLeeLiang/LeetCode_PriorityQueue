//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L692_topKFrequent.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L692_TOPKFREQUENT_H
#define PRIORITYQUEUE_L692_TOPKFREQUENT_H

#include "util.h"
class L692_topKFrequent : public LeetcodePriorityQueue {
private:
    vector<string>topKFrequent(vector<string>& nums, int k);
public:
    L692_topKFrequent() {}
    void test();
};


#endif //PRIORITYQUEUE_L692_TOPKFREQUENT_H

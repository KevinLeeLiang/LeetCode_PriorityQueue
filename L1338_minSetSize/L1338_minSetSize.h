//
// Created by garen_lee on 2025/8/2.
/**
  ******************************************************************************
  * @file           : L1338_minSetSize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/2
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1338_MINSETSIZE_H
#define PRIORITYQUEUE_L1338_MINSETSIZE_H

#include "util.h"
class L1338_minSetSize : public LeetcodePriorityQueue {
private:
    int minSetSize(vector<int> &arr);
public:
    L1338_minSetSize() {}
    void test();
};


#endif //PRIORITYQUEUE_L1338_MINSETSIZE_H

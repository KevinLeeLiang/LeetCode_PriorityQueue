//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L451_frequencySort.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L451_FREQUENCYSORT_H
#define PRIORITYQUEUE_L451_FREQUENCYSORT_H

#include "util.h"
class L451_frequencySort : public LeetcodePriorityQueue {
private:
    string frequencySort(string s);
public:
    L451_frequencySort() {}
    void test();
};


#endif //PRIORITYQUEUE_L451_FREQUENCYSORT_H

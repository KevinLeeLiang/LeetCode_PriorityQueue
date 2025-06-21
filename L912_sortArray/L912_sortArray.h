//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L912_sortArray.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L912_SORTARRAY_H
#define PRIORITYQUEUE_L912_SORTARRAY_H

#include "util.h"
class L912_sortArray : public LeetcodePriorityQueue {
private:
    vector<int> tmp;
    vector<int> sortArray(vector<int>& nums);
    void mergeSort(vector<int> &nums, int l, int r);
public:
    L912_sortArray() {}
    void test();
};


#endif //PRIORITYQUEUE_L912_SORTARRAY_H

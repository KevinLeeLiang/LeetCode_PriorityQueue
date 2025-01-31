//
// Created by garen-lee on 2025/1/31.
/**
  ******************************************************************************
  * @file           : L215_findKthLargest.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/31
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L215_FINDKTHLARGEST_H
#define PRIORITYQUEUE_L215_FINDKTHLARGEST_H

#include "util.h"
class L215_findKthLargest : public LeetcodePriorityQueue{
private:
    void maxHeapify(vector<int>& nums, int i, int heap_size);
    void buildMaxHeap(vector<int>& nums, int heap_size);
    int findKthLargest(vector<int>& nums, int k);
public:
    L215_findKthLargest(){}
    void test();
};


#endif //PRIORITYQUEUE_L215_FINDKTHLARGEST_H

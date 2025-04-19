//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L703_KthLargest.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L703_KTHLARGEST_H
#define PRIORITYQUEUE_L703_KTHLARGEST_H

#include "util.h"

namespace L703 {
    class KthLargest {
    public:
        KthLargest(int k, vector<int> &nums);

        int add(int val);
    private:
        priority_queue <int, vector<int>, greater<int>> pq;
        int k;
    };
}

class L703_KthLargest : public LeetcodePriorityQueue {
public:
    L703_KthLargest() {}
    void test();
};


#endif //PRIORITYQUEUE_L703_KTHLARGEST_H

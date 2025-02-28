//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L373_kSmallestPairs.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L373_KSMALLESTPAIRS_H
#define PRIORITYQUEUE_L373_KSMALLESTPAIRS_H

#include "util.h"
class L373_kSmallestPairs : public LeetcodePriorityQueue {
private:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k);
public:
    L373_kSmallestPairs() {}
    void test();
};


#endif //PRIORITYQUEUE_L373_KSMALLESTPAIRS_H

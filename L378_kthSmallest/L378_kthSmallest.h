//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L378_kthSmallest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L378_KTHSMALLEST_H
#define PRIORITYQUEUE_L378_KTHSMALLEST_H

#include"util.h"
class L378_kthSmallest : public LeetcodePriorityQueue{
private:
    int kthSmallest(vector<vector<int>>& matrix, int k);
public:
    L378_kthSmallest() {}
    void test();
};


#endif //PRIORITYQUEUE_L378_KTHSMALLEST_H

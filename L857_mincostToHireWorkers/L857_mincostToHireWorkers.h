//
// Created by garen-lee on 2025/5/17.
/**
  ******************************************************************************
  * @file           : L857_mincostToHireWorkers.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/17
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L857_MINCOSTTOHIREWORKERS_H
#define PRIORITYQUEUE_L857_MINCOSTTOHIREWORKERS_H

#include "util.h"
class L857_mincostToHireWorkers : public LeetcodePriorityQueue {
private:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k);
public:
    L857_mincostToHireWorkers() {}
    void test();
};


#endif //PRIORITYQUEUE_L857_MINCOSTTOHIREWORKERS_H

//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L786_kthSmallestPrimeFraction.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L786_KTHSMALLESTPRIMEFRACTION_H
#define PRIORITYQUEUE_L786_KTHSMALLESTPRIMEFRACTION_H

#include "util.h"
class L786_kthSmallestPrimeFraction : public LeetcodePriorityQueue {
private:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k);
public:
    L786_kthSmallestPrimeFraction() {}
    void test();
};


#endif //PRIORITYQUEUE_L786_KTHSMALLESTPRIMEFRACTION_H

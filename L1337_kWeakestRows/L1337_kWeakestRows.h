//
// Created by garen_lee on 2025/7/19.
/**
  ******************************************************************************
  * @file           : L1337_kWeakestRows.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/19
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1337_KWEAKESTROWS_H
#define PRIORITYQUEUE_L1337_KWEAKESTROWS_H

#include "util.h"
class L1337_kWeakestRows : public LeetcodePriorityQueue {
private:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) ;
public:
    L1337_kWeakestRows() {}
    void test();
};


#endif //PRIORITYQUEUE_L1337_KWEAKESTROWS_H

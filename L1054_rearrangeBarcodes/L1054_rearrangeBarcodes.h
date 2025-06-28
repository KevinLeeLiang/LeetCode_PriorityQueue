//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1054_rearrangeBarcodes.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1054_REARRANGEBARCODES_H
#define PRIORITYQUEUE_L1054_REARRANGEBARCODES_H

#include "util.h"
class L1054_rearrangeBarcodes : public LeetcodePriorityQueue {
private:
    vector<int> rearrangeBarcodes(vector<int>& barcodes);
public:
    L1054_rearrangeBarcodes() {}
    void test();
};


#endif //PRIORITYQUEUE_L1054_REARRANGEBARCODES_H

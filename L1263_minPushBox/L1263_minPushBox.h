//
// Created by garen_lee on 2025/7/12.
/**
  ******************************************************************************
  * @file           : L1263_minPushBox.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/12
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L1263_MINPUSHBOX_H
#define PRIORITYQUEUE_L1263_MINPUSHBOX_H

#include "util.h"
class L1263_minPushBox : public LeetcodePriorityQueue {
private:
    int minPushBox(vector<vector<char>> &grid);
public:
    L1263_minPushBox() {}
    void test();
};


#endif //PRIORITYQUEUE_L1263_MINPUSHBOX_H

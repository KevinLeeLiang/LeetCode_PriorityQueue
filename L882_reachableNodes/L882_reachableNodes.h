//
// Created by garen_lee on 2025/5/24.
/**
  ******************************************************************************
  * @file           : L882_reachableNodes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/24
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L882_REACHABLENODES_H
#define PRIORITYQUEUE_L882_REACHABLENODES_H

#include "util.h"
class L882_reachableNodes : public LeetcodePriorityQueue {
private:
    int encode(int u, int v, int n);
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n);
public:
    L882_reachableNodes() {}
    void test();
};


#endif //PRIORITYQUEUE_L882_REACHABLENODES_H

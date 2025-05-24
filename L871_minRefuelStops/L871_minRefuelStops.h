//
// Created by garen_lee on 2025/5/24.
/**
  ******************************************************************************
  * @file           : L871_minRefuelStops.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/24
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L871_MINREFUELSTOPS_H
#define PRIORITYQUEUE_L871_MINREFUELSTOPS_H

#include "util.h"
class L871_minRefuelStops : public LeetcodePriorityQueue {
private:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations);
public:
    L871_minRefuelStops() {}
    void test();
};


#endif //PRIORITYQUEUE_L871_MINREFUELSTOPS_H

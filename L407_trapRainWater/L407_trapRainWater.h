//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L407_trapRainWater.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L407_TRAPRAINWATER_H
#define PRIORITYQUEUE_L407_TRAPRAINWATER_H

#include "util.h"
class L407_trapRainWater : public LeetcodePriorityQueue {
private:
    int trapRainWater(vector<vector<int>>& heightMap);
public:
    L407_trapRainWater(){}
    void test();

};


#endif //PRIORITYQUEUE_L407_TRAPRAINWATER_H

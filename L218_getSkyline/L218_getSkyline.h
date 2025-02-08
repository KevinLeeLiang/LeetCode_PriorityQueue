//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L218_getSkyline.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L218_GETSKYLINE_H
#define PRIORITYQUEUE_L218_GETSKYLINE_H

#include "util.h"
class L218_getSkyline : public LeetcodePriorityQueue{
private:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings);
public:
    L218_getSkyline() {}
    void test();
};


#endif //PRIORITYQUEUE_L218_GETSKYLINE_H

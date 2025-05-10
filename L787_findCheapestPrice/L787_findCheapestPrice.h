//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L787_findCheapestPrice.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L787_FINDCHEAPESTPRICE_H
#define PRIORITYQUEUE_L787_FINDCHEAPESTPRICE_H

#include "util.h"
class L787_findCheapestPrice : public LeetcodePriorityQueue {
private:
    static constexpr int INF = 10000*101+1;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k);
public:
    L787_findCheapestPrice() {}
    void test();
};


#endif //PRIORITYQUEUE_L787_FINDCHEAPESTPRICE_H

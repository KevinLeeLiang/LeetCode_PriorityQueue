//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1046_lastStoneWeight.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1046_lastStoneWeight.h"

int L1046_lastStoneWeight::lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
    for (auto stone : stones) {
        pq.push(stone);
    }
    while (pq.size() > 1) {
        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();
        if (x != y) {
            pq.push(y - x);
        }
    }
    return pq.empty() ? 0 : pq.top();
}

void L1046_lastStoneWeight::test() {
    vector<int> stones = {2,7,4,1,8,1};
    cout << lastStoneWeight(stones) << endl;
}
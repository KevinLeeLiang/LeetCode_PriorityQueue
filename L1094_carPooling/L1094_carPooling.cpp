//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1094_carPooling.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#include "L1094_carPooling.h"

bool L1094_carPooling::carPooling(vector<vector<int>>& trips, int capacity) {
    int to_max = 0;
    for (const auto& trip : trips) {
        to_max = max(to_max, trip[2]);
    }
    vector<int>diff(to_max + 1, 0);
    for (const auto& trip : trips) {
        diff[trip[1]] += trip[0];
        diff[trip[2]] -= trip[0];
    }
    int count = 0;
    for (int i = 0; i <= to_max; i++) {
        count += diff[i];
        if (count > capacity) {
            return false;
        }
    }
    return true;
}

void L1094_carPooling::test() {
    vector<vector<int>>trips = {{2,1,5},{3,3,7}};
    int capacity = 4;
    cout << carPooling(trips, capacity) << endl;
    trips = {{2,1,5},{3,3,7}};
    capacity = 5;
    cout << carPooling(trips, capacity) << endl;
}
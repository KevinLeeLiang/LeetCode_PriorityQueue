//
// Created by garen_lee on 2025/5/24.
/**
  ******************************************************************************
  * @file           : L871_minRefuelStops.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/24
  ******************************************************************************
  */
//

#include "L871_minRefuelStops.h"

int L871_minRefuelStops::minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    int n = stations.size();
    vector<long>  dp(n + 1);
    dp[0] = startFuel;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j >= 0; --j) {
            if (dp[j] >= stations[i][0]) {
                dp[j + 1] = max(dp[j + 1], dp[j] + stations[i][1]);
            }
        }
    }
    for (int i = 0; i <= n; ++i) {
        if (dp[i] >= target) {
            return i;
        }
    }
    return -1;
}

void L871_minRefuelStops::test() {
    int target = 1;
    int startFuel = 1;
    vector<vector<int>> stations = {};
    cout << minRefuelStops(target, startFuel, stations) << endl;
    target = 100;
    startFuel = 1;
    stations = {{10,100}};
    cout << minRefuelStops(target, startFuel, stations) << endl;
    target = 100;
    startFuel = 10;
    stations = {{10,60},{20,30},{30,30},{60,40}};
    cout << minRefuelStops(target, startFuel, stations) << endl;
}
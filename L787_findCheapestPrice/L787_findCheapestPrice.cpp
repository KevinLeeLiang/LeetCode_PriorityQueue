//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L787_findCheapestPrice.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#include "L787_findCheapestPrice.h"

int L787_findCheapestPrice::findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<vector<int>>f(k+2, vector<int>(n, INF));
    f[0][src] = 0;
    for (int t = 1; t <= k+1; ++t) {
        for (auto &&flight : flights) {
            int j = flight[0], i = flight[1], cost = flight[2];
            f[t][i] = min(f[t][i] , f[t - 1][j] + cost);
        }
    }
    int ans = INF;
    for (int t = 1; t <= k + 1; ++t) {
        ans = min(ans, f[t][dst]);
    }
    return (ans == INF ? -1: ans);
}


void L787_findCheapestPrice::test() {
    vector<vector<int>> flights = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1,3,600}, {2,3,200}};
    int n = 4;
    int src = 0;
    int dst = 3;
    int k = 1;
    int ans = findCheapestPrice(n, flights, src, dst, k);
    cout << ans << endl;
    flights = {{0, 1, 100}, {1, 2, 100}, {0, 2, 500}};
    n = 3;
    src = 0;
    dst = 2;
    k = 1;
    ans = findCheapestPrice(n, flights, src, dst, k);
    cout << ans << endl;
    flights = {{0, 1, 100}, {1, 2, 100}, {0, 2, 500}};
    n = 3;
    src = 0;
    dst = 2;
    k = 0;
    ans = findCheapestPrice(n, flights, src, dst, k);
    cout << ans << endl;
}
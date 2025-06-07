//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L218_getSkyline.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#include "L218_getSkyline.h"
vector<vector<int>> L218_getSkyline::getSkyline(vector<vector<int>> &buildings) {
    auto cmp = [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    };
    priority_queue <pair<int, int>, vector<pair<int, int>>, decltype(cmp)> que(cmp);
    vector<int>boundaries;
    for (auto &building : buildings) {
        boundaries.push_back(building[0]);
        boundaries.push_back(building[1]);
    }
    sort(boundaries.begin(), boundaries.end());
    vector<vector<int>> ret;
    int idx = 0;
    for (auto &boundary : boundaries) {
        while (idx < buildings.size() && buildings[idx][0] <= boundary) {
            que.push(make_pair(-buildings[idx][2], buildings[idx][1]));
            idx++;
        }
        while (!que.empty() && que.top().second <= boundary) {
            que.pop();
        }
        int maxn = que.empty() ? 0 : que.top().second;
        if (ret.empty() || ret.back()[1] != maxn) {
            ret.push_back({boundary, maxn});
        }
    }
    return ret;
}
void L218_getSkyline::test() {
    vector<vector<int>> buildings = {{2, 9, 10}, {3, 7, 15}, {5, 12, 12}, {15, 20, 10}, {19, 24, 8}};
    vector<vector<int>> result = getSkyline(buildings);
    for (auto &item : result) {
        print_vector(item);
    }
    cout << "++++" << endl;
    buildings = {{0, 2, 3}, {2, 5, 3}};
    result = getSkyline(buildings);
    for (auto &item : result) {
        print_vector(item);
    }
    cout << "++++" << endl;
}
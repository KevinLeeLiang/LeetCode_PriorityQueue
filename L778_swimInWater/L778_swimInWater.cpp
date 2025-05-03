//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L778_swimInWater.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#include "L778_swimInWater.h"
using namespace L778;
int L778_swimInWater::swimInWater(vector<vector<int>>& grid) {
    int n = grid.size();
    priority_queue<Entry, vector<Entry>, function<bool(const Entry& x, const Entry& other)>> pq(&Entry::operator<);
    vector<vector<int>> visited(n, vector<int>(n, 0));

    pq.push(Entry(0, 0, grid[0][0]));
    int ret = 0;
    vector<pair<int, int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    while (!pq.empty()) {
        Entry x = pq.top();
        pq.pop();
        if (visited[x.i][x.j] == 1) {
            continue;
        }

        visited[x.i][x.j] = 1;
        ret = max(ret, grid[x.i][x.j]);
        if (x.i == n - 1 && x.j == n - 1) {
            break;
        }

        for (const auto [di, dj]: directions) {
            int ni = x.i + di, nj = x.j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                if (visited[ni][nj] == 0) {
                    pq.push(Entry(ni, nj, grid[ni][nj]));
                }
            }
        }
    }
    return ret;
}

void L778_swimInWater::test() {
    vector<vector<int>> grid = {{0, 2}, {1, 3}};
    cout << swimInWater(grid) << endl;
    grid = {{0, 1, 2, 3, 4}, {24, 23, 22, 21, 5}, {12, 13, 14, 15, 16}, {11, 17, 18, 19, 20}, {10, 9, 8, 7, 6}};
    cout << swimInWater(grid) << endl;
}
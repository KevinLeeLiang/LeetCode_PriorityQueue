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
    vector<int> f(n * n);
    for (int i = 0; i < n * n; i++) {
        f[i] = i;
    }

    vector<pair<int, int>> idx(n * n); // 存储每个平台高度对应的位置
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            idx[grid[i][j]] = make_pair(i, j);
        }
    }

    vector<pair<int, int>> directions{{0,1},{0,-1},{1,0},{-1,0}};
    for (int threshold = 0; threshold < n * n; threshold++) {
        auto [i, j] = idx[threshold];
        for (const auto [di, dj]: directions) {
            int ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] <= threshold) {
                merge(f, i * n + j, ni * n + nj);
            }
        }
        if (find(f, 0) == find(f, n * n - 1)) {
            return threshold;
        }
    }
    return -1; // cannot happen
}

void L778_swimInWater::test() {
    vector<vector<int>> grid = {{0, 2}, {1, 3}};
    cout << swimInWater(grid) << endl;
    grid = {{0, 1, 2, 3, 4}, {24, 23, 22, 21, 5}, {12, 13, 14, 15, 16}, {11, 17, 18, 19, 20}, {10, 9, 8, 7, 6}};
    cout << swimInWater(grid) << endl;
}
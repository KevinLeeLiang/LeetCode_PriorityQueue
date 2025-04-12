//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L675_cutOffTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#include "L675_cutOffTree.h"

int L675_cutOffTree::bfs(vector<vector<int>> &forest, int sx, int sy, int tx, int ty) {
    if (sx == tx && sy == ty) {
        return 0;
    }
    int row = forest.size();
    int col = forest[0].size();
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[sx][sy] = true;
    int step = 0;
    while (!q.empty()) {
        step++;
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int nx = x + dir[i][0];
                int ny = y + dir[i][1];
                if (nx >= 0 && nx < row && ny >= 0 && ny < col && forest[nx][ny] > 0) {
                    if (!visited[nx][ny] && forest[nx][ny] > 0) {
                        if (nx == tx && ny == ty) {
                            return step;
                        }
                        q.emplace(nx, ny);
                        visited[nx][ny] = true;
                    }
                }
            }
        }
    }
    return -1;
}

int L675_cutOffTree::cutOffTree(vector<vector<int>> &forest) {
    vector<pair<int, int>> trees;
    int row = forest.size();
    int col = forest[0].size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (forest[i][j] > 1) {
                trees.push_back(make_pair(i, j));
            }
        }
    }
    sort(trees.begin(), trees.end(), [&](const pair<int, int> & a, const pair<int, int> & b) {
        return forest[a.first][a.second] < forest[b.first][b.second];
    });
    int cx = 0;
    int cy = 0;
    int ans = 0;
    for (int i = 0; i < trees.size(); ++i) {
        int steps = bfs(forest, cx, cy, trees[i].first, trees[i].second);
        if (steps == -1) {
            return -1;
        }
        ans += steps;
        cx = trees[i].first;
        cy = trees[i].second;
    }
    return ans;
}

void L675_cutOffTree::test() {
    vector<vector<int>> forest = {{1, 2, 3},
                                  {0, 0, 4},
                                  {7, 6, 5}};
    cout << "result: " << cutOffTree(forest) << endl;
    forest = {{1, 2, 3},
              {0, 0, 0},
              {7, 6, 5}};
    cout << "result: " << cutOffTree(forest) << endl;
    forest = {{2, 3, 4},
              {0, 0, 5},
              {8, 7, 6}};
    cout << "result: " << cutOffTree(forest) << endl;
}
//
// Created by garen_lee on 2025/7/19.
/**
  ******************************************************************************
  * @file           : L1337_kWeakestRows.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/19
  ******************************************************************************
  */
//

#include "L1337_kWeakestRows.h"

vector<int> L1337_kWeakestRows::kWeakestRows(vector<vector<int>> &mat, int k) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < mat.size(); i++) {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        pq.push(make_pair(count, i));
    }
    vector<int> ans;
    while (k--) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

void L1337_kWeakestRows::test() {
    vector<vector<int>> mat = {{1, 1, 0, 0, 0},
                              {1, 1, 1, 1, 0},
                              {1, 0, 0, 0, 0},
                              {1, 1, 0, 0, 0},
                              {1, 1, 1, 1, 1}};
    vector<int> ans = kWeakestRows(mat, 3);
    print_vector(ans);
    mat = {{1, 0, 0, 0},
          {1, 1, 1, 1},
          {1, 0, 0, 0},
          {1, 0, 0, 0}};
    ans = kWeakestRows(mat, 2);
    print_vector(ans);
}
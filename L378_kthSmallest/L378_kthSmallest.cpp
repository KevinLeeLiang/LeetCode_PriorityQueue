//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L378_kthSmallest.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#include "L378_kthSmallest.h"

int L378_kthSmallest::kthSmallest(vector<vector<int>>& matrix, int k) {
    int m = matrix.size();
    int n = matrix[0].size();
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    for (int i = 0; i < m; ++i) {
        pq.push({matrix[i][0], {i, 0}});
    }
    while (k-- > 1) {
        auto [val, pos] = pq.top();
        pq.pop();
        int i = pos.first, j = pos.second;
        if (j + 1 < n) {
            pq.push({matrix[i][j + 1], {i, j + 1}});
        }
    }
    return pq.top().first;
}

void L378_kthSmallest::test(){
    vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;
    cout << kthSmallest(matrix, k) << endl;
    matrix = {{-5}};
    k = 1;
    cout << kthSmallest(matrix, k) << endl;

}
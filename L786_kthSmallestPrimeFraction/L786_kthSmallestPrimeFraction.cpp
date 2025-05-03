//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L786_kthSmallestPrimeFraction.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#include "L786_kthSmallestPrimeFraction.h"

vector<int> L786_kthSmallestPrimeFraction::kthSmallestPrimeFraction(vector<int> &arr, int k) {
    int n = arr.size();
    auto cmp = [&](const pair<int, int> &a, const pair<int, int> &b) {
        return arr[a.first ] * arr[b.second ] > arr[b.first ] * arr[a.second ];
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
    for (int i = 0; i < n; ++i) {
        pq.push({0, i});
    }
    for (int _ = 1; _ < k; ++_) {
        auto [i, j] = pq.top();
        pq.pop();
        if (i + 1 < j) {
            pq.emplace(i + 1, j);
        }
    }
    return {arr[pq.top().first ], arr[pq.top().second ]};
}

void L786_kthSmallestPrimeFraction::test() {
    vector<int> arr = {1, 2, 3, 5};
    int k = 3;
    vector<int> res = kthSmallestPrimeFraction(arr, k);
    print_vector(res);
    arr = {1, 7};
    k = 1;
    res = kthSmallestPrimeFraction(arr, k);
    print_vector(res);
}
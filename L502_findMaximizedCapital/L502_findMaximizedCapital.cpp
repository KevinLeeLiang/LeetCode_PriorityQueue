//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L502_findMaximizedCapital.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#include "L502_findMaximizedCapital.h"

int L502_findMaximizedCapital::findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital) {
    int n = profits.size();
    int curr = 0;
    priority_queue<int, vector<int>, less<int>> pq;
    vector<pii>arr;
    for (int i = 0; i < n; i++) {
        arr.push_back({capital[i], profits[i]});
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
        while (curr < n && arr[curr].first <= w) {
            pq.push(arr[curr].second);
            curr++;
        }
        if (!pq.empty()) {
            w += pq.top();
            pq.pop();
        } else {
            break;
        }
    }
    return w;
}

void L502_findMaximizedCapital::test() {
    int k = 2;
    int w = 0;
    vector<int> profits = {1, 2, 3};
    vector<int> capital = {0, 1, 1};
    cout << findMaximizedCapital(k, w, profits, capital) << endl;
    k = 3;
    w = 0;
    profits = {1, 2, 3};
    capital = {0, 1, 2};
    cout << findMaximizedCapital(k, w, profits, capital) << endl;
}
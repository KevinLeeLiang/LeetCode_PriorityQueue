//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1054_rearrangeBarcodes.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1054_rearrangeBarcodes.h"
vector<int> L1054_rearrangeBarcodes::rearrangeBarcodes(vector<int>& barcodes) {
    unordered_map<int, int>count;
    for (int b : barcodes) {
        count[b]++;
    }
    priority_queue<pair<int, int>>pq;
    for (auto &it : count) {
        pq.push(make_pair(it.second, it.first));
    }
    vector<int>res;
    while (pq.size() > 0) {
        auto [cx, x] = pq.top();
        pq.pop();
        if (res.empty() || res.back() != x) {
            res.push_back(x);
            if (cx - 1 > 0) {
                pq.push(make_pair(cx - 1, x));
            }
        } else {
            if (pq.size() < 1) return res;
            auto [cy, y] = pq.top();
            pq.pop();
            res.push_back(y);
            if (cy - 1 > 0) {
                pq.push(make_pair(cy - 1, y));
            }
            pq.push(make_pair(cx, x));
        }
    }
    return res;
}

void L1054_rearrangeBarcodes::test() {
    vector<int> barcodes = {1, 1, 1, 2, 2, 2};
    vector<int> res = rearrangeBarcodes(barcodes);
    print_vector(res);
    barcodes = {1, 1, 1, 1, 2, 2, 3, 3};
    res = rearrangeBarcodes(barcodes);
    print_vector(res);
    barcodes = {1, 1, 2};
    res = rearrangeBarcodes(barcodes);
    print_vector(res);
}
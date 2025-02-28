//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L373_kSmallestPairs.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#include "L373_kSmallestPairs.h"

vector<vector<int>> L373_kSmallestPairs::kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k) {
    auto cmp = [&nums1, &nums2](const pair<int, int> & a, const pair<int, int> & b) {
        return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
    };
    int m = nums1.size(), n = nums2.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
    vector<vector<int>> ans;
    for (int i = 0; i < m && i < k; ++i) {
        q.push({i, 0});
    }
    while (!q.empty() && ans.size() < k) {
        auto [i, j] = q.top();
        q.pop();
        ans.push_back({nums1[i], nums2[j]});
        if (j + 1 < n) {
            q.push({i, j + 1});
        }
        if (i + 1 < m) {
            q.push({i + 1, 0});
        }
    }
    return ans;
}

void L373_kSmallestPairs::test() {
    vector<int> nums1 = {1, 7, 11};
    vector<int> nums2 = {2, 4, 6};
    int k = 3;
    vector<vector<int>> result = kSmallestPairs(nums1, nums2, k);
    print_vector_vector(result);
    nums1 = {1, 1, 2};
    nums2 = {1, 2, 3};
    k = 2;
    result = kSmallestPairs(nums1, nums2, k);
    print_vector_vector(result);
}
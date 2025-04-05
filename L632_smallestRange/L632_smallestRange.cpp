//
// Created by garen-lee on 2025/4/5.
/**
  ******************************************************************************
  * @file           : L632_smallestRange.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/5
  ******************************************************************************
  */
//

#include "L632_smallestRange.h"

vector<int> L632_smallestRange::smallestRange(vector<vector<int>> &nums) {
    int n = nums.size();
    unordered_map<int, vector<int>> mp;
    int xMin = INT_MAX, xMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            mp[nums[i][j]].push_back(i);
            xMin = min(xMin, nums[i][j]);
            xMax = max(xMax, nums[i][j]);
        }
    }
    vector<int> freq(n);
    int inside = 0;
    int left = xMin, right = xMin - 1;
    int bestLeft = xMin, bestRight = xMax;

    while (right < xMax) {
        ++right;
        if (mp.count(right)) {
            for (const int &x : mp[right]) {
                ++freq[x];
                if (freq[x] == 1) {
                    ++inside;
                }
            }
            while (inside == n) {
                if (right - left < bestRight - bestLeft) {
                    bestLeft = left;
                    bestRight = right;
                }
                if (mp.count(left)) {
                    for (const int &x : mp[left]) {
                        --freq[x];
                        if (freq[x] == 0) {
                            --inside;
                        }
                    }
                }
                ++left;
            }
        }
    }
    return {bestLeft, bestRight};
}

void L632_smallestRange::test() {
    vector<vector<int>> nums = {{4, 10, 15, 24, 26},
                                {0, 9,  12, 20},
                                {5, 18, 22, 30}};
    vector<int> res = smallestRange(nums);
    print_vector(res);
    nums = {{1, 2, 3},
            {1, 2, 3},
            {1, 2, 3}};
    res = smallestRange(nums);
    print_vector(res);
}
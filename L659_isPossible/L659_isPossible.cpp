//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L659_isPossible.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#include "L659_isPossible.h"

bool L659_isPossible::isPossible(vector<int> &nums) {
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>>mp;
    for (auto &num : nums) {
        if (mp.find(num) == mp.end()) {
            mp[num] = priority_queue<int, vector<int>, greater<int>>();
        }
        if (mp.find(num - 1) != mp.end()) {
            int pre_len = mp[num - 1].top();
            mp[num - 1].pop();
            if (mp[num - 1].empty()) {
                mp.erase(num - 1);
            }
            mp[num].push(pre_len + 1);
        } else {
            mp[num].push(1);
        }
    }
    for (auto &[key, value] : mp) {
        if (value.top() < 3) {
            return false;
        }
    }
    return true;
}

void L659_isPossible::test() {
    vector<int> nums = {1, 2, 3, 3, 4, 5};
    cout << isPossible(nums) << endl;
    nums = {1, 2, 3, 3, 4, 4, 5, 5};
    cout << isPossible(nums) << endl;
    nums = {1, 2, 3, 4, 4, 5};
    cout << isPossible(nums) << endl;
    nums = {1, 2, 3, 4, 5, 6};
    cout << isPossible(nums) << endl;
    nums = {1, 2, 3, 4, 5};
    cout << isPossible(nums) << endl;
}
//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#include "L239_maxSlidingWindow.h"

vector<int> L239_maxSlidingWindow::maxSlidingWindow(vector<int> &nums, int k) {
    vector<int>ans;
    priority_queue<pair<int,int>>q;
    for (int i = 0; i < k; ++i) {
        q.emplace(nums[i], i);
    }
    if (q.size() > 0)
        ans.push_back(q.top().first);
    for (int i = k; i < nums.size(); ++i) {
        q.emplace(nums[i], i);
        while (q.top().second <= i - k) {
            q.pop();
        }
        ans.push_back(q.top().first);
    }
    return ans;
}
void L239_maxSlidingWindow::test() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);
    print_vector(result);
    cout << "++++" << endl;
    nums = {1};
    k = 1;
    result = maxSlidingWindow(nums, k);
    print_vector(result);
    cout << "++++" << endl;
}
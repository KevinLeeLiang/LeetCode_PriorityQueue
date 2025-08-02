//
// Created by garen_lee on 2025/8/2.
/**
  ******************************************************************************
  * @file           : L1338_minSetSize.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/2
  ******************************************************************************
  */
//

#include "L1338_minSetSize.h"

int L1338_minSetSize::minSetSize(vector<int> &arr) {
    unordered_map<int, int> freq;
    for (auto num : arr) {
        freq[num]++;
    }
    vector<int> occ;
    for (auto &[k, v] : freq) {
        occ.push_back(v);
    }
    sort(occ.begin(), occ.end(), greater<int>());
    int cnt = 0, ans = 0;
    for (auto c : occ) {
        cnt += c;
        ans++;
        if (cnt >= arr.size() / 2) {
            break;
        }
    }
    return ans;
}

void L1338_minSetSize::test() {
    vector<int> arr = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    cout << minSetSize(arr) << endl;
    arr = {7, 7, 7, 7, 7, 7};
    cout << minSetSize(arr) << endl;
}
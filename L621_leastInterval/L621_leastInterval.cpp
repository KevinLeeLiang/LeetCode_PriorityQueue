//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L621_leastInterval.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#include "L621_leastInterval.h"

int L621_leastInterval::leastInterval(vector<char> &tasks, int n) {
    unordered_map<char, int>freq;
    for (char c : tasks) {
        ++freq[c];
    }
    int max_exec = max_element(freq.begin(), freq.end(), [](const auto &u, const auto &v) {
        return u.second < v.second;
    })->second;
    int max_count = accumulate(freq.begin(), freq.end(), 0, [=](int acc, const auto& u) {
        return acc + (u.second == max_exec);
    });
    return max((max_exec - 1)*(n + 1) + max_count, static_cast<int>(tasks.size()));

}

void L621_leastInterval::test() {
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n = 2;
    cout << leastInterval(tasks, n) << endl;
    tasks = {'A', 'C', 'A', 'B', 'D', 'B'};
    n = 1;
    cout << leastInterval(tasks, n) << endl;
    tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    n = 3;
    cout << leastInterval(tasks, n) << endl;
}
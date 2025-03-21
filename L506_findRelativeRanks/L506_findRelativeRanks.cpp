//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L506_findRelativeRanks.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#include "L506_findRelativeRanks.h"

vector<string> L506_findRelativeRanks::findRelativeRanks(vector<int> &score) {
    vector<pii>map;
    vector<string> ans(score.size());
    for (int i = 0; i < score.size(); ++i) {
        map.push_back(make_pair(score[i], i));
    }
    sort(map.begin(), map.end(), greater<pii>());
    for (int i = 0; i < map.size(); ++i) {
        if (i == 0) {
            ans[map[i].second] = "Gold Medal";
        } else if (i == 1) {
            ans[map[i].second] = "Silver Medal";
        } else if (i == 2) {
            ans[map[i].second] = "Bronze Medal";
        } else {
            ans[map[i].second] = to_string(i + 1);
        }
    }
    return ans;
}

void L506_findRelativeRanks::test(){
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> res = findRelativeRanks(score);
    print_vector(res);
    score = {10, 3, 8, 9, 4};
    res = findRelativeRanks(score);
    print_vector(res);
}
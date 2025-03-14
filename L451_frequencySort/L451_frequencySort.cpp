//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L451_frequencySort.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#include "L451_frequencySort.h"

string L451_frequencySort::frequencySort(string s) {
    unordered_map<char, int> umap;
    for (char c : s) {
        umap[c]++;
    }
    vector<pair<char, int>>map;
    for (auto p : umap) {
        map.push_back(p);
    }
    sort(map.begin(), map.end(), [](pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    });
    string ans;
    for (auto &[c, count] : map) {
        int index = 0;
        while (index < count) {
            ans += c;
            index++;
        }
        index = 0;
    }
    return ans;
}

void L451_frequencySort::test() {
    string s = "tree";
    cout << frequencySort(s) << endl;
    s = "cccaaa";
    cout << frequencySort(s) << endl;
    s = "Aabb";
    cout << frequencySort(s) << endl;
}
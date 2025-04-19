//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L692_topKFrequent.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#include "L692_topKFrequent.h"

vector<string> L692_topKFrequent::topKFrequent(vector<string>& words, int k) {
    unordered_map<string, int> map;
    auto cmp = [](pair<int, string> a, pair<int, string> b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    };
    priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);
    for (auto word : words) {
        map[word]++;
    }
    for (auto it = map.begin(); it != map.end(); it++) {
        pq.push(make_pair(it->second, it->first));
        if (pq.size() > k) {
            pq.pop();
        }
    }
    vector<string> result;
    while (!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

void L692_topKFrequent::test() {
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"} ;
    int k = 2 ;
    vector<string> result = topKFrequent(words, k) ;
    print_vector(result);
    words = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    k = 4 ;
    result = topKFrequent(words, k) ;
    print_vector(result);
}
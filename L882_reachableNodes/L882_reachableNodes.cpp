//
// Created by garen_lee on 2025/5/24.
/**
  ******************************************************************************
  * @file           : L882_reachableNodes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/24
  ******************************************************************************
  */
//

#include "L882_reachableNodes.h"
int L882_reachableNodes::encode(int u, int v, int n) {
    return u * n + v;
}
int L882_reachableNodes::reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
    vector<vector<pair<int, int>>> adList(n);
    for (auto &edge : edges) {
        int u = edge[0], v = edge[1], nodes = edge[2];
        adList[u].emplace_back(v, nodes);
        adList[v].emplace_back(u, nodes);
    }

    unordered_map<int, int> used;
    unordered_set<int> visited;
    int reachableNodes = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.emplace(0, 0);
    while (!pq.empty() && pq.top().first <= maxMoves) {
        auto [step, u] = pq.top();
        pq.pop();
        if (visited.count(u)) {
            continue;
        }
        visited.emplace(u);
        reachableNodes++;
        for (auto [v, nodes] : adList[u]) {
            if (nodes + step + 1 <= maxMoves && !visited.count(v)) {
                pq.emplace(nodes + step + 1, v);
            }
            used[encode(u, v, n)] = min(nodes, maxMoves - step);
        }
    }

    for (auto &edge : edges) {
        int u = edge[0], v = edge[1], nodes = edge[2];
        reachableNodes += min(nodes, used[encode(u, v, n)] + used[encode(v, u, n)]);
    }
    return reachableNodes;
}

void L882_reachableNodes::test() {
    vector<vector<int>> edges = {{0,1,10},{0,2,1},{1,2,2}};
    int maxMoves = 6, n = 3;
    cout << reachableNodes(edges, maxMoves, n) << endl;
    edges = {{0,1,4},{1,2,6},{0,2,8},{1,3,1}};
    maxMoves = 10, n = 4;
    cout << reachableNodes(edges, maxMoves, n) << endl;
    edges = {{1,2,4},{1,4,5},{1,3,1},{2,3,4},{3,4,5}};
    maxMoves = 17, n = 5;
    cout << reachableNodes(edges, maxMoves, n) << endl;
}
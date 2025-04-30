//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L743_networkDelayTime.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#include "L743_networkDelayTime.h"
using pii = pair<int, int>;
int L743_networkDelayTime::networkDelayTime(vector<vector<int>> &times, int n, int k) {
    vector<vector<pii> > eg(n+1);
    for(auto& E: eg) E.reserve(n+1);
    vector<int> vis(n+1);
    int ans = 0;
    for(auto& x: times){
        eg[x[0]].emplace_back(x[1], x[2]);
    }
    priority_queue<pii, vector<pii>, greater<pii> > q;
    q.emplace(0, k);
    while(q.size()){
        auto [time, now] = q.top();
        q.pop();
        if(vis[now])continue;
        ans = max(ans, time);
        vis[now] = true;
        for(auto [next, nextTime]: eg[now]){
            if(vis[next] == false) q.emplace(nextTime + time, next);
        }
    }
    return count(begin(vis)+1, end(vis), true) == n ? ans : -1;
}

void L743_networkDelayTime::test() {
    vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n = 4;
    int k = 2;
    int res = networkDelayTime(times, n, k);
    cout << "res:" << res << endl;
    times = {{1, 2, 1}};
    n = 2;
    k = 1;
    res = networkDelayTime(times, n, k);
    cout << "res:" << res << endl;
    times = {{1, 2, 1}};
    n = 2;
    k = 2;
    res = networkDelayTime(times, n, k);
    cout << "res:" << res << endl;
}
//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L767_reorganizeString.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#include "L767_reorganizeString.h"

string L767_reorganizeString::reorganizeString(string s) {
    if (s.length() < 2) {
        return s;
    }
    vector<int> counts(26, 0);
    int maxCount = 0;
    int length = s.length();
    for (int i = 0; i < length; i++) {
        char c = s[i];
        counts[c - 'a']++;
        maxCount = max(maxCount, counts[c - 'a']);
    }
    if (maxCount > (length + 1) / 2) {
        return "";
    }
    string reorganizeArray(length, ' ');
    int evenIndex = 0, oddIndex = 1;
    int halfLength = length / 2;
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        while (counts[i] > 0 && counts[i] <= halfLength && oddIndex < length) {
            reorganizeArray[oddIndex] = c;
            counts[i]--;
            oddIndex += 2;
        }
        while (counts[i] > 0) {
            reorganizeArray[evenIndex] = c;
            counts[i]--;
            evenIndex += 2;
        }
    }
    return reorganizeArray;
}

void L767_reorganizeString::test() {
    string s = "aab";
    cout << reorganizeString(s) << endl;
    s = "aaab";
    cout << reorganizeString(s) << endl;
}
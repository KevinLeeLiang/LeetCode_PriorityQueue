//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L355_Twitter.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#include "L355_Twitter.h"

void L355_Twitter::test() {
    this->twitter_.postTweet(1, 5);
    vector<int> res = this->twitter_.getNewsFeed(1);
    print_vector(res);
    this->twitter_.follow(1, 2);
    this->twitter_.postTweet(2, 6);
    res = this->twitter_.getNewsFeed(1);
    print_vector(res);
    this->twitter_.unfollow(1, 2);
    res = this->twitter_.getNewsFeed(1);
    print_vector(res);

}
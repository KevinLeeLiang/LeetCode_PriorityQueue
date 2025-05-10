//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L855_ExamRoom.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#include "L855_ExamRoom.h"

using namespace L855;

void L855_ExamRoom::test() {
    ExamRoom er(10);
    cout << er.seat() << endl;
    cout << er.seat() << endl;
    cout << er.seat() << endl;
    cout << er.seat() << endl;
    er.leave(4);
    cout << er.seat() << endl;
}
//
// Created by plter on 1/28/16.
//

#include "ProgressBar.h"
#include <iostream>


plter::ProgressBar::ProgressBar() : charCount(30) {

}

void plter::ProgressBar::changeProgress(float p) {
    float current = charCount * p;

    for (int i = 0; i <= charCount; ++i) {
        std::cout << "\r" << p * 100 << "%[";
        for (int j = 0; j < current; ++j) {
            std::cout << "=";
        }
        for (int k = (int) current; k < charCount; ++k) {
            std::cout << " ";
        }
        std::cout << "]" << std::flush;
    }
}



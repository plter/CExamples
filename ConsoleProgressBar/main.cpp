#include <iostream>
#include "ProgressBar.h"

int main() {

    plter::ProgressBar pb;

    for (int i = 0; i <= 100; ++i) {
        pb.changeProgress(((float)i)/100.0f);
        usleep(100000);
    }

    return 0;
}
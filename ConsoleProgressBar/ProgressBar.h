//
// Created by plter on 1/28/16.
//

#ifndef CONSOLEPROGRESSBAR_PROGRESSBAR_H
#define CONSOLEPROGRESSBAR_PROGRESSBAR_H

namespace plter {
    class ProgressBar {
    private:
        int charCount;
    public:

        ProgressBar();

        void changeProgress(float p/* 0.0-1.0f */);
    };
}


#endif //CONSOLEPROGRESSBAR_PROGRESSBAR_H

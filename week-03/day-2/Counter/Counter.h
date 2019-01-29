//
// Created by gyuri on 2019.01.29..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
    public:
        Counter(int);
        Counter();
        void add(int = 1);
        void reset();
        int get();

    private:
        int initialValue = 0;
        int result = 0;
};


#endif //COUNTER_COUNTER_H

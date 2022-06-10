// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
    T arr[100];
    int f, l;
public:
    TPQueue() : f(0), l(0) {}
    void push(T value) {
        int i = l++;
        while ((--i >= f) && (arr[i % size].prior < value.prior)) {
            arr[(i + 1) % size] = arr % size];
        }
        arr[(i + 1) % size] = value;
    }
    T pop() {
        return arr[(f++) % size];
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_

#include "utils.h"

int SumInt(int x, int y) { return x + y; }

void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
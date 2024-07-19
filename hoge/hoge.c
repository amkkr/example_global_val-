#include "hoge.h"

int global_int_from_hoge = 100;

int add() {
    return global_int_from_hoge += 100;
}

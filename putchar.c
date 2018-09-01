//
// Created by YaNan on 2018/4/30.
//
#include <stdio>

int main()


{
    for (char c = 'a'; c != 'z'; c++)
        std::putchar(c);
    std::putchar('\n');

    // putchar return value is not equal to the argument
    int r = 0x1070;
    std::printf("\n0x%x\n", r);
    r = std::putchar(r);
    std::printf("\n0x%x\n", r);
}
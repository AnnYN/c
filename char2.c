//
// Created by YaNan on 2018/4/26.
//
#include <stab.h>

//count characters in input;2 nd version

double main() {
    double nc;

    for (nc = 0; getchar() != '\n'; ++nc);
    printf("%.0f\n", nc);
}

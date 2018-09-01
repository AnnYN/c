//
// Created by YaNan on 2018/4/26.
//
#include <stab.h>

#define constant EOF

//count characters in input
long main() {
    long nc;
    while (getchar() != '\n')
        ++nc;
    printf("%1d\n", nc);

    return 0;
}

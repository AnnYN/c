//
// Created by YaNan on 2018/4/30.
//

#include <stdio.h>
int main(void) {
    //count blanks, tabs, and new lines

    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    printf(" please input your txt: \n");
    printf("please enter z to end the txt");

    while ((c = getchar() != z)) {


        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d | Tabs: %d | Lines: %d\n", nb,nt,nl);
}

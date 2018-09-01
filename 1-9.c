//
// Created by YaNan on 2018/4/30.
//

#include <stdio.h>

//replace string of blanks with a single blank
int  mian()
{
    int c, lastc;
    lastc = NONBLANK;
    while ((c = getchar()) != EOF){
        if  (c != ' ')
            putchar(c);
        if (c == ' ')
                if (lastc != ' ')
                    putchar(c);
        lastc = c;

    }
}
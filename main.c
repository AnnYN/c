//
//  main.c
//  C程序设计语言
//
//  Created by YaNan on 2018/4/17.
//  Copyright © 2018年 YaNan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    /*print Fahrenheit-Celsius table
     for fahr  = 0, 20, ......,300 */
        int fahr, celsius;
        int lower, upper, step;
        
        lower = 0;          /* lower limit of temperature table */
        upper = 300;        /* upper limit */
        step = 20;          /*step size */
        
        fahr = lower;
        while (fahr <= upper ){
            celsius = 5*(fahr - 32) / 9;
            printf("%3d %6d\n", fahr, celsius);
            fahr = fahr + step ;
        }
    return 0;
    
}




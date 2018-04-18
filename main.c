//
//  main.c
//  my c file
//
//  Created by YaNan on 2018/4/18.
//  Copyright © 2018年 YaNan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int hoge = 5;
    int piyo = 10;
    int *hoge_p;
    
    //输出每个变量的地址
    printf("&hoge..%p\n",&hoge);
    printf("&piyo..%p\n",&piyo);
    printf("&hoge_p..%p\n",&hoge_p);
    
    //将hoge的地址赋予hoge_p
    hoge_p = &hoge;
    printf("hoge_p..%p\n",hoge_p);
    
    //通过hoge_p输出hoge的内容
    printf("*hoge_p..%d\n",*hoge_p);
    
    //通过hoge_p修改hoge的内容
    *hoge_p = 10;
    printf("hoge..%d\n",hoge);
    
    //通过hoge修改自身的内容
    hoge = 4;
    printf("hoge..%d\n",hoge);
    
    //查看hoge_p的值和地址,*hoge_p等同于hoge
    printf("hoge_p..%p\n",hoge_p);
    printf("hoge_p..%d\n",*hoge_p);
    printf("&hoge_p..%p\n",&hoge_p);
    

    printf("Hello, World!\n");
    return 0;
}


















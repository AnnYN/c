//
// Created by YaNan on 2018/8/31.
//


#include <stdio.h>
//
//
//
//int main(void){
//    int hoge = 5;
//    int piyo = 10;
//    int *hoge_p ;
//    int **hoge_d;
//
//
//    /*输出每个变量的地址*/
//
//    printf("&hoge..%p\n",&hoge);
//    printf("&piyo..%p\n",&piyo);
//    printf("&hoge_p..%p\n",&hoge_p);
//
//
//    /*把hoge的值传给hoge_p*/
//    hoge_p = &hoge;
//    printf("hoge_p..%p\n",hoge_p);
//
//
//    /*通过hoge_p输出hoge的内容*/
//    printf("*hoge_p..%p\n",*hoge_p);
//
//    /*通过hoge_p修改hoge的内容*/
//    *hoge_p = 10;
//    printf("hoge..%d\n",hoge);
// printf("*hoge_p..%p\n",&*hoge_p);
//
//
//    /*针对**的操作*/
//
//    hoge_d =&*hoge_p;
//    printf("**hoge_d..%p\n",**hoge_d);
//    printf("&hoge_d..%p\n",&hoge_d);
//
//    return 0;
//
//
//
///*
//  指针是一个变量，在申明的时候*标志使得编译器知道这是一个指针变量，指针变量存储的东西被被编译器认为是地址，该指针指向这个地址，指针的内容为
//  该地址的值，整个指针是一个变量，在内存上有分配空间，对于指针指向的变量的值，可以通过指针来进行修改
// */
//
//}


void swap(int *a,int *b){
    int *temp = NULL;
    printf("in swap func before swap between a & b \n ");

    printf("&a  %p\n",&a);
    printf("&b  %p\n",&b);

    printf("in swap func before swap a=%p b=%p\n",a,b);

    temp = a;

    a = b;

    b =temp;
    printf("in swap func after swap a=%p b=%p\n",a,b);


    printf("in swap func after wap between a & b\n");
    printf("&a  %p\n",&a);
    printf("&b  %p\n",&b);

}

int main(int argc ,char **argv){

    int a =2;
    int b =3;

    printf("in main func &a & &b\n");
    printf("&a  %p\n",&a);
    printf("&b  %p\n",&b);




    printf("before swap a=%d b=%d\n",a,b);

    swap(&a,&b);
    printf("after swap a=%d b=%d\n",a,b);

    return 0;

}



/*
 * pass by value   & pass by  reference
 * 在交换a 和 b 的值前，main函数中我们打印除了两个变量的地址，把两个变量的地址传入swap函数后再次打印两个指针变量的地址发现和main函数中的地址是不一样的
 *在 swap函数中在栈上分配了两块空间给指针变量，所以在swap中的交换仅仅是这两个变量内容的交换，这两个变量并不是main函数中的变量而是swap函数对他们的复制，
 * 也就是pass by value，当swap函数调用完毕，里面的变量随着函数消亡，所以main函数中的变量a和b并没有被改变。
 */








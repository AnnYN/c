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


//
// Created by YaNan on 2018/7/12.
//
//
//#include <iostream>
//
//struct Object {
//    // non-trivial destructor
//    ~Object() { std::cout << "d"; }
//};
//
//struct Trivial {
//    double d1;
//    double d2;
//}; // trivial ctor and dtor
//
//int main() {
//    int a = 4;
//
//    // loop using goto
//    label:
//    Object obj;
//    std::cout << a << " ";
//    a = a - 2;
//
//    if (a != 0) {
//        goto label;  // jumps out of scope of obj, calls obj destructor
//    }
//    std::cout << '\n';

//    // goto can be used to leave a multi-level loop easily
//    for (int x = 0; x < 3; x++) {
//        for (int y = 0; y < 3; y++) {
//            std::cout << "(" << x << ";" << y << ") " << '\n';
//            if (x + y >= 3) {
//                goto endloop;
////                break;
//            }
//        }
//    }
//    endloop:
//    std::cout << '\n';

//    goto label2; // jumps into the scope of n and t
//    int n; // no initializer
//    Trivial t; // trivial ctor/dtor, no initializer
////  int x = 1; // error: has initializer
////  Object obj2; // error: non-trivial dtor
//    label2:
//
//    {
//        Object obj3;
//        goto label3; // jumps forward, out of scope of obj3
//    }
//    label3:;

//}




//#include <iostream>
//#include <cstring>
//
//int main()
//{
//    int a[20];
//    std::memset(a, 0, sizeof a);
//    for (int ai : a) std::cout << ai;
//}



#include <iostream>
#include <cstdint>
#include <cstring>

//class scientific;
//
//int main()
//{
//    // simple usage
//    char source[] = "once upon a midnight dreary...", dest[4];
//    std::memcpy(dest, source, sizeof dest);
//    for (char c : dest)
//        std::cout << c << '\n';
//
//    // reinterpreting
//    double d = 0.02;
////  std::int64_t n = *reinterpret_cast<std::int64_t*>(&d); // aliasing violation
////    std::int64_t n;
//    scientific n;
//    std::memcpy(&n, &d, sizeof d); // OK
//
////    std::cout << std::hexfloat << d << " is " << std::hex << n
////              << " as an std::int64_t\n";
//
//
//
//    std::cout << std::scientific << d << " is " << std::hex << n
//              << " as an std::int64_t\n";
//}
//



//int main()
//{
//    int n1 = 0;           // non-const object
//    const int n2 = 0;     // const object
//    int const n3 = 0;     // const object (same as n2)
//    volatile int n4 = 0;  // volatile object
//    const struct
//    {
//        int n1;
//        mutable int n2;
//    } x = {0, 0};      // const object with mutable member
//
//    n1 = 1; // ok, modifiable object
////  n2 = 2; // error: non-modifiable object
//    n4 = 3; // ok, treated as a side-effect
////  x.n1 = 4; // error: member of a const object is const
//    x.n2 = 4; // ok, mutable member of a const object isn't const
//
//    const int& r1 = n1; // reference to const bound to non-const object
////  r1 = 2; // error: attempt to modify through reference to const
//    const_cast<int&>(r1) = 2; // ok, modifies non-const object n1
//
//    const int& r2 = n2; // reference to const bound to const object
////  r2 = 2; // error: attempt to modify through reference to const
////  const_cast<int&>(r2) = 2; // undefined behavior: attempt to modify const object n2
//}
//





//struct student{
//
//}stu;
//int main(){
//   std::cout<< sizeof(stu)<<std::endl;
//}




//
//typedef struct st_type{
//    int i;
//    int a[];
//}type_a;
//
//int main(){
////    std::cout<< sizeof(type_a)<<std::endl;
//    type_a *p = (type_a*)malloc(sizeof(type_a)+100*sizeof(int));
//    std::cout<< sizeof(type_a)<<std::endl;
//    p->a[88];
//    std::cout<<p<<std::endl;
//    std::cout<<p->a[88]<<std::endl;
//
//    std::memcpy( p->a, 4, sizeof(p->a));
//
//
//}



//#include <iostream>
//
//union S
//{
//    std::int32_t n;     // occupies 4 bytes
//    std::uint16_t s[2]; // occupies 4 bytes
//    std::uint8_t c;     // occupies 1 byte
//};                      // the whole union occupies 4 bytes
//
//int main()
//{
//    S s = {0x12345678}; // initializes the first member, s.n is now the active member
//    // at this point, reading from s.s or s.c is undefined behavior
//    std::cout << std::hex << "s.n = " << s.n << '\n';
//    s.s[0] = 0x0011; // s.s is now the active member
//    // at this point, reading from n or c is UB but most compilers define it
//    std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
//              << "s.n is now " << s.n << '\n'; // 12340011 or 00115678
//}



#include <iostream>
#include <string>
#include <vector>
//
//union S
//{
//    std::string str;
//    std::vector<int> vec;
//    ~S() {} // needs to know which member is active, only possible in union-like class
//};          // the whole union occupies max(sizeof(string), sizeof(vector<int>))
//
//int main()
//{
//    S s = {"Hello, world"};
//    // at this point, reading from s.vec is undefined behavior
//    std::cout << "s.str = " << s.str << '\n';
//    s.str.~basic_string<char>();
//    new (&s.vec) std::vector<int>;
//    // now, s.vec is the active member of the union
//    s.vec.push_back(10);
//    std::cout << s.vec.size() << '\n';
//    s.vec.~vector<int>();
//}
//
//



//    union A {
//        int x;
//        int y[4];
//    };
//    struct B {
//        A a;
//    };
//    union C {
//        B b;
//        int k;
//    };
//    int f() {
//        C c;               // does not start lifetime of any union member
//        c.b.a.y[3] = 4;    // OK: "c.b.a.y[3]", names union members c.b and c.b.a.y;
//        // This creates objects to hold union members c.b and c.b.a.y
//        return c.b.a.y[3]; // OK: c.b.a.y refers to newly created object
//    }
//
//    struct X {
//        const int a;
//        int b;
//    };
//    union Y {
//        X x;
//        int k;
//    };
//    void g() {
//        Y y = {{1, 2}}; // OK, y.x is active union member (9.2)
//        int n = y.x.a;
//        y.k = 4;   // OK: ends lifetime of y.x, y.k is active member of union
//        y.x.b = n; // undefined behavior: y.x.b modified outside its lifetime,
//        // "y.x.b" names y.x, but X's default constructor is deleted,
//        // so union member y.x's lifetime does not implicitly start
//    }
//}


//int main()
//{
//    union
//    {
//        int a;
//        const char* p;
//    };
//    a = 1;
//    p = "Jennifer";
//}

#include <iostream>

// S has one non-static data member (tag), three enumerator members (CHAR, INT, DOUBLE),
// and three variant members (c, i, d)
//struct S
//{
//    enum{CHAR, INT, DOUBLE} tag;
//    union
//    {
//        char c;
//        int i;
//        double d;
//    };
//};
//
//void print_s(const S& s)
//{
//    switch(s.tag)
//    {
//        case S::CHAR: std::cout << s.c << '\n'; break;
//        case S::INT: std::cout << s.i << '\n'; break;
//        case S::DOUBLE: std::cout << s.d << '\n'; break;
//    }
//}
//
//int main()
//{
//    S s = {S::CHAR, 'a'};
//    print_s(s);
//    s.tag = S::INT;
//    s.i = 123;
//    print_s(s);
//}



#include <stdio.h>
//int main()
//{
//    int a[5]={1,2,3,4,5};
//    int *ptr1=(int *)(&a+1);
//
//    std::cout<<ptr1<<std::endl;
////    int *ptr2=(int *)((int)a+1); //无法编译
////    int *ptr2=(int *)((int)a+1);
//
////    printf("%x,%x",ptr1[-1],*ptr2);
//    printf("%x",*ptr1); //为什么输出是7ffe
//
//    return 0;
//}






//enum Color
//{
//    GREEN = 1,
//    RED,
//    BLUE, GREEN_RED = 10, GREEN_BLUE
//}ColorVal;
//
//int main(){
//    std::cout<<RED<<std::endl;
//    std::cout<<GREEN_BLUE<<std::endl;
//    std::cout<< sizeof(ColorVal)<<std::endl;
//}




//#define a int[10]
int main(){
//    a[10] a[10];
//    a[10] a;
//    int a[10];
//    int a;

//a b[10];


//    a b;


//    a* b[10];

//    a* b;

    std::cout<<int[10]<<std::endl;



}











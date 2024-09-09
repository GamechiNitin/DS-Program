#include <iostream>
using namespace std;

void update(int *p)
{
    *p = *p * 2;
}
void increment(int **p)
{
    ++(**p);
}

int main()
{
    // MCQ - 1
    int first = 8;
    int second = 18;
    int *p = &second;
    *p = 9;
    cout << "Ans 1 : " << first << " " << second << endl;
    // 8, 9;

    // MCQ - 2
    int third = 6;
    int *m = &third;
    int *n = m;
    (*n)++;
    cout << "Ans 2 : " << third << endl;
    // 7

    // MCQ - 3
    int four = 8;
    int *a = &four;
    cout << "Ans 3 : " << (*a)++ << " ";
    cout << "Ans 3 : " << four << endl;
    // 8 9

    // MCQ - 4
    /*
    int *b = 0;
    int five = 110;
    *b = five; // Error : b = &five; b = null initally
    cout << "Ans - 4 : " << *b << endl;
    */
    // Segemental Fault

    // MCQ - 5
    int c = 8;
    int d = 11;
    int *e = &d;
    c = *e;
    *e = *e + 2;
    cout << "Ans 5 : " << c << " " << d << endl;
    // 11 13

    // MCQ - 6
    float f = 12.5;
    float g = 21.5;
    float *h = &f;
    (*h)++;
    *h = g;
    cout << "Ans 6 : " << *h << " " << f << " " << g << endl;
    // 21.5 21.5 21.5

    // MCQ - 7
    int arr[5];
    int *ptr;
    cout << "Ans 7 : " << sizeof(arr) << " " << sizeof(ptr) << endl;
    // 20 8 => 4*5 = 20 => 8 bytes pointer

    // MCQ - 8
    int arr2[] = {11, 21, 13, 54};
    cout << "Ans 8 : " << *(arr2) << " " << *(arr2 + 1) << endl;
    // 11 21

    // MCQ - 9
    int arr3[] = {11, 12, 31};
    cout << "Ans 9 : " << arr3 << " " << &arr3 << endl;
    // 0x5ffe14 0x5ffe14

    // MCQ - 10
    int arr4[] = {11, 12, 31};
    cout << "Ans 10 : " << (arr4 + 1) << endl;
    // 0x5ffe0c

    // MCQ - 11
    int *j = arr4;
    cout << "Ans 11 : " << j[2] << endl;
    // 31

    // MCQ - 12
    int arr5[] = {11, 12, 13, 14, 15};
    cout << "Ans 12 : " << *(arr5) << " " << *(arr5 + 3) << endl;

    // MCQ - 13
    int arr6[] = {11, 12, 31};
    // int *ptr = arr6++;
    cout << "Ans 13 : " << *ptr << endl;
    // Error : Cannot modified arr6

    // MCQ - 14
    char ch = 'a';
    char *ptr1 = &ch;
    ch++;
    cout << "Ans 14 : " << *ptr1 << endl;
    // b

    // MCQ - 15
    char arr7[] = "abcdef";
    char *ptr2 = &arr7[0];
    cout << "Ans 15 : " << ptr2 << endl;
    // abcdef

    // MCQ - 16
    char arr8[] = "abcdef";
    char *ptr3 = &arr8[0];
    ptr3++;
    cout << "Ans 16 : " << ptr3 << endl;
    // bcdef

    // MCQ - 17
    char str[] = "gamechi";
    char *str11 = str;
    cout << "Ans 17 : " << str[0] << " " << str11[0] << endl;
    // g g

    // MCQ - 18
    int k = 10;
    update(&k);
    cout << "Ans 18 : " << k << endl;
    // 20

    // MCQ - 19
    int r = 110;
    int *s = &r;
    int **t = &s;
    int result = (**t)++ + 9;
    cout << "Ans 19 : " << r << " " << result << endl;
    // 111 119

    // MCQ - 20
    int first1 = 100;
    int *p1 = &first1;
    int **q1 = &p1;
    int second1 = ++(**q1);
    int *r1 = *q1;
    ++(*r1);
    cout << "Ans 20 : " << first1 << " " << second1 << endl;
    // 102 101

    int num = 110;
    int *ptr4 = &num;
    increment(&ptr4);
    cout << "Ans 21 : " << num << endl;
    // 111
    return 0;
}
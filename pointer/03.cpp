#include<iostream>
using namespace std;


void mcq1() {
    int first = 8;
	int second = 18;
	int *ptr = &second;
	*ptr = 9;
	cout << first << " " << second << endl;
}
void mcq2() {
    int first = 6;
	int *p = &first;
	int *q = p;
	(*q)++;
	cout << first << endl;
}
void mcq3() {
    int first = 8;
	int *p = &first;
	cout << (*p)++ << " ";
	cout << first << endl;
}
void mcq4() {
    int *p = 0;
	int first = 110;
	*p = first;
	cout << *p << endl;
}
void mcq5() {
    int first = 8;
	int second = 11;
	int *third = &second;
	first = *third;
	*third = *third+2;
	cout << first << " " << second << endl;
}
void mcq6() {
    float f = 12.5;
	float p = 21.5;
	float *ptr = &f;
	(*ptr)++;
	(*ptr) = p;
	cout << *ptr << " " << f << " " << p << endl;
}
void mcq7() {
    int arr[5];
	int *ptr;
	cout << sizeof(arr) << " " << sizeof(ptr) << endl;
}
void mcq8() {
    int arr[] = {11,21,13,14};
	cout << *(arr) << " " << *(arr+1) << endl;
}
void mcq9() {
    int arr[6] = {11,12,31};
	cout << arr << " " << &arr << endl;
}
void mcq10() {
    int arr[6] = {11,21,13};
	cout << (arr+1) << endl;
}
void mcq11() {
    int arr[6] = {11,21,31};
	int *p = arr;
	cout << p[2] << endl;
}
void mcq12() {
    int arr[] = {11,12,13,14,15};
	cout << *(arr) << " " << *(arr+3) << endl;
}
// void mcq13() {
//     int arr[] = {11,21,31,41};
// 	int *ptr = arr++;
// 	cout << *(ptr) << endl;
// }
void mcq14() {
    char ch = 'a';
	char *ptr = &ch;
	ch++;
	cout << *ptr << endl;
}
void mcq15() {
    char arr[] = "abcde";
	char *ptr = &arr[0];
	cout << ptr << endl;
}
void mcq16() {
    char arr[] = "abcde";
	char *ptr = &arr[0];
	ptr++;
	cout << ptr << endl;
}
void mcq17() {
    char str[] = "babbar";
	char *ptr = str;
	cout << str[0] << " " << ptr[0] << endl;
}


void update(int *p) {
    *p = (*p) * 2;
}
void mcq18() {
    int i = 10;
    update(&i);
    cout << i << endl;
}


void mcq19() {
    int first = 110;
	int *p = &first;
	int **q = &p;
	int second = (**q)++ + 9;
	cout << first << " " << second << endl;
}
void mcq20() {
    int first = 100;
	int *p = &first;
	int **q = &p;
	int second = ++(**q);
	int *r = *q;
	++(*r);
	cout << first << " " << second << endl;
}


void increment(int **p) {
    ++(**p);
}
void mcq21() {
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
}


int main(){

    // mcq1();
    // mcq2();
    // mcq3();
    // mcq4();
    // mcq5();
    // mcq6();
    // mcq7();
    // mcq8();
    // mcq9();
    // mcq10();
    // mcq11();
    // mcq12();
    // mcq13();
    // mcq14();
    // mcq14();
    // mcq15();

    // mcq16();
    // mcq17();
    // mcq18();
    // mcq19();
    // mcq20();
    // mcq21();

    cout << endl;
    return 0;
}
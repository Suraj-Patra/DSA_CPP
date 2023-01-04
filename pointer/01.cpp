#include<iostream>
using namespace std;


void get_address() {
    int num = 5;
    int *p = &num;
    cout << "num : " << num << endl;
    cout << "Address : " << p << endl;
    cout << "Value by poiner : " << *p << endl; // * = dereference operator
    (*p)++;
    cout << "Increase by pointer : " << num << endl;

    double d = 4.3;
    double *dbl_ptr = &d;
    cout << "Adress : " << dbl_ptr << endl;
    cout << "Value : " << *dbl_ptr << endl;


    cout << "Size of ptr : " << sizeof(p) << endl;
    cout << "Size of dbl_ptr : " << sizeof(dbl_ptr) << endl;
}

int main(){

    get_address();

    cout << endl;
    return 0;
}
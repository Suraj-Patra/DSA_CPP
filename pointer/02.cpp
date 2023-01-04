#include<iostream>
using namespace std;


void pointer() {
    int arr[10] = {3,4,5,78,56};
    
    // cout << "Base address : " << arr << endl;
    // cout << "Base address : " << &arr[0] << endl;

    // cout << "Base value : " << *(arr+1) << endl;

    // int i = 2;
    // cout << "value : " << i[arr] << endl;


    // int *ptr = arr;
    // cout << *ptr << endl;
    // cout << *ptr+1 << endl;
    // cout << *ptr+2 << endl;

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr << endl;
}

void char_array() {
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    char *c = &ch[0];

    // cout << arr << endl;
    // cout << ch << endl;
    // cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
}

void print(int *p) {
    cout << *p << endl;
}
void update(int *p) {
    *p = *p + 1;
    cout << "Update : " << *p << endl;
}
void get_sum(int *arr, int n) {
    cout << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    cout << "Sum : " << sum << endl;
}
void pass_pointer() {
    int value = 5;
    int *p = &value;

    // print(p);

    // cout << "Before : " << *p << endl;
    // update(p);
    // cout << "After : " << *p << endl;

    int arr[6] = {1,2,3,4,5,6};
    get_sum(arr+3, 3);
}


int main(){
    // pointer();
    // char_array();
    pass_pointer();

    cout << endl;
    return 0;
}
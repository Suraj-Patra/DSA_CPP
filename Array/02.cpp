#include<iostream>
using namespace std;

void first_occur(int arr[], int n, int key) {
   
   int start=0, end=n-1;
   int mid = start+(end-start)/2;

   int ans = -1;
   while(start<=end) {
        if(key == arr[mid]) {
            ans = mid;
            end = mid-1;
        } else if(key > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }

        mid = start+(end-start)/2;
   } 
    
   cout << "First Occurance : " << ans << endl;
}
void last_occur(int arr[], int n, int key) {

   int start=0, end=n-1;
   int mid = start+(end-start)/2;

   int ans = -1;
   while(start<=end) {
        if(key == arr[mid]) {
            ans = mid;
            start = mid+1;
        } else if(key > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }

        mid = start+(end-start)/2;
   } 
    
   cout << "Last Occurance : " << ans << endl;
}

void peak_index(int arr[], int n) {

    int start=0, end=n-1;
    int mid = start+(end-start)/2;

    while(start<end) {
        ( arr[mid] < arr[mid+1] )? (start = mid+1) : (end = mid);
        mid = start+(end-start)/2;
    } 

    cout << "Peak index : " << mid;
}

int get_pivot(int arr[], int n) {
    int start=0, end=n-1, mid=start+(end-start)/2;

    while(start<end) {
        (arr[mid] >= arr[0]) ? (start=mid+1) : (end=mid);
        mid=start+(end-start)/2;
    }

    return mid;
}

int binary_search(int arr[], int start, int end, int key) {
    int mid = start+(end-start)/2;

    while(start<=end) {
        if(key == arr[mid]) {
            return mid;
        } else if(key > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }

    return -1;
}

int sqrt_int(int num) {
    int start=0, end=num, mid=start+(end-start)/2;

    int ans = 0;
    while(start<=end) {
        long long int mid_sqr = mid*mid;
        (mid_sqr <= num) ? (ans=mid, start=mid+1) : (end = mid-1);
        mid=start+(end-start)/2;
    }

    return ans;
}
double sqrt_real(int num, int temp, int precision) {
    double fact = 1, ans = temp;

    for(int i=1; i<=precision; i++) {
        fact /= 10;

        while(ans*ans <= num) {
            ans += fact;
        }
        ans -= fact;
    }

    return ans;
}

int main(){

    // int arr[9] = {1,2,3,3,3,3,3,5,5};
    // int key;
    // cout << "Enter the key : ";
    // cin >> key;
    // first_occur(arr, 9, key);
    // last_occur(arr, 9, key);

    // int arr[4] = {3,4,5,1};
    // peak_index(arr, 4);

    // int arr[5] = {7,9,10,2,3}; // Sorted and rotated array
    // int pivot_index = get_pivot(arr, 5);
    // cout << "Pivot : " << arr[pivot_index] << endl;

    // int arr[5] = {7,9,1,2,3};
    // int size = sizeof(arr)/sizeof(int);
    // int key;
    // cout << "Key : ";
    // cin >> key;
    // int pivot = get_pivot(arr, size);
    // int index = (
    //     (key>=arr[0])? 
    //     binary_search(arr, 0, pivot-1, key) : 
    //     binary_search(arr, pivot, (size-1), key)
    // );
    // cout << "Index of " << key << " : " << index;


    // int num = 37;
    // int temp = sqrt_int(num);
    // int precision = 3;
    // cout << "Square Root : " << sqrt_real(num, temp, precision);



    cout << endl;
    return 0;
}
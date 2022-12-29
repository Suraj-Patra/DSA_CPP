#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> v) {
    for(int i:v) {
        cout << i << " ";
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

bool is_possible(int arr[], int n, int m, int mid) {
    int student = 1, page = 0;

    for(int i=0; i<n; i++) {
        if(page <= mid) {
            page += arr[i];
        } else {
            student++;
            if(student>m || page>mid){
                return false;
            }
            page = arr[i];
        }
    }

    return true;
}
void book_allocation(int arr[], int n, int m) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    int start=0, end=sum, mid=start+(end-start)/2, ans=-1;
    while(start<=end) {
        is_possible(arr, n, m, mid)? (ans=mid, end=mid-1) : (start=mid+1);
        mid = start+(end-start)/2;
    }

    cout << "Ans : " << ans;
}

void reverse(vector<int> v, int m) {
    int start = m-1, end = v.size()-1;

    while(start<=end) {
        swap(v[start++], v[end--]);
    }

    print_vector(v);
}

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i=0, j=0, pos=0;

    while(i<n && j<m) 
        (arr1[i] <= arr2[j])? (arr3[pos++] = arr1[i++]) : (arr3[pos++] = arr2[j++]);
    while(i<n)
        arr3[pos++] = arr1[i++];
    while(j<m)
        arr3[pos++] = arr2[j++];

    print_arr(arr3, n+m);
}

int sorting_zeroes(int arr[], int n) {
    int i=0, j=n-1;
    while(i<=j) {
        if(arr[i] == 0) i++;
        else if(arr[j] != 0) j--;
        else if(arr[i]!=0 && arr[j]==0 && i<=j) swap(arr[i++], arr[j--]);
    }
    return j+1;
}
void insertion_sort(int arr[], int n, int pointer){
    for(int i=pointer; i<n; i++){
        int num = arr[i];
        for(int j=i-1; j>=0; j--){
            if(num < arr[j]){
                arr[j+1] = arr[j];
                arr[j] = num;
            }else{
                break;
            }
        }
    }
}

int main(){

    // int arr[4] = {10,20,30,40};
    // int m = 2;
    // book_allocation(arr,4,m);

    // vector<int> v = {11, 2, 7, 13, 4, 9};
    // int m = 2;
    // reverse(v, m);

    // int arr1[5] = {1,3,5,7,9};
	// int arr2[3] = {2,4,6};
	// int arr3[8] = {0};
	// merge(arr1, 5, arr2, 3, arr3);

    // int arr[] = {0,1,0,3,12};
    int arr[] = {2,0,1,3,0,0,0};
    int size = sizeof(arr)/sizeof(int);
    int pointer = sorting_zeroes(arr, size);
    insertion_sort(arr, size, pointer);
    print_arr(arr, size);


    cout << endl;
    return 0;
}
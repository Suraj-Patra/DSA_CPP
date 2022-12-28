#include<iostream>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int linear_search(int arr[], int n){
    int key;
    cout << "Enter key : ";
    cin >> key;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

void reverse_arr(int arr[], int n) {
    int i = 0, j = n-1;
    while(i<j) {
        swap(arr[i++], arr[j--]);
    }
    print_arr(arr, n);
}

void swap_alternate(int arr[], int n) {
    for(int i=0; i<n-1; i+=2) {
        swap(arr[i], arr[i+1]);
    }
    print_arr(arr, n);
}

void find_unique(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++){
        ans ^= arr[i];
    }

    cout << ans;
}

void find_duplicate(int arr[], int n) {
    int ans = 0;

    for(int i=0; i<n; i++) {
        ans ^= arr[i];
    }

    for(int i=1; i<n; i++) {
        ans ^= i;
    }

    cout << ans;
}

void find_all_duplicates(int arr[], int n) {
    int ans[n];
    int count = 0, pos = 0;

    for(int i=1; i<=n; i++) {
        for(int j=0; j<n; j++) {
            ( i==arr[j] ) && ++count;
        }
        if(count>=2) {
            ans[pos] = i;
            pos++;
            count = 0;
        }
    }

    print_arr(ans, pos);
}

void array_intersection(int arr1[], int n, int arr2[], int m) {
    int i=0, j=0, flag=0;

    while(i<n && j<m) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            flag = 1;
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    if(flag==0) {
        cout << "-1";
    }
}

void sort_0_1(int arr[], int n) {
    int i=0, j=n-1;

    while(i<=j) {
        (arr[i]==0) && i++;
        (arr[j]==1) && j--;
        if(arr[i]==1 && arr[j]==0 && i<=j){
            swap(arr[i++],arr[j--]);
        }  
    }

    print_arr(arr, n);
}

void sort_0_1_2(int arr[], int n) {
    int i=0, j=n-1;

    // Shifting 0 to left :
    while(i<=j) {
        (arr[i] == 0) && i++;
        (arr[j] != 0) && j--;
        if(arr[i]!=0 && arr[j]==0 && i<=j) {
            swap(arr[i++], arr[j--]);
        }
    }

    j = n-1;
    // Shifting 2 to right :
    while(i<=j) {
        (arr[i] != 2) && i++;
        (arr[j] == 2) && j--;
        if(arr[i]==2 && arr[j]!=2 && i<=j) {
            swap(arr[i++], arr[j--]);
        }
    }

    print_arr(arr, n);
}


int main(){

    // int arr[5] = {2,4,7,3,5};
    // int ans = linear_search(arr, 5);
    // cout << "Index : " << ans;

    // int arr[6] = {3,4,2,7,9,8};
    // reverse_arr(arr,6);

    // // int arr[6] = {4,7,6,5,3,9};
    // int arr[5] = {5,2,7,3,6} ;
    // swap_alternate(arr, 5);

    // int arr[7] = {2,4,3,2,6,4,3};
    // find_unique(arr,7);

    // int arr[5] = {1,2,3,4,2};
    // find_duplicate(arr, 5);

    // int arr[7] = {7, 2, 3, 7, 2, 7, 7};
    // find_all_duplicates(arr, 7);

    // // int arr1[6] = {1, 2, 2, 2, 3, 4};
    // // int arr2[4] = {2, 2, 3, 3};
    // int arr1[6] = {1, 2, 3, 4, 5, 6};
    // int arr2[4] = {7, 8, 9, 10};
    // array_intersection(arr1, 6, arr2, 4);

    // // int arr[5] = {0,1,1,0,1};
    // // int arr[5] = {0,0,0,1,0};
    // int arr[6] = {0,0,0,1,1,1}; 
    // sort_0_1(arr, 6);

    int arr[8] = {0,1,1,2,0,2,1,0};    
    sort_0_1_2(arr, 8); 


    cout << endl;
    return 0;
}
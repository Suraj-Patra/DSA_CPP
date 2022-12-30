#include<iostream>
#include<vector>
using namespace std;

void print_arr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}


void k_shift_rotate(int arr[], int n, int k) {
	int temp[n] = {0};
	for(int i=0; i<n; i++) {
		int pos = (i+k)%n;
		temp[pos] = arr[i];
	}

	print_arr(temp, n);
}

void check_sorted_rotated(int arr[], int n) {
	int pair = 0;
	for(int i=1; i<n; i++) {
		(arr[i-1] > arr[i]) && (++pair);
	}
	(arr[n-1] > arr[0]) && (++pair);

	cout << "Pair : " << pair << endl;
	cout << (pair<=1? "True" : "False") << endl;
}


void reverse_arr(vector<int> ans){
	int start = 0, end = ans.size()-1;

	while(start<=end) {
		swap(ans[start++], ans[end--]);
	}

	for(int i:ans) {
		cout << i << " ";
	}
}
void two_arr_sum(vector<int> v1, vector<int> v2) {
	int num1 = 0, num2 = 0, sum = 0;
	vector<int> ans;

	for(int i=0; i<v1.size(); i++) {
		num1 = (num1*10) + v1[i];
	}
	for(int i=0; i<v2.size(); i++) {
		num2 = (num2*10) + v2[i];
	}

	sum = num1+num2;

	while(sum) {
		int digit = sum%10;
		sum /= 10;

		ans.push_back(digit);
	}


	reverse_arr(ans);
}


int main(){

	// int arr[4] = {1,7,9,11};
	// int k = 2;
	// k_shift_rotate(arr, 4, k);

	// int arr[] = {3,5,7,1,6};
	// int size = sizeof(arr)/sizeof(int);
	// check_sorted_rotated(arr, size);

	// vector<int> arr1 = {3,7,2};
	// vector<int> arr2 = {5,6};
	// two_arr_sum(arr1, arr2);


	cout << endl;
	return 0;
}
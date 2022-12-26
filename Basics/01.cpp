#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    /* Even-Odd */
    // int a = 6;
    // cout << ((a&1) ? "Odd" : "Even");


    /* Count number of 1 bits */
    // // For Decimal :
    // int n = 15;
    // int count = 0;
    // while(n){
    //     (n&1 && count++);
    //     n = n>>1;
    // }
    // cout << "Count : " << count;

    // // For Binary :
    // string n;
    // cout << "Enter a binary number : ";
    // cin >> n;
    // int count = 0;
    // while(n != "") {
    //     char bit = n[n.length()-1];
    //     n = n.substr(0, n.length()-1);
    //     if(bit == '1'){
    //         count++;
    //     }
    // }
    // cout << "Count : " << count;


    /* Complement of base 10 integer */
    // int n = 5;
    // int m = n;
    // int mask = 0;
    // while(m) {
    //     mask = ((mask<<1) | 1);
    //     m = (m>>1);
    // }
    // int complement = ((~n) & mask);
    // cout << "Complement : " << complement;


    /* Power of 2 */
    // int input;
    // cout << "Enter input : ";
    // cin >> input;
    // int ans = 1;
    // int flag = 0;
    // for(int i=0; i<=30; i++){
    //     if(ans == input){
    //         flag = 1; 
    //         break;
    //     } 
    //     if( ans<INT_MAX/2 ){
    //         ans *= 2;
    //     }
    // }
    // cout << (flag==1? "Yes" : "No");


    /* Decimal to Binary with negative */
    // int n = -6;
    // unsigned long long int i = 1, ans = 0;
    // ( (n<0) && ( n = (pow(2,16) + n)) );	
    // while(n) {
    //     int bit = (n & 1);
    //     ans += (bit * i);
    //     n = (n>>1);
    //     i *= 10;
    // }
    // cout << "Binary : " << ans;


    /* Binary to Decimal */
    // int n = 1010, i = 1;
    // int ans = 0;
    // while(n) {
    //     int digit = n%10;
    //     n /= 10;
    //     ans += (digit * i);
    //     i *= 2;
    // }
    // cout << "Decimal : " << ans;


    /* Reverse Integer */
    // int n = 123;
    // int sum = 0;
    // while(n) {
    //     int digit = n % 10;
    //     if( sum>INT_MAX/10 || sum<INT_MIN/10 ){
    //         break;
    //     }

    //     n /= 10;
    //     sum = sum*10 + digit;
    // }
    // cout << "Reverse : " << sum;



    cout << endl;
    return 0;
}
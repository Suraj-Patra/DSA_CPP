#include<iostream>
#include<vector>
using namespace std;

int count_primes(int n) {
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    int count = 0;
    for(int i=2; i<n; i++) {
        if(prime[i]) {
            count++;

            for(int j=2*i; j<n; j+=i) {
                prime[j] = false;
            }
        }
    }

    return count;
}
void sieve_of_eratosthenes() {

    // Sieve of Eratosthenes
    int n = 10;
    int count = count_primes(n);
    cout << "Total prime numbers : " << count << endl; 
    /*
        Time Complexity:    n * (n/2+n/3+n/5+n/7+n/11+....)
                        =>  n * n(1/2+1/3+1/5+1/7+...)
                        =>  n * log(log n)
                        =>  nlog(log n)
    */
}


int find_gcd(int a, int b) {
    if(a==0)
        return b;
    if(b==0)
        return a;

    while(a!=b) {
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}
int find_lcm(int a, int b) {
    int gcd = find_gcd(a, b);
    int lcm = (a*b)/gcd;

    return lcm;
}
void gcd_lcm() {
    // Greatest Common Divisor :
    /* 
        Euclid's Algo: gcd(a,b) = gcd(a-b, b) = gcd(a%b, b)
    */
   
    int a = 24, b = 72;
    cout << "GCD : " << find_gcd(a, b) << endl;
    cout << "LCM : " << find_lcm(a, b) << endl;
}


int fast_exponentiation(int a, int b) {
    /* 
        To calculate a^b  => a*a*a... b times => complexity: O(b)
        But, a^b => 
            (a^b/2)^2       -> if b is even -> 2^10 = (2^5)^2
            (a^b/2)^2 * b   -> if b is odd  -> 2^11 = (2^5)^2 * 2
            Complexity: O(log b)
    */

    int res = 1;
    while(b>0) {
        if(b&1) {
            res *= a;
        }
        a = a*a;
        b = (b>>1);
    }

    return res;
}
void modulo() {
    /* 
        (a % n) => [0, n-1]

        a%m + b%m = (a+b)%m
        a%m - b%m = (a-b)%m
        a%m * b%m = (a*b)%m
    */

    // find (a^b)%m
    int a=2, b=10, m;

    int ans = fast_exponentiation(a, b); 
    cout << "Ans : " << ans << endl;
    // Didn't applied the modulo part yet.
}

int main(){

    // sieve_of_eratosthenes();

    // Home work: segemented sieve -> read & code

    // gcd_lcm();

    // Modulus operator :
    modulo();


    cout << endl;
    return 0;
}
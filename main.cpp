#include <iostream>
using namespace std;
/*
 //Problem1
int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);

}
int main() {
    int x,y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;
    cout << x << "^" << y << " = " << power(x, y) << endl;
    return 0;
}
//Problem2
int reverse_Num(int n, int rev = 0) {
    if (n == 0)
        return rev;
    int last_d = n % 10;
    rev = rev * 10 + last_d;

    return reverse_Num(n / 10, rev);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number: " << reverse_Num(n) << endl;
    return 0;
}
//Problem3
int reverse_Num(int n, int rev = 0) {
    if (n == 0)
        return rev;
    return reverse_Num(n / 10, rev * 10 + (n % 10));
}
bool isPalindrome(int n) {
    return n == reverse_Num(n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;

    return 0;
}
//Problem4

#include <cmath>
bool isPrimeRecursive(int n, int i) {
    // Base cases
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrimeRecursive(n, i + 1);
}

bool isPrime(int n) {
    return isPrimeRecursive(n, 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
//Problem5
int countEvenDigits(int n) {

    if (n == 0)
        return 0;

    int lastDigit = n % 10;
    int count = (lastDigit % 2 == 0) ? 1 : 0;
    return count + countEvenDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of even digits: " << countEvenDigits(n) << endl;
    return 0;
}
//Problem6

int productOfDigits(int n) {
    if (n == 0)
        return 1;

    int lastDigit = n % 10;
    return lastDigit * productOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Product of digits: " << productOfDigits(n) << endl;
    return 0;
}
//Problem7

bool isPowerOfTwo(int n) {
    if (n == 1)
        return true;
    if (n == 0 || n % 2 != 0)
        return false;
    return isPowerOfTwo(n / 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << n << " is a power of 2." << endl;
    else
        cout << n << " is not a power of 2." << endl;

    return 0;
}
//Problem8
bool isIncreasing(int n) {
    if (n < 10)
        return true;
    int last = n % 10;
    int secondLast = (n / 10) % 10;
    if (secondLast >= last)
        return false;
    return isIncreasing(n / 10);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isIncreasing(n))
        cout << n << " has strictly increasing digits." << endl;
    else
        cout << n << " does not have strictly increasing digits." << endl;

    return 0;
}
//Problem9
int countZeros(int n) {
    if (n == 0)
        return 1;

    if (n < 10)
        return (n == 0) ? 1 : 0;
    int lastDigit = n % 10;
    int count = (lastDigit == 0) ? 1 : 0;

    return count + countZeros(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of zeros: " << countZeros(n) << endl;
    return 0;
}

//PROBLEM10
long long fastPower(int x, int y) {
    if (y == 0)
        return 1;

    long long half = fastPower(x, y / 2);

    if (y % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;

    cout << x << "^" << y << " = " << fastPower(x, y) << endl;
    return 0;
}
*/
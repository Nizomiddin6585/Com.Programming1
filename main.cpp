#include <iostream>

using namespace std;

/*
 //Problem1
int product(int a, int b)
{   return a*b;


}
int main() {

    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    cout << "Product = " <<product(num1, num2) << endl;



    return 0;
}

//Problem2
double acceleration(double v1, double v2, double t) {
    return (v2 - v1) / t;
}

int main() {
    double v1, v2, t;
    cout << "Enter initial velocity (v1), final velocity (v2) and time (t): ";
    cin >> v1 >> v2 >> t;

    cout << "Acceleration = " << acceleration(v1, v2, t) << endl;
    return 0;
}

//Problem3
#include <cmath>
void fun(double r) {
    double circumference = 2 * M_PI * r;
    double area = M_PI * r * r;
    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;
}

int main() {
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    fun(radius);
    return 0;
}

//Problem4
#include <cmath>
// Circle version (Problem 3)
void fun(double r) {
    double circumference = 2 * M_PI * r;
    double area = M_PI * r * r;
    cout << "Circumference of Circle = " << circumference << endl;
    cout << "Area of Circle = " << area << endl;
}

// Overloaded version for rectangle
void fun(double a, double b) {
    double perimeter = 2 * (a + b);
    double area = a * b;
    cout << "Perimeter of Rectangle = " << perimeter << endl;
    cout << "Area of Rectangle = " << area << endl;
}

int main() {
    double radius, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;
    fun(radius);

    cout << "\nEnter sides of rectangle (a and b): ";
    cin >> length >> width;
    fun(length, width);

    return 0;
}

//Problem5
void swapNums(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNums(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;
    return 0;
}

//Problem6
int Factorial(int n = 1) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << Factorial(num) << endl;
    cout << "Factorial with no parameter = " << Factorial() << endl;
    return 0;
}

//Problem7
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b) << endl;
    return 0;
}

//Problem8
int maximum(int a, int b, int c) {
    return max(a, max(b, c));
}

int minimum(int a, int b, int c) {
    return min(a, min(b, c));
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum: " << maximum(x, y, z) << endl;
    cout << "Minimum: " << minimum(x, y, z) << endl;
    return 0;
}

//problem9
double sum(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double product(double a, double b) { return a * b; }
double division(double a, double b) { return a / b; }

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum = " << sum(x, y) << endl;
    cout << "Difference = " << subtract(x, y) << endl;
    cout << "Product = " << product(x, y) << endl;
    if (y != 0)
        cout << "Division = " << division(x, y) << endl;
    else
        cout << "Division by zero is not allowed." << endl;

    return 0;
}


//Problem10
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    const int total = 75;
    for (int i = 1; i <= total; i++) {
        cout << getTriangularNumber(i) << "\t";
        if (i % 5 == 0) cout << endl;
    }
    return 0;
}

//Problem11
void displayEven(int number) {
    string s = to_string(number);
    for (char c : s) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Even digits: ";
    displayEven(num);
    return 0;
}

//Problem17

bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int count = 0, num = 2;
    while (count < 50) {
        if (num % 2 == 0 && isPalindrome(num)) {
            cout << num << "\t";
            count++;
            if (count % 5 == 0) cout << endl;
        }
        num++;
    }
    return 0;
}

//Problem21
#include <ctime>
int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current date and time is: ";
    cout << (1900 + ltm->tm_year) << "-"
         << (1 + ltm->tm_mon) << "-"
         << ltm->tm_mday << " "
         << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec << endl;

    return 0;
}

//Problem25
#include <cmath>
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int count = 0, num = 2;
    while (count < 25) {
        if (isPrime(num) && isPrime(digitSum(num))) {
            cout << num << " ";
            count++;
            if (count % 5 == 0) cout << endl;
        }
        num++;
    }
    return 0;
}


//Problem26
#include <string>
#include <cmath>
int bin2Octal(string binary) {
    int decimal = 0, power = 0;
    for (int i = binary.size() - 1; i >= 0; i--) {
        if (binary[i] == '1')
            decimal += pow(2, power);
        power++;
    }

    // Convert decimal to octal
    int octal = 0, place = 1;
    while (decimal > 0) {
        int digit = decimal % 8;
        octal += digit * place;
        decimal /= 8;
        place *= 10;
    }
    return octal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Octal value: " << bin2Octal(binary) << endl;
    return 0;
}
*/












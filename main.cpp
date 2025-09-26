#include <iostream>
using namespace std;
//Problem11
/*
int main() {
    int positives = 0, negatives = 0, total = 0, count = 0;
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;
        if (n > 0) positives++;
        else negatives++;
        total += n;
        count++;
    }

    cout << "The number of positives is " << positives << endl;
    cout << "The number of negatives is " << negatives << endl;
    cout << "The total is " << total << endl;
    if (count != 0)
        cout << "The average is " << (double) total / count << endl;
    else
        cout << "The average is 0" << endl;

    return 0;
}
//Problem12
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
//Problem13
int main () {
    int n;
    cout << "Enter number of rows";
    cin >> n;
    for (int i=1; i<=n; ++i) {


        for (int j=1; j<=i; ++j)
            cout << "*";
        cout << '\n';

    }



    return 0;
}
//Problem14
int main() {
    int n;
    cout<< "Enter the height";
    cin>> n;
    if (n==0) {
        cout << "The depth is 0" << endl;
    }
    else {
        for (int i=1; i<=n ; i++) {
            for (int j=1; j<=i; j++) {
                cout<< i;
            }
            cout << "\n";
        }
}
    return 0;
}
//Problem15
#include <iomanip>
int main() {
    int n;
    cin >> n;
    double sum = 0.0;
    for (int i = 1; i<=n; i++) {
        cout << "1/" << i ;
        if (i!=n)
            cout << "+";
        sum += 1.0/i;
    }
    cout << endl;
    cout << "The sum is " << fixed << setprecision(5) << sum << endl;
    return 0;
}

//Problem16
#include <iomanip>
int main() {
    double monthlyRent = 1000.0;
    double increaseRate = 0.03;
    double totalAllYears = 0.0;

    for (int year = 1; year <= 5; year++) {
        double yearlyRent = monthlyRent * 12;
        totalAllYears += yearlyRent;

        cout << fixed << setprecision(2);
        cout << "For year number " << year
             << " monthly rent is $" << monthlyRent << endl;
        cout << "The total for year " << year
             << " is $" << yearlyRent << endl;


        monthlyRent *= (1 + increaseRate);
    }

    cout << "The total rent for all 5 years is $"
         << totalAllYears << endl;

    return 0;
}
//Problem17
int main() {
    int number, sum = 0;
    cout << "Enter an integer: ";
    cin >> number;

    int temp = number; // to keep original number

    while (temp > 0) {
        int digit = temp % 10;   // get last digit
        sum += digit;            // add to sum
        temp /= 10;              // remove last digit
    }

    cout << "The sum of digits is " << sum << endl;

    return 0;
}
//Problem18
#include <cmath>
int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0, base = 1;
    long long temp = binary;

    while (temp > 0) {
        int lastDigit = temp % 10;
        decimal += lastDigit * base;
        base *= 2;
        temp /= 10;
    }

    cout << "The decimal number is " << decimal << endl;

    return 0;
}
//Problem19
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int factor = 2;
    cout << "Factors: ";
    while (n > 1) {
        if (n % factor == 0) {
            cout << factor << " ";
            n /= factor;
        } else {
            factor++;
        }
    }

    return 0;
}
//Problem20
#include <iomanip>
#include <valarray>
int main() {
    cout << fixed << setprecision(6);
    for (int i = 10000; i <= 100000; i += 10000) {
        double pi = 0.0;
        for (int k = 1; k <= i; k++) {
            pi += pow(-1, k+1) * 1.0 / (2 * k - 1);
        }
        pi *= 4;
        cout << "i = " << i << "  -->  Pi ≈ " << pi << endl;
    }

    return 0;
}
//Problem22
int main() {
    cout << "Miles\tKilometers" << endl;

    for (int miles = 1; miles <= 10; miles++) {
        double km = miles * 1.609;
        cout << miles << "\t" << km << endl;
    }

    return 0;
}
//Problem24
int main() {
    int evenCount = 0, oddCount = 0;

    for (int i = 1; i <= 100000; i++) {
        int num = i;

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}*/

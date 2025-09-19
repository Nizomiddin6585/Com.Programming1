#include <iostream>
using namespace std;
//Problem12
/*
int main() {
    int a,b,c;
    cout << "Enter 3 angles";
    cin >> a >> b>> c;

    if (a+b+c == 180)
        cout << " The triangle is valid";
    else
        cout << "The triangle is not valid";
    return 0;
}
//Problem13
#include <cmath>
int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double d = b*b - 4*a*c;

    if (d < 0) {
        cout << "No real roots." << endl;
    } else {
        double root1 = (-b + sqrt(d)) / (2*a);
        double root2 = (-b - sqrt(d)) / (2*a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    return 0;
}
//Problem14
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    }
    else {
        cout << "It is not an alphabet" << endl;
    }

    return 0;
}
//Problem15
int main() {
    double weight1, price1, weight2, price2;
    cout << "Enter weight and price for package1" << endl;
    cin >> weight1 >> price1;
    cout << "Enter weight and price for package2" << endl;
    cin >> weight2 >>price2;
    double cost1 = price1/weight1;
    double cost2= price2/weight2;
    if (cost1>cost2)
        cout << "package 2 has better price" << endl;
    else if (cost1<cost2)
        cout << "package 1 has better price"<< endl;
    else
        cout << "2 packages has the same price";
    return 0;
}
//Problem16
int main() {
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;

    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome" << endl;
    } else {
        cout << original << " is not a palindrome" << endl;
    }

    return 0;
}
//Problem17
int main() {
    char choice;
    cout << "Enter a letter (u/e/r/g): ";
    cin >> choice;

    switch(choice) {
        case 'u':
            cout << "Salom" << endl;
            break;
        case 'e':
            cout << "Hello" << endl;
            break;
        case 'r':
            cout << "Privet" << endl;
            break;
        case 'g':
            cout << "Hallo" << endl;
            break;
        default:
            cout << "I do not know that language :(" << endl;
    }

    return 0;
}
//Problem18
#include <cmath>
int main() {
    double x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    double distance = sqrt(x*x + y*y);

    if (distance <= 10)
        cout << "The point (" << x << ", " << y << ") is inside the circle." << endl;
    else
        cout << "The point (" << x << ", " << y << ") is outside the circle." << endl;

    return 0;
}
//Problem19
int main() {
    int today, elapsed;
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> today;

    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsed;

    int futureDay = (today + elapsed) % 7;

    cout << "Today is " << days[today]
         << " and the future day is " << days[futureDay] << "." << endl;

    return 0;
}
//Problem20
int main() {
    double w;
    cout << "Enter package weight (kg): ";
    cin >> w;

    if (w > 0 && w <= 1)
        cout << "Shipping cost: 3500 som\n";
    else if (w > 1 && w <= 3)
        cout << "Shipping cost: 5500 som\n";
    else if (w > 3 && w <= 10)
        cout << "Shipping cost: 8500 som\n";
    else if (w > 10 && w <= 20)
        cout << "Shipping cost: 10500 som\n";
    else
        cout << "Invalid input\n";

    return 0;
}
//Problem21
int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "In January there is:\n";
            cout << "- New Year, 1 January\n";
            break;
        case 3:
            cout << "In March there is:\n";
            cout << "- International Women's Day, 8 March\n";
            cout << "- Navruz, 21 March\n";
            break;
        case 5:
            cout << "In May there is:\n";
            cout << "- Memorial Day, 9 May\n";
            break;
        case 9:
            cout << "In September there is:\n";
            cout << "- Independence Day, 1 September\n";
            break;
        case 10:
            cout << "In October there is:\n";
            cout << "- Teachers' and Mentors' Day, 1 October\n";
            break;
        case 12:
            cout << "In December there is:\n";
            cout << "- Constitution Day, 8 December\n";
            break;
        case 2: case 4: case 6: case 7: case 8: case 11:
            cout << "In this month there are no fixed national holidays.\n";
            cout << "There are also Ramadan Hayit and Kurban Hayit, but their dates change each year.\n";
            break;
        default:
            cout << "Invalid month number!\n";
    }

    return 0;
}*/
//Problem without number
int main() {
    double gpa;
    cout << "Enter GPA (0 - 4.5): ";
    cin >> gpa;

    int category;

    // Map GPA into categories
    if (gpa >= 4.0 && gpa <= 4.5)
        category = 1;   // 80%
    else if (gpa >= 3.5 && gpa < 4.0)
        category = 2;   // 60%
    else if (gpa >= 3.0 && gpa < 3.5)
        category = 3;   // 50%
    else if (gpa >= 0 && gpa < 3.0)
        category = 4;   // No scholarship
    else
        category = 0;   // Invalid input

    // Use switch to decide
    switch (category) {
        case 1:
            cout << "You got 80% scholarship\n";
            break;
        case 2:
            cout << "You got 60% scholarship\n";
            break;
        case 3:
            cout << "You got 50% scholarship\n";
            break;
        case 4:
            cout << "No scholarship\n";
            break;
        default:
            cout << "Invalid GPA input!\n";
    }

    return 0;
}



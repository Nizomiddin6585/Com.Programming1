#include <iostream>
//Problem9
using namespace std;

int main() {
    int a = 7, b = 14, c = 21;
    int* ptrs[3] = { &a, &b, &c };

    for(int i = 0; i < 3; i++) {
        cout << *ptrs[i] << " ";
    }
    return 0;
}

//Problem10
using namespace std;

int main() {
    int arr[5] = {9, 3, 7, 1, 6};
    int* p = arr;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            if(*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}

//Problem11
#include <iostream>
using namespace std;

int main() {
    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for(int i = 0; i < 4; i++) {
        cout << suits[i] << " ";
    }
    return 0;
}
//Problem12
#include <iostream>
using namespace std;

int main() {
    const char* days[3] = {"Mon", "Tue", "Wed"};

    for(int i = 0; i < 3; i++) {
        cout << *(*(days + i) + 1) << " ";
    }

    return 0;
}
//Problem13
#include <iostream>
using namespace std;

int main() {
    int deck[4][13] = {0};

    deck[0][0] = 1;  
    deck[3][1] = 2;

    cout << "Ace of Hearts, Two of Spades";
    return 0;
}

//Problem14
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int deck[4][13];
    int value = 1;


    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 13; j++)
            deck[i][j] = value++;


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            int r1 = rand() % 4;
            int r2 = rand() % 13;
            int temp = deck[i][j];
            deck[i][j] = deck[r1][r2];
            deck[r1][r2] = temp;
        }
    }

    const char* suits[] = {"Hearts","Diamonds","Clubs","Spades"};
    const char* faces[] = {"Ace","Two","Three","Four","Five","Six","Seven",
                           "Eight","Nine","Ten","Jack","Queen","King"};


    cout << faces[ deck[0][0] % 13 ] << " of " << suits[ deck[0][0] / 13 ];

    return 0;
}

//Problem15
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from greet()" << endl;
}

void bye() {
    cout << "Goodbye from bye()" << endl;
}

int main() {
    void (*fptr)();

    fptr = greet;
    fptr();

    fptr = bye;
    fptr();

    return 0;
}
//Problem16
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*fptr)(int, int);

    fptr = add;
    cout << "Add: " << fptr(3, 5) << endl;

    fptr = multiply;
    cout << "Multiply: " << fptr(3, 5) << endl;

    return 0;
}

//Problem17
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

void calculate(int (*op)(int, int), int x, int y) {
    cout << "Result: " << op(x, y) << endl;
}

int main() {
    calculate(add, 10, 10);
    calculate(multiply, 4, 5);

    return 0;
}

//Problem18
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*ops[2])(int, int) = {add, multiply};

    int choice = 1;
    cout << "Result: " << ops[choice](3, 5);

    return 0;
}
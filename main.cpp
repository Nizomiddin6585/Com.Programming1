//Problem8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int rolls = 10000;
    int count[7] = {0};

    srand(time(0));

    for (int i = 0; i < rolls; i++) {
        int face = rand() % 6 + 1;
        count[face]++;
    }

    cout << "Results after rolling the die " << rolls << " times:\n";
    for (int i = 1; i <= 6; i++) {
        cout << "Face " << i << ": " << count[i] << " times" << endl;
    }

    return 0;
}
//Problem10
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
//Problem6
#include <iostream>
using namespace std;

int main() {
    int freq[26] = {0};
    char ch;

    cout << "Enter characters (end with 0): ";
    while (cin >> ch && ch != '0') {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    cout << "\nFrequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char('a' + i) << ": " << freq[i] << endl;
    }
    return 0;
}
//Problem7
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

//Problem9
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
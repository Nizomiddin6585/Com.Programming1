//Problem7
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int A[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];


    int B[n][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            B[j][i] = A[i][j];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    return 0;
}

//Problem8
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int A[n][m], B[n][m], C[n][m];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> B[i][j];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            C[i][j] = A[i][j] + B[i][j];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}

//Problem9
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1; // size of matrix A
    int A[r1][c1];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cin >> r2 >> c2; // size of matrix B
    int B[r2][c2];
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];


    if (c1 != r2) {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    int C[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}

//Problem6
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int diagonalSum = 0;


    for(int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }

    cout << diagonalSum << endl;

    return 0;
}

//Problem5
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[100][100];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}

//Problem10
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100][100];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            swap(a[i][j], a[i][k]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Problem15
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int x;
    cin >> x;


    for (int i = 0; i < v.size(); i++) {
        if (v[i] != x)
            cout << v[i] << " ";
    }

    return 0;
}

//Problem16
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;


    while (cin >> num) {
        numbers.push_back(num);
        if (cin.peek() == '\n') break;
    }


    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}

//Problem18
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int num;


    while (cin >> num)
        v.push_back(num);


    v.erase(unique(v.begin(), v.end()), v.end());


    for (int x : v)
        cout << x << " ";

    return 0;
}

//Problem19
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int num;


    while (cin >> num)
        v.push_back(num);


    sort(v.begin(), v.end());


    for (int x : v)
        cout << x << " ";

    return 0;
}

//Problem20
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int num;


    while (cin >> num)
        v.push_back(num);


    sort(v.begin(), v.end(), greater<int>());


    v.erase(unique(v.begin(), v.end()), v.end());


    if (v.size() == 1)
        cout << v[0];
    else
        cout << v[1];

    return 0;
}




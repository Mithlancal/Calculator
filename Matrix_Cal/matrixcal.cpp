#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

const int MAX = 10;

struct Matrix {
    int rows = 0;
    int cols = 0;
    int data[MAX][MAX] = {0};
};

void inputMatrix(Matrix &m, char name);
void displayMatrix(const Matrix &m);
Matrix add(const Matrix &a, const Matrix &b, bool &valid);
Matrix subtract(const Matrix &a, const Matrix &b, bool &valid);
Matrix multiply(const Matrix &a, const Matrix &b, bool &valid);

int main() {
    Matrix matrices[26];
    bool active[26] = {false};

    int numMatrices;

    cout << "--- Matrix Calculator ---\n";
    cout << "How many matrices do you want to define? ";
    cin >> numMatrices;

    for (int i = 0; i < numMatrices; i++) {
        char name = 'A' + i;
        inputMatrix(matrices[name - 'A'], name);
        active[name - 'A'] = true;
    }

    cout << "\n--- Defined Matrices ---\n";

    for (int i = 0; i < 26; i++) {
        if (active[i]) {
            char name = 'A' + i;

            cout << "Matrix " << name << ":\n";
            displayMatrix(matrices[i]);
            cout << "\n";
        }
    }

    cout << "--- Calculate ---\n";
    cout << "Enter expression like A+B, A-B, A*B\n";
    cout << "Enter Q to quit\n";

    while (true) {
        cout << "> ";

        char left, op, right;

        cin >> left;

        if (toupper(left) == 'Q') {
            cout << "Goodbye!\n";
            break;
        }

        cin >> op >> right;

        left = toupper(left);
        right = toupper(right);

        if (!active[left - 'A'] || !active[right - 'A']) {
            cout << "Error: Matrix not defined.\n";
            continue;
        }

        Matrix A = matrices[left - 'A'];
        Matrix B = matrices[right - 'A'];

        Matrix result;

        bool validOperation = false;

        if (op == '+') {
            result = add(A, B, validOperation);
        }
        else if (op == '-') {
            result = subtract(A, B, validOperation);
        }
        else if (op == '*') {
            result = multiply(A, B, validOperation);
        }
        else {
            cout << "Invalid operator.\n";
            continue;
        }

        if (validOperation) {
            cout << "Result:\n";
            displayMatrix(result);
        }
    }

    return 0;
}

void inputMatrix(Matrix &m, char name) {
    cout << "\nEnter Matrix " << name << " rows and cols: ";
    cin >> m.rows >> m.cols;

    if (m.rows > MAX) {
        m.rows = MAX;
    }

    if (m.cols > MAX) {
        m.cols = MAX;
    }

    cout << "Enter values:\n";

    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            cin >> m.data[i][j];
        }
    }
}

void displayMatrix(const Matrix &m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            cout << setw(5) << m.data[i][j];
        }

        cout << "\n";
    }
}

Matrix add(const Matrix &a, const Matrix &b, bool &valid) {
    Matrix result;

    if (a.rows != b.rows || a.cols != b.cols) {
        cout << "Addition requires same dimensions.\n";
        valid = false;
        return result;
    }

    valid = true;

    result.rows = a.rows;
    result.cols = a.cols;

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            result.data[i][j] =
                a.data[i][j] + b.data[i][j];
        }
    }

    return result;
}

Matrix subtract(const Matrix &a, const Matrix &b, bool &valid) {
    Matrix result;

    if (a.rows != b.rows || a.cols != b.cols) {
        cout << "Subtraction requires same dimensions.\n";
        valid = false;
        return result;
    }

    valid = true;

    result.rows = a.rows;
    result.cols = a.cols;

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            result.data[i][j] =
                a.data[i][j] - b.data[i][j];
        }
    }

    return result;
}

Matrix multiply(const Matrix &a, const Matrix &b, bool &valid) {
    Matrix result;

    if (a.cols != b.rows) {
        cout << "Multiplication requires A.cols == B.rows.\n";
        valid = false;
        return result;
    }

    valid = true;

    result.rows = a.rows;
    result.cols = b.cols;

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {

            result.data[i][j] = 0;

            for (int k = 0; k < a.cols; k++) {
                result.data[i][j] +=
                    a.data[i][k] * b.data[k][j];
            }
        }
    }

    return result;
}

/*Write a Program of Two 1D Matrix Addition using Operator Overloading

*/


#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *arr;

public:

    Matrix(int s) {
        size = s;
        arr = new int[size];
    }

    void arryEle() {
        cout << "Enter " << size << " elements of the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    Matrix operator+(const Matrix &m) {
        Matrix temp(size);

        for (int i = 0; i < size; i++) {
            temp.arr[i] = this->arr[i] + m.arr[i];
        }
        return temp;
    }


    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size), matrix2(size);


    cout << "Matrix 1:\n";
    matrix1.arryEle();
    cout << "Matrix 2:\n";
    matrix2.arryEle();

    Matrix result = matrix1 + matrix2;


    cout << "Result of matrix addition:\n";
    result.display();

    return 0;
}

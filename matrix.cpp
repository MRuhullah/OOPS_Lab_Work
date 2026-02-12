#include <iostream>
using namespace std;

class Matrix
{
private:
    int mat[2][2]; // 2x2 matrix

public:
    // Default constructor
    Matrix()
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                mat[i][j] = 0;
    }

    // Parameterized constructor
    Matrix(int a11, int a12, int a21, int a22)
    {
        mat[0][0] = a11;
        mat[0][1] = a12;
        mat[1][0] = a21;
        mat[1][1] = a22;
    }

    // Overload + operator for addition
    Matrix operator+(const Matrix &other)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    // Overload == operator for equality check
    bool operator==(const Matrix &other)
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                if (mat[i][j] != other.mat[i][j])
                    return false;
        return true;
    }

    // Friend function declaration (inside class)
    friend ostream &operator<<(ostream &os, const Matrix &m);
};

// Friend function definition (outside class)
ostream &operator<<(ostream &os, const Matrix &m)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            os << m.mat[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

int main()
{
    // Create matrices
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    // Addition
    Matrix sum = m1 + m2;

    // Display matrices using << operator
    cout << "Matrix 1:\n"
         << m1;
    cout << "Matrix 2:\n"
         << m2;
    cout << "Sum of matrices:\n"
         << sum;

    // Equality check
    Matrix m3(1, 2, 3, 4);
    if (m1 == m3)
        cout << "Matrix 1 is equal to Matrix 3\n";
    else
        cout << "Matrix 1 is NOT equal to Matrix 3\n";

    return 0;
}

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int const ROWS = 3;
    int const COLS = 4;
    int matrix[ROWS][COLS];

    cout << "Введите элементы матрицы (" << ROWS << "x" << COLS << "):" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int max = matrix[0][0];
    int max_row = 0, max_col = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << "Max: " << max << " (строка " << max_row << ", столбец " << max_col << ")" << endl;

    return 0;
}

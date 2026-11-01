#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int N = 7;
    int arr[N] = {3, 5, 9, 12, 4, 7, 14};

    cout << "Первоначальный массив: ";
    for (int i: arr) cout << i << ' ';
    cout << endl;

    //Метод выбора 
    for (int i = 0; i < N; i++)
    {
        int min = arr[i];
        int index_min = i;
        for (int j = i; j < N; j++)
        {
            if (arr[j] < min) 
            {
                min = arr[j];
                index_min = j;
            }
        }
        arr[index_min] = arr[i];
        arr[i] = min;
    }

    cout << "Отсортированный массив: ";
    for (int i: arr) cout << i << ' ';
    cout << endl;
    return 0;
}

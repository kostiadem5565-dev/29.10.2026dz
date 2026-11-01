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

    //Метод пузырька
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N -1 - i; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i: arr) cout << i << ' ';
    cout << endl;
    return 0;
}

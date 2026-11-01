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

    //Метод вставки
    for (int i = 1; i < N; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }      
        arr[j+1] = key;

    }
    cout << "Отсортированный массив: ";
    for (int i: arr) cout << i << ' ';
    cout << endl;
    return 0;
}

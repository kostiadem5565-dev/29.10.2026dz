#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int const N = 5;
    int arr[N];
    
    int count_min = 0, count_max = 0; 
    int index_min = -1, index_max = -1;

    cout << "Введите элементы массива (" << N << " шт): " << endl;
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    for (int i = 0; i < N; i++) 
    {
        if (arr[i] == max)
        {
            count_max += 1;
            if (index_max < 0) index_max = i; 
        }
        if (arr[i] == min)
        {
            count_min += 1;
            if (index_min < 0) index_min = i; 
        }
    }

    cout << "Max: " << max << " (индекс " << index_max << ", " << count_max << " шт), Min: " << min << " (индекс " << index_min << ", " << count_min << " шт)" << endl;

    return 0;
}

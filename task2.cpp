#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int const N = 5;
    int arr[N];
    bool is_sorted = true;

    cout << "Введите элементы массива (" << N << " шт.): " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) cout << "Массив упорядочен по возрастанию" << endl;
    else cout << "Массив НЕ упорядочен по возрастанию" << endl;

    return 0;
}

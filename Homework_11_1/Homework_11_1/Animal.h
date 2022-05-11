#include "Complex.h"
#include <ctime>

template <typename T>

void sort(T* arr, int N)
{
    int i = 0, j = 1, k = N;

    for (int j = 0; j < N; )
    {
        for (int i = (j + 1);;)
        {
            if (i == N)
            {
                j++;
                break;
            }

            if (arr[j] > arr[i])
            {
                T c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;

                break;
            }

            if (arr[j] <= arr[i])
            {
                i++;
            }
        }
    }

    for (int z = 0; z < N; z++)
    {
        cout << arr[z] << " \n";
    }

    cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "rus");

    int const N = 10;

    /*int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 10;
    }*/

    Complex* arr = new Complex[N];

    for (int i = 0; i < N; i++)
    {
        arr[i].Change_re(rand() % 10);

        arr[i].Change_im(rand() % 10);
    }

    sort(arr, N);

    delete[]arr;
}

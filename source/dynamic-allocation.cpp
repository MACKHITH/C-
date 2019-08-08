#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int *array, DIM, numero;

    cout << "Size of the array: ";
    cin >> DIM;

    array == malloc(DIM * sizeof(int));

    for (int i = 0; i < DIM; i++)
    {
        array[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < DIM; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int N1, N2;

    cin >> N1 >> N2;

    if (N1 <= N2)
    {
        while (N1 < N2 + 1)
        {
            cout << N1 << " ";
            N1++;
        }
    }
    else
    {
        if (N2 < N1)
        {
            while (N2 < N1 + 1)
            {
                cout << N2 << " ";
                N2++;
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int A[12], neparni = 0, index = 0;


    // введення елементів мисиву
    for (int i = 0; i < 12; i++)
    {
        cin >> A[i];
    }


    // шукаємо 2 непарний елемент
    for (int i = 0; i < 12; i++)
    {
        if (A[i] %2 != 0)
        {
            neparni++;

            if (neparni == 2)
            {
                index = i;
            }
        }
    }
if (neparni < 2)
    {
        cout << "Другого непарного елемента не існує";
        return 0;
    }


    // cтворюємо новий масив з нашою умовою
    for (int i = 0; i < 12; i++)
    {
        if (i <= index)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = A[i]/A[index];
        }
    }
}
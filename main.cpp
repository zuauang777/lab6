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
}
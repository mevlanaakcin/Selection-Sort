#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

// Random number generator
int randNum()
{
    int min = 1, max = 100;
    return min + rand() % max;
}
void changeIndex(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int leng;
    int test = 0;
    srand(time(0));

    cout << "Enter Array Size:";
    cin >> leng;

    int arr[leng];

    // Create Array
    for (int i = 0; i < leng; i++)
    {
        arr[i] = randNum();
    }

    cout << "Array:[";
    for (int i = 0; i < leng; i++)
    {
        i == leng - 1 ? cout << arr[i] : cout << arr[i] << ",";
    }
    cout << "]" << endl;

    // Selection-sort
    for (int i = 0; i < leng; i++)
    {
        for (int j = i + 1; j < leng; j++)
        {
            if (arr[i] > arr[j])
            {
                changeIndex(&arr[i], &arr[j]);
            }
        }
    }

    cout << "New Array:[";
    for (int i = 0; i < leng; i++)
    {
        i == leng - 1 ? cout << arr[i] : cout << arr[i] << ",";
    }
    cout << "]" << endl;
}

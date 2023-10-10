#include <stdio.h>
#include <iostream>
#include <algorithm>

#define USER_INPUT

using namespace std;

void bubbleSort(int array[], int array_size) {
    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (array_size - 1); j > i; j--) {
            if (array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}

void showArray(int* pArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << pArr[i] << ",";
    }
    cout << endl;
}

int main(void) {

    int size = 0;
    int* pArray = NULL;

    srand((unsigned int)time(NULL));

    cout << "バブルソートを行います。" << endl;
#ifdef USER_INPUT
    cout << "値の個数を入力してください。" << endl;
    cin >> size;

    // 配列を確保する
    pArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        pArray[i] = rand() % 99 + 1;
    }

#else
    int array[10] = { 3, 6, 1, 7, 2, 0, 4, 5, 9, 8 };
    pArray = array;
    size = sizeof(array) / sizeof(array[0]);
#endif


    showArray(pArray, size);

    bubbleSort(pArray, size);
    cout << "↓" << endl;

    showArray(pArray, size);

    return 0;
}
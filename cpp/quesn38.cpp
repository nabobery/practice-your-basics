//implementing counting sort
//Amirul Hasan
//CS20B1082

#include <iostream>
using namespace std;

void countSort(int array[], int size)
{
    int sort[size];
    int max = array[0];
    int min = array[0];

    // Finding max and min
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }

    int range = max - min + 1;
    int count[range];
    for (int i = 0; i <= range; ++i)
    {
        count[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < size; i++)
    {
        count[array[i] - min]++;
    }

    // Store the cummulative count of each array
    for (int i = 1; i <= range; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < size; i++)
    {
        sort[--(count[array[i] - min])] = array[i];
    }

    // Copy the sorted elements into original array
    for (int i = 0; i < size; i++)
    {
        array[i] = sort[i];
    }
}

int main()
{
    int array[] = {5, -2, 1, 8, -3, 3, -2, 6, 3};
    int n = sizeof(array) / sizeof(array[0]);
    countSort(array, n);
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}
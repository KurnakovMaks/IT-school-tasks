#include <chrono>
#include "Complex.h"

using namespace std;

// implementation of Sort function
template <typename T>
void Sort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];

                swapped = true;
            }
        if (!swapped) break;
    }
}

int main()
{
    // create an array of integers with 10 elements
    int arr[] = { 3, 6, 1, 8, 2, 9, 4, 7, 10, 5 }; int size = sizeof(arr) / sizeof(int);
    //double arr[] = { 3.2, 6.5, 1.1, 8.7, 2.0, 9.4, 4.6, 7.9, 10.0, 5.3 }; int size = sizeof(arr) / sizeof(double);
    

    // output the array before sorting
    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) { cout << arr[i] << " "; }

    cout << endl;

    auto start = chrono::steady_clock::now();

    // call Sort to sort the array
    Sort(arr, size);

    auto stop = chrono::steady_clock::now();
    auto dt = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

    // output the sorted array
    cout << "After sorting: ";
    for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
    cout << endl;


    cout << "Time sorting: " << dt << " nanoseconds" << endl;

    return 0;
}

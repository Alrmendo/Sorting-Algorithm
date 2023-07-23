#include <iostream>
#define MAX 100

using namespace std;

void Binary_insertionSort(int a[], int n)
{
    int v, left, right, m;
    for (int i = 2; i <= n; ++i)
    {
        v = a[i];
        left = 1;
        right = i - 1;

        // Binary search to find the correct position for v
        while (left <= right)
        {
            m = (left + right) / 2;
            if (v < a[m])
            {
                right = m - 1;
            }
            else
            {
                left = m + 1;
            }
        }

        // Shift elements to make space for v
        for (int j = i - 1; j >= left; --j)
        {
            a[j + 1] = a[j];
        }

        // Insert v at the correct position
        a[left] = v;
    }
}

void inputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void outputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
}

int main ()
{
    int n;
    int a[MAX];
    cout << "Enter the number of element: ";
    cin >> n;
    inputArr(a, n);
    Binary_insertionSort(a,n);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}

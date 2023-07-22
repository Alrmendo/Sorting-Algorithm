#include <iostream>
#define MAX 100

using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = v;
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
    insertionSort(a,n);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}

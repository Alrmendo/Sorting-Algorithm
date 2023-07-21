#include <iostream>
#define MAX 100

using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int minIdx = i;
        int minVal = a[i];
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[j] < minVal)
            {
                minIdx = j;
                minVal = a[j];
            }
        }
        swap(a[minIdx], a[i]);
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
    selectionSort(a,n);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}

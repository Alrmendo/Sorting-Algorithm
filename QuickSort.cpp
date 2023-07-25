#include <iostream>
#define MAX 100

using namespace std;

int Partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; ++j)
    {
        if(a[j] < pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int s = Partition(a, low, high);
        QuickSort(a, low, s - 1);
        QuickSort(a, s + 1, high);
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
    int low = 0;
    int high = n - 1;
    inputArr(a, n);
    QuickSort(a, low, high);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}
#include <iostream>
#define MAX 100

using namespace std;

void bubbleSort(int a[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        for (int j = n; j >= i; --j)
        {
            if(a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
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
    bubbleSort(a,n);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}

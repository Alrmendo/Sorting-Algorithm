#include <iostream>
#define MAX 100

using namespace std;

void shakerSort(int a[], int n)
{
    int left = 2;
    int right = n;
    int k = n;
    do
    {
        for (int j = right; j >= left; --j)
        {
            if (a[j - 1] > a[j])
            {
                swap (a[j - 1], a[j]);
                k = j;
            }
        }
        left = k + 1;
        for (int j = left; j <= right; ++j)
        {
            if (a[j - 1] > a[j])
            {
                swap()
                k = j;
            }
        }
        right = k - 1;
    } while (left <= right);
    
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

//main 
int main ()
{
    int n;
    int a[MAX];
    cout << "Enter the number of element: ";
    cin >> n;
    inputArr(a, n);
    shakerSort(a, n);
    cout << "Array after sorted: ";
    outputArr(a,n);
    return 0;
}

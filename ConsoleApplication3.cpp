#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A[5] = { 2,7,9,10,3 };
    int min = 0, max = 0;

    for (int i = 1; i < 5; i++) {

        if (A[i] < A[min]) min = i;
        if (A[i] > A[max]) max = i;
    }
    cout << "Min=" << A[min] << endl;
    cout << "Max=" << A[max] << endl;


    int t = 0;
    int g = 4;
    int h;
    h = A[min];
    A[min] = A[max];
    A[max] = h;
    for (int i = 0; i < 5; i++)
        cout << setw(4) << A[i];

    cout << endl;
    const int st = 3;
    const int r = 3;
    int b[r][st] = { {-1,-5,-10},{-7,-2,-8},{0,2,10} };
    int sum, c;
    for (int i = 0; i < r; i++)
    {
        sum = 0;
        c = 0;
        for (int j = 0; j < st; j++)
        {
            sum += b[i][j];
            if (b[i][j] < 0) c++;
            cout << setw(5) << b[i][j];
        }
        cout << setw(15) << "Sum=" << sum << setw(15) << "Count=" << c << endl;
    }
    cout << "+++++++++++++++++++++++++++++++++++++++++++" << endl;
    for (int j = 0; j < st; j++)
    {
        sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += b[i][j];
            cout << setw(5) << b[i][j];
        }
        cout << setw(15) << "Sum=" << sum << endl;
    }
    cout << "+++++++++++++++++++++++++++++++++++++++++++" << endl;

    h = b[0][1];
    b[0][1] = b[2][1];
    b[2][1] = h;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < st; j++)
        {
            cout << setw(5) << b[i][j];
        }
        cout << endl;
    }


}
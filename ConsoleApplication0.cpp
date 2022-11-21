#include <iostream>
#include <iomanip>
using namespace std;


void Sum()
{
    int sum = 0; float x, y;

    cout << "Enter x:\n";
    cin >> x;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    y = tan(sum + 2 * x);

    cout << "\tY = " << setprecision(4) << y;
}

void Mult()
{
    int x;  double z, mul = 1;

    cout << "Enter x:\n";
    cin >> x;

    for (int k = 1; k <= 10; k++)
    {
        mul *= pow(k, 3);
    }

    z = pow(x, 5) + mul;

    cout << "\tZ = " << setprecision(4) << z;
}

int main()
{
    
 //////////////////////////////////////// ЗАВДАННЯ 1
   
    //Sum();

 //////////////////////////////////////// ЗАВДАННЯ 2

    Mult();

    for (int i = 0; i < 10; i++)
        cout << i << endl;

    return 0;
}


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int k, i, c = 0;
    cout << "ENTER BINARY NUMBER YOU WANT TO CONVERT TO DECIMAL NUMBER : " << endl;
    cin >> i;

    while (i != 0)
    {
        for (int j = 0; j <= 64; j++)
        {
            k = i % 10;
            c = k * pow(2, j) + c;
            i /= 10;
        }
    }

    cout << c;

    return 0;
}

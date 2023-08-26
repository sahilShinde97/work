#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Values: ";
    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            
            if ((i == 1 || i == row) || (j == 1 || j == col))
            {
                cout << " *";
                continue;
            }
            cout << " 1";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int rows, i, j;

    cin>>rows;

    for (i = rows; i >= 1; i--) {
        for (j = 0; j < rows - i; j++) {
            cout << "   ";
        }

        for (int j = (2 - i); j < (2 - i) + (2 * i - 1); j++) {
            cout << " * ";
        }

        cout << "\n";
    }


    return 0;
}
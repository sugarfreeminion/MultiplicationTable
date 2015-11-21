#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // challenge wants a 12x12 matrix
    const unsigned int MAX = 12;

    for(unsigned int i = 1; i <= MAX; ++i)
    {
        for(unsigned int j = 1; j <= MAX; ++j)
        {
            printf("%4d", i*j);
//            cout << i*j << "    ";
        }

        cout << endl;
    }

    return 0;
}

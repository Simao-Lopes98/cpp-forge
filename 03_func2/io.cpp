#include <iostream>

using namespace std;

int readNumber (void)
{
    int input = 0;
    cout << "Input a number\n";
    cin >> input;
    return input;
}

void displayAns (int ans)
{
    printf ("Answer is: %d\n", ans);
}

#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void swapNumbers(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x = 5, y = 10;

    cout << "Before swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call the swap function
    swapNumbers(&x, &y);

    cout << "After swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
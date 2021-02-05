#include <iostream>

using namespace std;

int byValue(int var1)
{
    int modify = 10;
    var1 += modify;
    return 0;
}

int main()
{
    int var1=20;
    cout << "Before: " << var1 << "\n";
    byValue(var1);
    cout << "After: " << var1 << "\n";
}
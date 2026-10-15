#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Age for the Vote: ";
    cin >> age;
    cout << ((age >= 18) ? "You can vate. " : "Sorry can not vote.");
    return 0;
}
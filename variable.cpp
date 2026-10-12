// Data types in C++
// The datatype specifies the size and type of information the variable will store.

#include <iostream>
using namespace std;

int main()
{
    int anuj_age = 25;
    float anuj_height = 5.9;
    {
        int anuj_age = 30; // local variable
        cout << anuj_age << endl;
    }
    char anuj_initial = 'A';
    string anuj_name = "Anuj";
    cout << anuj_age << endl;
    cout << anuj_height << endl;
    cout << anuj_initial << endl;
    cout << anuj_name << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int budget, s = 10, t = 6, l = 100, w = 2, rest_amount = 0;
    cout << "Enter your budget:: ";
    cin >> budget;
    cout << "Your budget is = " << budget << endl;
    cout << "Please select car options" << endl;
    cout << "A. Scorpio = 10" << endl
         << "B. Thar = 6" << endl
         << "C. Lamborghini = 100" << endl
         << "D. WagNR = 2" << endl;
    char select_car;
    cin >> select_car;
    switch (select_car)
    {
    case 'A':
        if (budget >= select_car)
        {
            cout << "Congratulation you have buy the Scorpio" << endl;
            rest_amount = budget - s;
            cout << "You have still amount = " << rest_amount;
        }
        else
        {
            cout << "Sorry don't have sufficient amount." << endl;
        }
        break;

    default:
        cout << "Next time better luck" << endl;
        break;
    }
    return 0;
}
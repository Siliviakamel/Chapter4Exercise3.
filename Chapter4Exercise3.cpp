#include <iostream>
using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter a month (1-12): ";
    cin >> month;
    if (!cin || month < 1 || month > 12)
    {
        cout << "Invalid month. Must be between 1 and 12.";
        return 1;
    }

    int daysInMonth[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cout << "Enter a day: ";
    cin >> day;
    if (!cin || day < 1 || day > daysInMonth[month - 1])
    {
        cout << "Invalid day for that month. Must be between 1 and "
            << daysInMonth[month - 1] << ".";
        return 1;
    }

    cout << "Enter a two-digit year (0-99): ";
    cin >> year;
    if (!cin || year < 0 || year > 99)
    {
        cout << "Invalid year. Must be a two-digit year (0-99).";
        return 1;
    }

    if (month * day == year)
        cout << "The date " << month << "/" << day << "/" << year
        << " is magic!";
    else
        cout << "The date " << month << "/" << day << "/" << year
        << " is not magic.";

    return 0;
}
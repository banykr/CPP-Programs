#include <iostream>

using namespace std;

// error/response code

// 1 - valid date
// 0 - unexpected error
// 1000 - year out of range
// 4-not a leap year
//29-is a leap year
int year_in_range(int yyyy)
{
    if (yyyy >= 1000 && yyyy <= 9999)
    {
        return (1);
    }
    return (1000);
}

int is_leap(int yyyy)
{
    if (year_in_range(yyyy) == 1)
    {
        if (((yyyy % 4 == 0) && yyyy % 100 != 0) || yyyy % 400 == 0)
        {
            return (29);
        }
        return (4);
    }
    return (0);
}

int isvalid_date(int dd, int mm, int yyyy)
{
    if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && (dd >= 1 && dd <= 31))
    {
        return (year_in_range(yyyy));
    }

    else if (mm == 2)
    {
        if (dd <= 28 && dd >= 1)
        {
            return (1);
        }
        else if (dd <= 29 && dd >= 1)
        {
            return (is_leap(yyyy));
        }
    }

    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        return (year_in_range(yyyy));
    }

    return (0);
}

int main()
{
    system("clear");
    int dd, mm, yyyy;
    cout << "\nPlease Enter  \n\nDate (dd) : ";
    cin >> dd;
    cout << "\nMonth (mm) : ";
    cin >> mm;
    cout << "\nYear (yyyy) : ";
    cin >> yyyy;

    switch (isvalid_date(dd, mm, yyyy))
    {
    case 1:
        cout << "\n"
             << dd << "/" << mm << "/" << yyyy << " is a Valid Date :)\n\n";
        break;

    case 29:
        cout << "\n"
             << dd << "/" << mm << "/" << yyyy << " is a Valid Date (Leap Year) :)\n\n";
        break;

    case 4:
        cout << "\n"
             << dd << "/" << mm << "/" << yyyy << " is a Invalid Date (Not a Leap Year) :( \n\n";
        break;

    case 1000:
        cout << "\n"
             << dd << "/" << mm << "/" << yyyy << " is a Invalid Date (Year out of Range [1000 - 9999]) :(\n\n";
        break;

    default:
        cout << "\n"
             << dd << "/" << mm << "/" << yyyy << " is a Invalid Date :(\n\n";
        break;
    }

    return (0);
}

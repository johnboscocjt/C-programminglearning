#include <iostream>
using namespace std;

string getdayOfWeek(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Teusday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    }
    return dayName;
}


int main(){

    cout << getdayOfWeek(3);
    return 3;

}
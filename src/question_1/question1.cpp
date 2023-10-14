#include "question1.h"

using std::cout;
using std::cin;

bool test_config()
{
    char keep_going;
    cout<<"Would you like to convert some temperatures to fahrenheit? (y/n): ";
    cin>>keep_going;

    while (toupper(keep_going) == 'Y')
    {
        double celsius;
        cout<<"Enter the temperature in celsius: ";
        cin>>celsius;
        cout<<get_fahrenheit(celsius)<<" degrees fahrenheit.\n";
        cout<<"Do you want to keep going? (y/n): ";
        cin>>keep_going;
    }
    return true;
}

double get_fahrenheit(double c)
{
    double F = (c * 9/5) + 32; 
    return F;
}

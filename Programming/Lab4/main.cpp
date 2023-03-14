#include <iostream>
#include "Datetime.h"
#include "Datetime_m.h"

using namespace std;

int main()
{
    Datetime datetime;
    DatetimeMsecond datetimemsecond;
    Datetime* dt = &datetimemsecond;
    dt->PrintDate();
    dt = &datetime;
    dt->PrintDate();
}

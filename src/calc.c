#include<stdarg.h>
#include<calc.h>


double add(int num,...)
{
    double sum = 0;
    va_list valist;
    va_start(valist, num);

    for (int i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }

    va_end(valist);
    

    return sum;
}
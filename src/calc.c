#include<stdarg.h>
#include<calc.h>


double add(int num, ...)
{
    double sum = 0;
    double currentRestult;
    va_list valist;
    va_start(valist, num);

    for (int i = 0; i < num; i++)
    {
        currentRestult = va_arg(valist, double);
        printf("current result= %f\n", currentRestult);
        sum += currentRestult;
        printf("Sum's current value: %f\n\n", sum);
    }

    va_end(valist);
    

    return sum;
}
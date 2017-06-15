#include <stdio.h>

/*  打印摄氏温度-华氏温度对照表     */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -17.8;
    upper = 148.9;
    step = 11.1;

    celsius = upper;
    while (celsius <= upper ) {
        fahr = (celsius * 9.0)/5.0 + 32.0;
        printf("%.1f %.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

#include <stdio.h>

#define    LOWER   0       /*  表示下限    */
#define    UPPER   300     /*  表示上限    */
#define    STEP    20      /*  步长        */

/*  打印华氏温度-摄氏温度对照表     */

main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

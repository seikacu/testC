#include <stdio.h>

#define LOWER   0    /* нижняя граница температур в таблице */
#define UPPER   300  /* верхняя граница */
#define STEP    20   /* величина шага */

/* вывод таблицы температур по Фаренгейту и Цельсию
    для fahr = 0, 20, ..., 300 */
/* (°F − 32) × 5/9 = °C*/

main()
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

//    float fahr, celcius;
//    int lower, upper, step;

//    lower = 0; /* нижняя граница температур в таблице */
//    upper = 150; /* верхняя граница */
//    step = 1; /* величина шага */

//    celcius = lower;
//    printf("fahr || cel\n");
//    while (celcius <= upper) {
//        fahr = (celcius*9.0/5.0) + 32.0;
//        printf("%4.0f %6.1f\n", fahr, celcius);
//        celcius += step;
//    }
}

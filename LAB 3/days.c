#include<stdio.h>
int main()
{
    int days, year, month, week, day, x, y;
    printf("Enter your days:");
    scanf("%d", &days);
    year=days/365;
    x=days%365;
    month=x/30;
    y=x%30;
    week=y/7;
    day=y%7;
    printf("year: %d \n month: %d\n week: %d\n day: %d\n", year, month, week, day);
    return 0;


}

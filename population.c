#include <stdio.h>

int calculateYears(int start);

int main(void)
{
    int start;
    int end;
    int years = 0;

    printf("Start size: ");
    scanf("%d", &start);

    const int initalStart = start;

    int j = printf("End size: ");
    scanf("%d", &end);
    
    do 
    {
       start = calculateYears(start);
       years++;
    }
    while(start < end);

    printf("Years %i\n", years);


}

int calculateYears(int start)
{
    int s = start;
    int num = s + (s /3) - (s / 4);

    return num;
}

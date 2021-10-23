#include<stdio.h>

int main ()
{
    int temp;
    
    printf("\n Enter the temp:");
    scanf("%d", &temp);
    
    if (temp <1)
    {
    printf("\n Freezing Weather \n");
    }
    else if (temp >= 0 && temp <= 10)
    {
    printf("\n Very Cold Weather \n");
    }
    else if (temp >= 11 && temp <= 20)
    {
    printf("\n Cold Weather \n");
    }
    else if (temp >= 21 && temp <= 30)
    {
    printf("\n Normal in Temperature \n");
    }
    else if (temp >= 31 && temp <= 40)
    {
    printf("\n It's Hot");
    }
    else
    {
    printf("\n It's Very Hot");
    }
    return 0;
    
}
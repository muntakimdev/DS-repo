#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    fgets(array,sizeof(array),stdin);
    for(int i =0; i<strlen(array);i++)
    {
        if(array[i]==' ')
        {
            for(int j = i; j<strlen(array); j++)
            {
                array[j]=array[j+1];
            }
        }
    }
    for(int i = 0; i<strlen(array);i++)
    {
        printf("%c",array[i]);
    }
}
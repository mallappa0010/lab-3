/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
void printeven(int, int);
int main()
{
    int m, i, n;
    printf("Enter the of numbers \n");
    scanf("%d %d", &m, &n);
    printeven(m, n);
    getch();
    return 0;
}
void printeven(int x, int y)
{
    int i;
    i = x;
    printf("The even numbers ranging from %d to %d are : ", x, y);
    while (i <= y)
    {
        if (i % 2 == 0)
        {
            printf("%d , ", i);
        }
        i++;
    }
    getch();
    return;
}
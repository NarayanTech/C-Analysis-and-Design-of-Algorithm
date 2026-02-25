#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;
    printf("Enter the Size of the matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the first matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
    printf("Enter the elements of Second Matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }

 }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
printf("The sum of two matrix is:\n");
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
     getch();
    }

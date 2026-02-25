#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,temp,min,n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    printf("Enter the Elements of Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Array Before Sorting
    printf("Array Before Sorting: \n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n ", a[i]);
    }
    //Selection Sort
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j ;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    //Array After Sorting
    printf("\nArray After Sorting: \n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);

    }
    getch();
}
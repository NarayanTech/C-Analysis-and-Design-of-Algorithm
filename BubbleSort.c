#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,n,temp,a[20];
  
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter the elemets of Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // Array Before Sorting
    printf("Array Before Sorting:\t");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    // Bubble Sort Logic
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (a[j] > a[ j+1 ])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //Array After Swap
    printf("Array After Swapping:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
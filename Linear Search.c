#include<conio.h>
#include<stdio.h>

void main()
{
    int a[10],i,n,key;
    printf("Enter the Size  of array");
    scanf("%d",&n);
    printf("Enter the Elemenmts of an Array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the key element to Search");
    scanf("%d",&key);
  //Linear Search Logic
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            printf("Element %d found at index %d",key,i);
            break;
        }
    }
    if(i==n)
        {
              printf("Element Not found");
        }
  
    getch();
}
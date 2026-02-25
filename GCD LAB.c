#include<conio.h>
#include<stdio.h>
#include<time.h>
int findgcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return findgcd(b,a%b);
}

void main()
{
    int n1,n2,gcd;
    clock_t Start,End;
    double time_taken;
    Start = clock();
    printf("Enter the value of n1 ");
    scanf("%d",&n1);
    printf("Enter the value of n2 ");
    scanf("%d",&n2);
    gcd = findgcd(n1,n2);
    printf("The GCD  of %d and %d is %d\n",n1,n2,gcd);
    End = clock();
    time_taken = (double)(End-Start)/CLOCKS_PER_SEC;
    printf("Time_Taken to Exicute the Program is %f Seconds",time_taken);
    getch();
}
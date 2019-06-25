#include<stdio.h>

static  long counter=1;
void Hanoi(int n,char a,char b,char c);
void Move(int n,char a,char b);
int main()
{
    int n;
    printf("Input the number of disks:");
    scanf("%d",&n);
    printf("Steps of moving %d disks from A to B by means of C:\n",n);
    Hanoi(n,'A','B','C');
    return 0;
}

void Hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        Move(n,a,b);
    }
    else
    {
        Hanoi(n-1,a,c,b);
        Move(n,a,b);
        Hanoi(n-1,c,b,a);// the leave out(n-1disks) just need to be moved from the first value to the second
    }
}

void Move(int n,char a,char b)
{
    printf("Step[%ld]: Move disk(%d) : from %c to %c\n",counter,n,a,b);
    counter++;
}

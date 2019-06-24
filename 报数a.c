#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static char sign;
int Play(int *pCounter,int (*p1)(int *pCounter),int (*P2)(int *pCounter));
int ComCount(int *pCounter);
int UserCount(int *pCounter);
int main()
{
    srand(time(NULL));

    int iCounter=0;
    char f=NULL;
    int flag=rand()%2;
    if(flag==1)
    {
        f=Play(&iCounter,ComCount,UserCount);
    }
    else
    {
        f=Play(&iCounter,UserCount,ComCount);
    }
    if(f=='C')
    {
        printf("\nComputer win!\n");
    }
    else
    {
        printf("\nYou win!\n");
    }
    return 0;
}

int Play(int *pCounter,int (*P1)(int (*pCounter)),int (*P2)(int (*pCounter)))
{



    while(1)
    {
        P1(pCounter);

        if(*pCounter>=30)
            return sign;

        P2(pCounter);

        if(*pCounter>=30)
            return sign;
    }
}

int UserCount(int *pCounter)
{
    sign='U';
    int num=0;
    //int U_Flag=100;
S:
    ;
    //U_Flag=Input();
     printf("How many numbers do you want to count? ");
     num=(getchar()-'0');
     while(getchar()!='\n');
    switch(num)
    {
    case 1:
        *pCounter=*pCounter+1;
        printf("User:%3d\n",*pCounter);
        break;
    case 2:
        *pCounter=*pCounter+2;
        printf("User:%3d%3d\n",*pCounter-1,*pCounter);
        break;
    default:
        printf("Invalid! \n");

        goto S;
    }
    return 0;
}

int ComCount(int *pCounter)
{
    sign='C';
    int C_Flag=0;
    int term;
    C_Flag=30-*pCounter;
    term=C_Flag%3;

    if(term==1)
    {
        *pCounter=*pCounter+1;
    }
    else if(term==2)
    {
        *pCounter=*pCounter+2;
    }
    else
    {
        term=rand()%2+1;
        (*pCounter)=(*pCounter)+term;
    }
    if(term==1)
    {
        printf("Com:%3d\n",*pCounter);
    }
    else
    {
        printf("Com:%3d%3d\n",*pCounter-1,*pCounter);
    }
    return 0;
}

//int Input(/*int *pNum1,int *pNum2*/)
//{
    //int Num1=0,Num2=0;
   // int counter=0;
    //int *pNum1=&Num1,*pNum2=&Num2;

    //int *pa=NULL;       //建立中间指针以便切换变量
    //int ans=0;
    //char c;

    //pa=pNum1;
   /* printf("User: ");
    while(1)
    {
        c=getchar();
        //pa=pNum1;
        if(c>='0'&&c<='9')
        {
            /* ans=c-'0';
             *pa=(*pa)*10+ans;*/
     //   }

        //检测到分隔符（此处为空格）则将下一个变量的指针赋给中间指针，同时计数器+1
      /*  else if(c==32)
        {
            counter++;
            if(counter!=1)
            {
                return -1;
                break;
            }
            // pa=pNum2;
            continue;
        }
        //检测到回车则结束
        else if(c=='\n')
        {
            if(counter!=1&&counter!=2)
            {
                return -2;
                break;
            }
            return counter;
        }
        else        //此处为非法字符的处理
        {
            return -3;
            break;
            /*printf("Invalid!\n");
            while(getchar()!='\n');
            return main();*/
     //   }
  //  }
    /* printf("num=%d\n",num);
     return main();*/
//}


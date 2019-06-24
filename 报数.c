#include<stdio.h>
#include<stdlib.h>


/**************************************************************
**Input
**此函数用于实现无感知输入1~多个整数（其中以指定的分隔符分断）
**输入参数：*pNum1,*pNum2（均为指针）
**输出：counter
**counter:已输入的数据的个数
**返回值为-1：第一个数没有输入
**返回值为-2：提前回车或输入的数据个数多于最大允许数
**返回值为-3：输入了非法字符
**作者：Jason Yan
**日期：2019年5月20日
**版本：V1.0
*****************************************************************/
int Input(int *pNum1,int *pNum2)
{
    //int Num1=0,Num2=0;
    int counter=0;
    //int *pNum1=&Num1,*pNum2=&Num2;

    int *pa=NULL;       //建立中间指针以便切换变量
    int ans=0;
    char c;

    pa=pNum1;

    while(1)
    {
        c=getchar();
        //pa=pNum1;
        if(c>='0'&&c<='9')
        {
            ans=c-'0';
            *pa=(*pa)*10+ans;
        }

        //检测到分隔符（此处为空格）则将下一个变量的指针赋给中间指针，同时计数器+1
        else if(c==32)
        {
            counter++;
            if(counter!=1)
            {
                return -1;
                break;
            }
            pa=pNum2;
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
        }
    }
   /* printf("num=%d\n",num);
    return main();*/
}

int main()
{
    int Val1=0,Val2=0;
    //int *pVal1=&Val1,*pVal2=&Val2;
    int flag;
    printf("Please input, if you want to input two nums, please divide them by (Space)\n");
    flag=Input(&Val1,&Val2);
      /*  switch(flag)
    {
        case
    }*/
    printf("n1=%d,n2=%d\n",Val1,Val2);
    return main();

}

#include<stdio.h>
#include<stdlib.h>


/**************************************************************
**Input
**�˺�������ʵ���޸�֪����1~���������������ָ���ķָ����ֶϣ�
**���������*pNum1,*pNum2����Ϊָ�룩
**�����counter
**counter:����������ݵĸ���
**����ֵΪ-1����һ����û������
**����ֵΪ-2����ǰ�س�����������ݸ����������������
**����ֵΪ-3�������˷Ƿ��ַ�
**���ߣ�Jason Yan
**���ڣ�2019��5��20��
**�汾��V1.0
*****************************************************************/
int Input(int *pNum1,int *pNum2)
{
    //int Num1=0,Num2=0;
    int counter=0;
    //int *pNum1=&Num1,*pNum2=&Num2;

    int *pa=NULL;       //�����м�ָ���Ա��л�����
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

        //��⵽�ָ������˴�Ϊ�ո�����һ��������ָ�븳���м�ָ�룬ͬʱ������+1
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
        //��⵽�س������
        else if(c=='\n')
        {
            if(counter!=1&&counter!=2)
            {
                return -2;
                break;
            }
            return counter;
        }
        else        //�˴�Ϊ�Ƿ��ַ��Ĵ���
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

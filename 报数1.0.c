#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static int NowCount=0;
static int counter=0;

void ComputerCount();
void PlayerCount();

int main()
{
	srand(time(NULL));

	int WhoPlay=rand()%2;
	if(WhoPlay==1)
	{
		while(1)
		{
			NowCount=1;
			ComputerCount();

			if(counter>=30)
			{
				break;
			}

			NowCount=2;
			PlayerCount();

			if(counter>=30)
			{
				break;
			}
		}
	}
	else
	{
		while(1)
		{
			NowCount=2;
			PlayerCount();

			if(counter>=30)
			{
				break;
			}

			NowCount=1;
			ComputerCount();

			if(counter>=30)
			{
				break;
			}
		}
	}
	if(NowCount==1)
	{
		printf("\nComputer win!\n");
	}
	else
	{
		printf("\nYou win!\n");
	}
	return 0;
}

void PlayerCount()
{
	int num=0;
	int flag=0;

	do
	{
		printf("How many number(s) would you like to count?\t:");
		num=(getchar()-'0');
		while(getchar()!='\n');
		switch(num)
		{
		case 1:
			counter++;
			printf("You count:%3d\n",counter);
			break;
		case 2:
			counter=counter+2;
			printf("You count:%3d%3d\n",counter-1,counter);
			break;
		default:
			printf("Invalid input!\n");
			flag=1;
		}
    }while(flag);
}

void ComputerCount()
{
	int flag=0;
	flag=(30-counter)%3;
	switch(flag)
	{
	case 1:
		counter++;
		break;
	case 2:
		counter=counter+2;
		break;
	default :
		flag=rand()%2+1;
		counter=counter+flag;
		break;
	}
	if(flag==1)
	{
		printf("Computer count:%3d\n",counter);
	}
	else
	{
		printf("Computer count:%3d%3d\n",counter-1,counter);
	}
}

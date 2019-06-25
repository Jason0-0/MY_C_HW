#include<stdio.h>
int main()
{
	int score,mark;
	printf("Input score: ");
	scanf("%d",&score);
	mark=score<0||score>100?-1:score/10;
	if(mark>=9)
		printf("%d--A",score);
	else if(mark>=8)
		printf("%d--B",score);
	else if(mark>=7)
		printf("%d--C",score);
	else if(mark>=6)
		printf("%d--D",score);
	else if(mark>=0)
		printf("%d--E",score);
	else
		printf("Invalid score!");

	return main();
}

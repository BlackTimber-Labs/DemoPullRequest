#include <stdio.h>
#include <conio.h>
int main()
{
	int m,s;
	printf("Enter the Number of the month:\n");
	scanf("%d",&m);
	if(m==1)
	s=31;
	else if(m==2)
	s=31+28;
	else if(m==3)
	s=31+28+31;
	else if(m==4)
	s=31+28+31+30;
	else if(m==5)
	s=31+28+31+30+31;
	else if(m==6)
	s=31+28+31+30+31+30;
	else if(m==7)
	s=31+28+31+30+31+30+31;
	else if(m==8)
	s=31+28+31+30+31+30+31+31;
	else if(m==9)
	s=31+28+31+30+31+30+31+31+30;
	else if(m==10)
	s=31+28+31+30+31+30+31+31+30+31;
	else if(m==11)
	s=31+28+31+30+31+30+31+31+30+31+30;
	else if(m==12)
	s=31+28+31+30+31+30+31+31+30+31+30+31;
	else
	{
		printf("\n Invalid number entered\n");
		return 0;
	}
	printf("\n The sum is if it is not a leap year: %d \n The sum is if it is a leap year: %d ",s,s+1);
	return 0;
}

#include <stdio.h>
#define DAYS 365
int main(void)
{
	int age,days;
	age = 21;
	days =DAYS*age;
	/*假设为21岁，后面将年转为天数*/
	printf("It is %d days\n",days);
	return 0;
}
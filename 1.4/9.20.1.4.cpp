#include<stdio.h>
int jolly(void);
int deny(void);
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
int jolly(void)
{
	printf("For he's a jolly good follow!");
	return 0;
}
int deny(void)
{
	printf("Which nobody can deny!");
	return 0;
}
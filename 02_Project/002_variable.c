#include <stdio.h>
int main() 
{
	int price = 0;
	const int AMOUNT = 100;
	printf("��������");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("����%d", change);
	return 0;
}

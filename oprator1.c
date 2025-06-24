//wap to use all arithmetic oprators and use value which is enterd by user and print it
#include<Stdio.h>
int main()
{
	int a,b;//oprands
	printf("\neneter the values of 2 oprands:");
	scanf("%d %d",&a,&b);
	int add,min,mul,div;
	add = a+b;// result of opration = oprand 1 +(oprator ( doctor)) oprand 2;
	printf("\naddition of 2 oprands is :%d",add);
	min=a-b;
	printf("\nsubtractition of 2 oprands is :%d",min);
	mul = a*b;
	printf("\nmultiplication of 2 oprands is :%d",mul);
	div = a/b;
	printf("\ndivision of 2 oprands is :%d",div);

	return 0;
}

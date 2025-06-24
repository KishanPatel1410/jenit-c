#include<stdio.h>
int main()
{
char c ;
int i;
float f;

printf("\nEnter Integer :");
scanf("%d", &i);
printf("\nEnter a character :");
scanf(" %c",&c);
printf("\nEnter Real number / Decimal number :");
scanf("%f", &f);
printf("\n\tCharacter = %c\n",c);
printf("\n\tInteger = %d\n", i);
printf("\n\tReal number/ Decimal number =%f\n", f);
}

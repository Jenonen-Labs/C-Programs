/***************************************************************/
//Arithmetic Operator Program
//Coded by Jenonen on 2025/01/31
/***************************************************************/
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
//jump_here:
	printf("Enter 4 integers (A,B,C,D) separated by spaces: \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	//if (a != 4)
	//{
	//	printf("A is not 4. Try again.\n");
	//	goto jump_here;
	//}
	//if (b != 3)
	//{
	//	printf("B is not 3. Try again.\n");
	//	goto jump_here;
	//}
	//if (c != 5)
	//{
	//	printf("C is not 5. Try again.\n");
	//	goto jump_here;
	//}
	//if (d != 7)
	//{
	//	printf("D is not 7. Try again.\n");
	//	goto jump_here;
	//}
	printf("The sum of B and C = %d.\n", b + c);
	printf("The product of A and D = %d.\n", a * d);
	printf("The integer quotient of A divided by C = %d.\n", a / c);
	printf("The integer remainder of C divided by D = %d.\n", c % d);
	printf("The product of A and C divided by the quantity sum of B and D = %d.\n", (a * c) / (b + d));
}
//'./a.out'

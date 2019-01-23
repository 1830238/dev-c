#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void suma()
{

}
*/
int suma(int num1 , int num2)
{
	 
	int suma = num1+num2;
	return suma;
}
int main(int argc, char** argv) {
	
	int a =0;
	int b =0;
	printf("Ingresa el valor 1\n");
	scanf("%d",&a);
	//printf("El valor de a es: %d",a);
	printf("Ingresa el valor 2\n");
	scanf("%d",&b);
	int res=suma(a,b);
	printf("\n**********\n");
	printf("\n La suma es: %d",res);
	//printf("%d",suma());
	return 0;
}

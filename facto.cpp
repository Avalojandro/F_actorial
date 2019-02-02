#include<stdio.h>
int main(){
int n,fac=1;
printf("Factorial de un numero:");
scanf("%d",&n);
if(n<=0 || n>69){
printf("\nIngrese un valor entre cero y 69 porfavor:");
}
else{
	if(n==0){
		printf("el factorial del numero es 1");
	}

	else
	{
		fac=1;
	for(int i=1;i<=n;i++)

	{
		fac=fac*i;
		}
	}
printf("El factorial del numero introducido es:%d",fac);
}
}




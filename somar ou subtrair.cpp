#include"stdio.h"
#include"math.h"
main()
{ float a,b;
char op;
printf("\n\n\n\t********************************");
printf("\n\t\tMenu de Operacoes");
printf("\n\t***************************");
printf("\n\n\tDigite -> 1 para somar");
printf("\n\n\tDigite -> 2 para subtrair");
printf("\n\n\t\t FACA SUA ESCOLHA NO MENU ACIMA:");
scanf("%s",&op);
if(op=='1')
{
	printf("\n\tVoce escolheu somar.");
	printf("\n\tDigite dois numeros:");
	scanf("%f%f",&a,&b);
	printf("\n\t %.2f + %.2f = %.2f", a, b, a + b);
}
else
printf("\n\n\t Opcao inexistente.");
}

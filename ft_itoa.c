#include<stdio.h>
#include<stdlib.h>

char *ft_itoa(int n)
{
	char *string;
	char negativo = 0;
	int digits = 0;
	int tmp = n;

	// caso del 0 es especial
	if(n == 0){
		string = malloc(2*sizeof(char));
		if(!string)
			return NULL;
		string[0] = '0';
		return string;
	}


	// Gestionar negativos
	if(tmp<0){
		negativo = '-';
		tmp *= -1;
	}

	// Contar numero de digitos
	while(tmp>0){
		tmp /= 10;
		digits++;	
	}

	// Alojar memoria + 1 para signo negativo
	if(negativo)
		digits++;
	string = malloc((digits+1)*sizeof(char));
	if(!string)
		return NULL;

	// Rellenar el string
	tmp = n;
	if(negativo){
		tmp *= -1;
		string[0] = '-';
	}

	while(tmp>0){
		string[digits-1] = (tmp % 10) + '0';
		tmp /= 10;	
		digits--;
	}


	return string;
}

void check_itoa(int n){
	printf("mi itoa: %s\n", ft_itoa(n));
	return;
}

/*
int main(){

	check_itoa(1);
	check_itoa(0);
	check_itoa(123);
	check_itoa(-1);
	check_itoa(+1);
	check_itoa(999999999);

	return 0;
}
*/

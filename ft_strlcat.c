#include<stdio.h>
#include"ft_lib.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	// Necesario para valor de retorno antes de modificar
	// el valor de dst.
	size_t initial_len_dst = ft_strlen(dst);
	size_t initial_len_src = ft_strlen(src);
	size_t final_len = initial_len_dst + initial_len_src;

	// CREO QUE ESTO LO ATRAPA EL CODIGO DE ABAJO!
	// (si falla descomentar)
	//
	// Si size es 0, entonces dst no se sabe que es, por lo 
	// que no debemos escribir NADA!
	//	if(size <= 0)
	//	return initial_len_src;

	// ¡Cuando size < longitud de dest significa, que no vamos
	// a concatenar nada! Se va a quedar solo dest.
	if(size < initial_len_dst)
		return size + initial_len_src;

	size_t i = 0;
	// Recorrer e incrementar el idx con dst.
	// No debemos hacer nada más
	while(i<size-1 && dst[i]){
		i++;
	}

	
	int j = 0;
	// Ahora tenemos el indice i para llevar el tracking en dst
	// y comprobar que nos pasamos del size - 1 (para el '\0')
	// Por otro lado el j simplemente lo usamos para iterar src 
	while(i<size-1 && src[j]){
		dst[i] = src[j];
		j++;
		i++;
	}


	dst[i] = '\0';

	return final_len;
}

int main()
{
	char str1[] = "Hola";
	char str2[] = " Mundo!";


	printf("ret: %lu cat:%s\n", ft_strlcat(str1,str2,0), str1);

	return 0;
}

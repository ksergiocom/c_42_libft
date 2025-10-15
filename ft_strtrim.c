/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:26:37 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 15:22:43 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		new_length;
	char	*trimmed;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	new_length = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_length = end - start + 1;
	trimmed = malloc((new_length + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (start + i <= end)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/*
int main(){

	char *original = "azaabbbazacczaaaaa";
	char *trimmed = ft_strtrim(original, "az");

	printf("Original: %s\n", original);
	printf("Trimmed: %s\n", trimmed);

	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:57:46 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/03 16:11:13 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	int 	res;
	res = ft_recursive_factorial(5);
	printf("%d", res);
	putchar('\n');
	return(0);
}*/

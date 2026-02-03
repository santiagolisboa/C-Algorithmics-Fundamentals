/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:51:48 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/03 16:09:56 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
int	main(void)
{
	int	res;

	res = ft_fibonacci(5);
	printf("%d", res);
	putchar('\n');
	return(0);
}*/

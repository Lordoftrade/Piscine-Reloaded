/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:54:47 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/10 16:55:52 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main()
{
    int a = 5;
    int b = 10;

    printf("%d, %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d, %d", a, b);

    return(0);
}*/

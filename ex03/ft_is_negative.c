/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemahlae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:04:48 by lemahlae          #+#    #+#             */
/*   Updated: 2020/07/09 17:20:06 by lemahlae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	while (n >= -2147483648 && n <= 2147483647)
	{
		if (n < 0)
			ft_putchar('N');
		else if (n >= 0 || n == '\0')
			ft_putchar('P');
		else return;
		break;
	}
}

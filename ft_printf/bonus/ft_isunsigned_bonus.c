/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isunsigned_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:14:38 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/05/20 16:16:01 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isunsigned(char c)
{
	if (c == 'u' || c == 'x' || c == 'p' || c == 'X')
		return (1);
	return (0);
}
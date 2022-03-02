/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:20:53 by ckala             #+#    #+#             */
/*   Updated: 2022/03/02 16:24:41 by bocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


int	ft_isalnum(int c)
{
	int ch = c;
	if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z')
	    || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	return (0);
}

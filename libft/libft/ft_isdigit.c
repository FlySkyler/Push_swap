/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:51:28 by antbonin          #+#    #+#             */
/*   Updated: 2025/01/30 18:57:48 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ressource/libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}

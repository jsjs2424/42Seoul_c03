/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiskim <jiskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:05:00 by jiskim            #+#    #+#             */
/*   Updated: 2021/03/02 18:18:09 by jiskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*tmp;
	unsigned int	i;

	tmp = dest;
	while (*tmp)
		tmp++;
	i = 0;
	while (*src && i < nb)
	{
		*tmp++ = *src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}

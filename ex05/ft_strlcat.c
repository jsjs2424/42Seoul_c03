/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiskim <jiskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:04:47 by jiskim            #+#    #+#             */
/*   Updated: 2021/03/06 23:33:52 by jiskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	while (*dest)
		dest++;
	while (*src && i < size - 1)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	if (dlen < size)
		return (dlen + slen);
	else
		return (size + slen);
}

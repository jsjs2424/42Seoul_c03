/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiskim <jiskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:04:47 by jiskim            #+#    #+#             */
/*   Updated: 2021/03/02 20:31:06 by jiskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	dlen = i;
	slen = 0;
	while (*src && i < size - 1)
	{
		*dest++ = *src++;
		i++;
		slen++;
	}
	while (*src)
	{
		src++;
		slen++;
	}
	*dest = '\0';
	return (dlen + slen);
}

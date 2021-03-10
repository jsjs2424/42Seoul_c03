/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiskim <jiskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:20:09 by jiskim            #+#    #+#             */
/*   Updated: 2021/03/11 00:39:47 by jiskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_str(char *str, char *to_find)
{
	while (*to_find)
	{
		if (*str != *to_find)
			return (0);
		to_find++;
		str++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (is_in_str(str, to_find))
				return (str);
		}
		str++;
	}
	return (0);
}

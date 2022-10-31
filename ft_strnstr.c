/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:32:09 by eberger           #+#    #+#             */
/*   Updated: 2022/10/31 16:47:29 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	j = 0;
	value = 0;
	if(!*needle)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (needle[j] == '\0')
			return (haystack + (i - j));
		else if (j != 0 && haystack[i] != needle[j])
			j = 0;
		i++;
	}
	return (0);
}

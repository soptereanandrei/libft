/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoptere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 13:26:26 by asoptere          #+#    #+#             */
/*   Updated: 2018/01/28 14:02:52 by asoptere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		while (*(s1 + i) && *(s2 + i))
		{
			if (*(s1 + i) != *(s2 + i))
				return (0);
			i++;
		}
		return (*(s1 + i) == *(s2 + i));
	}
	return (0);
}

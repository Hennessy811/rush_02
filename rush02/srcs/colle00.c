/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:24:09 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/09 15:28:26 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*colle00_0(int x, int y)
{
	char	*colle;
	char	*pattern;

	pattern = "o-o| |o-o";
	colle = generate_colle(x, y, pattern);
	return (colle);
}

char	*colle00_1(int x, int y)
{
	char	*colle;
	char	*pattern;

	pattern = "/*\\* *\\*/";
	colle = generate_colle(x, y, pattern);
	return (colle);
}

char	*colle00_2(int x, int y)
{
	char	*colle;
	char	*pattern;

	pattern = "ABAB BCBC";
	colle = generate_colle(x, y, pattern);
	return (colle);
}

char	*colle00_3(int x, int y)
{
	char	*colle;
	char	*pattern;

	pattern = "ABCB BABC";
	colle = generate_colle(x, y, pattern);
	return (colle);
}

char	*colle00_4(int x, int y)
{
	char	*colle;
	char	*pattern;

	pattern = "ABCB BCBA";
	colle = generate_colle(x, y, pattern);
	return (colle);
}

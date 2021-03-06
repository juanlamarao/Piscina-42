/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   samerow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 02:05:33 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 21:57:16 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	samerow(int r, int num, int puzzle[6][6])
{
	int c;

	c = 1;
	while (c < 5)
	{
		if (puzzle[r][c] == num)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

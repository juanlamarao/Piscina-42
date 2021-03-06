/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directionud.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:04:32 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 15:05:36 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionud(int c, int puzzle[6][6])
{
	int r;
	int n;
	int visibility;

	r = 2;
	n = puzzle[1][c];
	visibility = 1;
	while (r < 5)
	{
		if (puzzle[r][c] > n)
		{
			visibility++;
			n = puzzle[r][c];
		}
		r++;
	}
	if (puzzle[0][c] == visibility)
		return (1);
	else
		return (0);
}

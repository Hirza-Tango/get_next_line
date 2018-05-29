/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapnfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslogrov <dslogrove@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:32:13 by dslogrov          #+#    #+#             */
/*   Updated: 2018/05/29 14:48:22 by dslogrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapnfree(char **var, char *new_val)
{
	char	*temp;

	temp = new_val;
	free(*var);
	*var = temp;
}

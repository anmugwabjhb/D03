/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:28:37 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/12 12:49:44 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a,int *b)
{
	int first_num;
	int second_num;

	first_num = *a;
	second_num = *b;

	*a = first_num / second_num;
	*b = first_num % second_num;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuligma_C11.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:22:19 by npentini          #+#    #+#             */
/*   Updated: 2024/04/26 02:40:52 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TULIGMA_C11_H
# define TULIGMA_C11_H

#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int (*f)(char*));
int		ft_count_if(char **tab, int length, int (*f)(char*));
int		ft_is_sort(int *tab, int length, int (*f)(int, int));



#endif
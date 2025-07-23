/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:57:43 by jmartos-          #+#    #+#             */
/*   Updated: 2024/08/17 17:17:43 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h" /* Libreria 42 "jmartos-". */

/*#Localiza el puntero al último nodo de la lista.#*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*DESARROLLO*/
/*Primero se comprueba si la lista esta vacia. En caso que si, mientras
el puntero de lista sea exista (porque hay un puntero "next" que no es NULL)
"lst", que es el primer puntero de la lista, va siendo actualiado por el
del siguiente nodo y vuelve a comprobarse de nuevo (esta vez en la posicion
siguiente), hasta toparse con el ultimo nodo.*/
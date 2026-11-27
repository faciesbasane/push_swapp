/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 01:13:07 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 12:56:39 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    pb(t_stack *a, t_stack *b)
{
    t_node     *tmp;
    
    if(a->size == 0)
        return;
    tmp = a->top;
    a->top = a->top->next;
    tmp->next = b->top;
    b->top = tmp;
    a->size -= 1;
    b->size++;
    ft_printf("pb\n");
}

void    pa(t_stack *a, t_stack *b)
{
    t_node     *tmp;

    if(b->size == 0)
        return;
    tmp = b->top;
    b->top = b->top->next;
    tmp->next = a->top;
    a->top = tmp;
    b->size -= 1;
    a->size++;
    ft_printf("pa\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotation_inverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 01:54:22 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 12:56:37 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void    rotate_inverse_a(t_stack *a)
{
    t_node  *tmp;
    t_node  *last;

    if(a->size < 2)
        return;
    last = a->top;
    while (last->next->next != NULL)
        last = last->next;
    tmp = last->next;
    last->next = NULL;
    tmp->next = a->top;
    a->top = tmp;
}

static void    rotate_inverse_b(t_stack *b)
{
    t_node  *tmp;
    t_node  *last;

    if(b->size < 2)
        return;
    last = b->top;
    while (last->next->next != NULL)
        last = last->next;
    tmp = last->next;
    last->next = NULL;
    tmp->next = b->top;
    b->top = tmp;
}

void    rra(t_stack *a)
{
    rotate_inverse_a(a);
    ft_printf("rra\n");
}

void    rrb(t_stack *b)
{
    rotate_inverse_b(b);
    ft_printf("rrb\n");
}

void    rrr(t_stack *a, t_stack *b)
{
    rotate_inverse_a(a);
    rotate_inverse_b(b);
    ft_printf("rrr\n");
}
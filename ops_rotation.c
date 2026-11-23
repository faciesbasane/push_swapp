/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 01:28:31 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 01:54:28 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void    rotate_a(t_stack *a)
{
    t_node  *tmp;
    t_node  *last;

    if(a->size < 2)
        return;

    last = a->top;
    while (last->next != NULL)
        last = last->next;
    tmp = a->top;
    a->top = a->top->next;
    tmp->next = NULL;
    last->next = tmp;
}

static void    rotate_b(t_stack *b)
{
    t_node  *tmp;
    t_node  *last;

    if(b->size < 2)
        return;

    last = b->top;
    while (last->next != NULL)
        last = last->next;
    tmp = b->top;
    b->top = b->top->next;
    tmp->next = NULL;
    last->next = tmp;
}

void    ra(t_stack *a)
{
    rotate_a(a);
    ft_printf("ra\n");
}

void    rb(t_stack *b)
{
   rotate_b(b);
    ft_printf("rb\n");
}

void    rr(t_stack *a, t_stack *b)
{
    rotate_a(a);
    rotate_b(b);
    ft_printf("rr\n");
}
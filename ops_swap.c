/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 00:43:39 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 01:54:25 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void     swap_a(t_stack *a)
{
    int     tmp;

    if (a->size < 2)
        return;

    tmp = a->top->value;
    a->top->value = a->top->next->value;
    a->top->next->value = tmp;
}

static void     swap_b(t_stack *b)
{
    int     tmp;

    if (b->size < 2)
        return;

    tmp = b->top->value;
    b->top->value = b->top->next->value;
    b->top->next->value = tmp;
}

void    sa(t_stack *a)
{
    swap_a(a);
    ft_printf("sa\n");
}

void    sb(t_stack *b)
{
   swap_b(b);
    ft_printf("sb\n");
}

void    ss(t_stack *b, t_stack *a)
{
    swap_a(a);
    swap_b(b);
    ft_printf("ss\n");
}

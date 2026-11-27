/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex_radix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 00:47:58 by omar              #+#    #+#             */
/*   Updated: 2026/11/27 01:21:55 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    assign_rank_zero(t_stack *a)
{
    int     count;
    t_node *current;
    t_node *compare;

    if(a->size < 2)
        return;
    current = a->top;
    while (current != NULL)
    {
        count = 0;
        compare = a->top;
        while (compare != NULL)
        {
            if (current->value > compare->value)
                count++;
            compare = compare->next;
        }
    current->rank = count;
    current = current->next;
    }
}

void    sort_complex(t_stack *a, t_stack *b)
{
    int     bits;
    int     tmp;
    int     size;
    int     i;

    assign_rank_zero(a);
    tmp = a->size;
    bits = 0;
    while (tmp > 0)
    {
        tmp >>= 1;
        bits++;
    }
    i = 0;
    while (i < bits)
    {
        size = a->size;
        while (size > 0)
        {
            if ((a->top->rank >> i) & 1 == 1)
                ra(a);
            else
                pb(a, b);
            size--;
        }
        while (b->size > 0)
            pa(a, b);
        i++;
    }
}
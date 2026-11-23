/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 03:12:30 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 03:45:27 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    is_sorted(t_stack *a)
{
    int      sort;
    t_node   *current;
    
    sort = a->top->value;
    current = a->top->next;
    while(current != NULL)
    {
        if(current->value < sort)
            return(0);
        else
            sort = current->value;
        current = current->next;
    }
    return(1);
}

int    find_min(t_stack *a)
{
    t_node  *current;
    int      min;

    min = a->top->value;
    current = a->top;
    while(current != NULL)
    {
        if(current->value < min)
            min = current->value;
        current = current->next;
    }
    return(min);
}

void    sort_simple(t_stack *a, t_stack *b)
{
    if(is_sorted(a))
        return;
    while(a->size > 1)
    {
        while(a->top->value != find_min(a))
            ra(a);
        pb(a, b);
    }
    
    while(b->size > 0)
        pa(a, b);
}
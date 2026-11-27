/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 03:46:51 by omar              #+#    #+#             */
/*   Updated: 2026/11/24 03:38:12 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    assign_rank(t_stack *a)
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
    current->rank = count + 1;
    current = current->next;
    }
}

void    sort_medium(t_stack *a, t_stack *b)
{
    int     chunk_size;
    int     min_rank;
    int     push;

    assign_rank(a);
    min_rank = 1;
    chunk_size = 1;
    while(chunk_size * chunk_size < a->size)
        chunk_size++;
    while(a->size > 0)
    {
        push = 0;
        while(push < chunk_size && a->size > 0)
        {
            if (a->top->rank >= min_rank && a->top->rank <= min_rank + chunk_size - 1)
            {   
                pb(a, b);
                push++;
            }
            else
                ra(a);
        }       
        min_rank += chunk_size;
    }
    while (b->size > 0)
        pa(a, b);
} 
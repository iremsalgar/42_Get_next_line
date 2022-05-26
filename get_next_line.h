/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:24:53 by isalgar           #+#    #+#             */
/*   Updated: 2022/05/26 02:56:45 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list{
	char			*x;
	struct s_list	*next;
}t_list;

char	*get_next_line(int fd);
char	*get_line(char *line);
t_list	*ft_lstnew(void);
char	*ft_controller(char *str, const char c, t_list *y);
int		ft_chk(const char *a, int chker, int c);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *s1);

char	*ft_cutter(char *str, char c, int i);
#endif

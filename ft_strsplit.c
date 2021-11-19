/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:09:08 by thakala           #+#    #+#             */
/*   Updated: 2021/11/19 12:15:23 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(const char *string, const char delimiter)
{
	size_t	words;

	words = 0;
	while (*string)
	{
		while (*string && *string == delimiter)
			string++;
		if (*string && *string != delimiter)
			words++;
		while (*string && *string != delimiter)
			string++;
	}
	return (words);
}

static void	ft_fill_word(char *word, const char delimiter, const char **s_ptr)
{
	while (**s_ptr && **s_ptr != delimiter)
	{
		*word++ = **s_ptr;
		*s_ptr += 1;
	}
}

static char	*ft_get_next_word(const char **s_ptr, const char delimiter)
{
	char	*word;
	size_t	word_length;
	size_t	i;

	i = 0;
	while (*s_ptr[i])
	{
		word_length = 0;
		while (**s_ptr && **s_ptr == delimiter)
			*s_ptr += 1;
		while (*s_ptr[i] && *s_ptr[i] != delimiter)
		{
			word_length++;
			i++;
		}
		word = ft_strnew(word_length);
		if (!word)
			return (NULL);
		ft_fill_word(word, delimiter, s_ptr);
	}
	return (word);
}

static void	*free_all(char **words, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(words[i++]);
	free(words);
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**words;
	char	*word;

	word_count = ft_count_words(s, c);
	words = (char **)ft_memalloc(sizeof(*words) * (word_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		word = ft_get_next_word(&s, c);
		if (!word)
			return (free_all(words, word_count + 1));
		words[i] = word;
		i++;
	}
	words[i] = 0;
	return (words);
}

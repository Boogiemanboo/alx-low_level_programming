#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 */
int count_words(char *str);

/**
 * copy_word - Copy a word from the input string.
 */
char *copy_word(char *str, int start, int end);

/**
 * strtow - Split a string into words.
 */
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int word_count = count_words(str);
    if (word_count == 0) {
        return NULL;
    }

    char **words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int i, j, k = 0, len = 0, start = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            start = i;
            len = 0;

            while (str[i] != ' ' && str[i] != '\0') {
                len++;
                i++;
            }

            words[k] = copy_word(str, start, start + len);
            if (words[k] == NULL) {
                for (j = 0; j < k; j++)
                    free(words[j]);
                free(words);
                return NULL;
            }

            k++;
        }
    }

    words[k] = NULL;

    return words;
}

/**
 * count_words - Count the number of words in a string.
 */
int count_words(char *str) {
    int count = 0, in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }

    return count;
}

/**
 * copy_word - Copy a word from the input string.
 */
char *copy_word(char *str, int start, int end) {
    char *word;
    int i, j;

    word = malloc((end - start + 1) * sizeof(char));
    if (word == NULL) {
        return NULL;
    }

    for (i = start, j = 0; i < end; i++, j++) {
        word[j] = str[i];
    }

    word[j] = '\0';

    return word;
}

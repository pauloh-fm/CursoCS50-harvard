#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Valores para as 26 letras do alfabeto, em ordem
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char* word);

int main(void)
{
    // Get input words from both players
    char word1[100];//Player 1
    char word2[100];//Player 2

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
}

int compute_score(char* word)
{
    // TODO: Compute and return score for string
}
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */
int max;               /* maximum length seen so far */
char line[MAXLINE];    /* current input line */
char longest[MAXLINE]; /*longest line saved here */

int getline(void);
void copy(void);

// print longest input line
int main()
{
    int len; /* current line length */
    extern int max;
    extern char lonegest[];
    max = 0;
    while ((len = getline()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

// getline: read a line into s, return length
int getline()
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy : copy 'from' into 'to'; assume to is big enough
void copy()
{
    int i;
    i = 0;
    extern char line[], longest[];
    while ((longest[i] = line[i]) != '\0')
        ++i;
}

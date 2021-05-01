#include <stdio.h>

int main()
{
    int n, i = 0, count[26] = {0}, j, distinct = 0, same = 0, answer;
    char u;
    scanf("%d%c", &n, &u);
    char a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == 'a')
            count[0]++;
        if (a[i] == 'b')
            count[1]++;
        if (a[i] == 'c')
            count[2]++;
        if (a[i] == 'd')
            count[3]++;
        if (a[i] == 'e')
            count[4]++;
        if (a[i] == 'f')
            count[5]++;
        if (a[i] == 'g')
            count[6]++;
        if (a[i] == 'h')
            count[7]++;
        if (a[i] == 'i')
            count[8]++;
        if (a[i] == 'j')
            count[9]++;
        if (a[i] == 'k')
            count[10]++;
        if (a[i] == 'l')
            count[11]++;
        if (a[i] == 'm')
            count[12]++;
        if (a[i] == 'n')
            count[13]++;
        if (a[i] == 'o')
            count[14]++;
        if (a[i] == 'p')
            count[15]++;
        if (a[i] == 'q')
            count[16]++;
        if (a[i] == 'r')
            count[17]++;
        if (a[i] == 's')
            count[18]++;
        if (a[i] == 't')
            count[19]++;
        if (a[i] == 'u')
            count[20]++;
        if (a[i] == 'v')
            count[21]++;
        if (a[i] == 'w')
            count[22]++;
        if (a[i] == 'x')
            count[23]++;
        if (a[i] == 'y')
            count[24]++;
        if (a[i] == 'z')
            count[25]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] > 1)
            same += count[i];
    }

    distinct = n - same;
    if (distinct % 2 == 0 && distinct != 0) 
    {
        if (same >= 1)
            answer = (1 + (same)-1);
        else
            answer = (1 + (same));
    }
    else
        answer = same - 1;
    
    printf("%d\n", answer);
}
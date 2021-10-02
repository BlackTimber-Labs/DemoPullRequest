#include <stdio.h>
int main()
{
    int n, s[1000], a = 1, d = 1, i;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);
    i = 0;
    while ((a == 1 || d == 1) && i < n - 1) {
        if (s[i] < s[i+1])
        d = 0;
        else if (s[i] > s[i+1])
        a = 0;
        i++;
    }
    if (a == 1)
        printf("The array is sorted in ascending order.\n");
    else if (d == 1)
        printf("The array is sorted in descending order.\n");
    else
        printf("The array is not sorted.\n");
    return 0;
}

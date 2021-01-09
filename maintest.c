# include <stdio.h>

int     main(void)
{
    double  pi;
    char *str;

    str = "salut";
    pi = 3.141591654;
    printf("[%s == (%-3d)]\n", "-3d", 1);
    printf("[%s == (%10s)]\n", "10s", str);
    printf("[%s == (%-*s)]\n", "-*s", 10, str);
    printf("[%s == (%-*.*f)]\n", "-*.*f", 5, 2, pi);
    printf("[%s == (%010f)]\n", "10f", pi);
    printf("[%s == (%-10f)]\n", "-10f", pi);
    printf("[%s == (%010.3f)]\n", "-10.3f", pi);
    printf("[%s == (%3.5f)]\n", "3.5f", pi);
    printf("[%s == (%-3f)]\n", "-3f", pi);
    return (0);
}

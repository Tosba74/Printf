# include <stdio.h>

int     main(void)
{
    double  pi;

    pi = 3.141591654;
    printf("[%s == (%d)]\n", "d", 1);
    printf("[%s == (%3d)]\n", "3d", 2);
    printf("[%s == (%03d)]\n", "03d", 3);
    printf("[%s == (%.5f)]\n", ".5f", pi);
    printf("[%s == (%10f)]\n", "10f", pi);
    printf("[%s == (%010f)]\n", "010f", pi);
    printf("[%s == (%-10f)]\n", "-10f", pi);
    printf("[%s == (%5f)]\n", "5f", pi);
    printf("[%s == (%-3f)]\n", "-3f", pi);
    return (0);
}

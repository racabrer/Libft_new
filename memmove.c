#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while(n > 0)
    {
        *p = (unsigned char *)c;
        p++;
        n--;
    }
    return (s); 
}

/*
Devuelve s porque es void * que es un puntero a algo 
que no tiene tipo concreto. Devuelve el puntero genérico del principio
*/
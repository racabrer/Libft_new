#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *cdst;
    const unsigned char *csrc;
    
    if (!dst && !src) 
        return (0); i = 0;
    cdst = (unsigned char *) dst;
    csrc = (const unsigned char *) src; 
    while (i < n)
    {
        cdst[i] = csrc[i];
        i++;
    }
    return (dst);
}
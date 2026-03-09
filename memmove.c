/*
Copia un bloque de memoria de una ubicación a otra,
incluso si los bloques de memoria se superponen.

Hay solapamiento cuando el buffer de origen es menor que el buffer
de destino, esto es cuando se encuentra en una posición de memoria
anterior. 
Para evitar una pérdida de información, una solución es copiar comenzando
por el final en lugar de por el principio.
*/
#include <stddef.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    size_t i;
    
    if (!dest && !src) //Comprobación de punteros nulos
        return (0);
    i = 0;
    if ((size_t)dest - (size_t)src < n) //decidir el sentido de la copia
    {
        i = n - 1;
        while(i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while(i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}

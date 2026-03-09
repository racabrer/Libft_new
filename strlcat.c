/*
Concatena src al final de dst, pero nunca escribiendo más de size bytes en total en dst,
y siempre devuelve la longitud total que tendría resultado (len_dst + len_src).

PASO A PASO:

PASO 1: Calcular longitud actual de dst
Encuentra dónde está el \0 final de dst.

Cuenta cuántos caracteres tiene dst antes del \0.
Llamémoslo dst_len.

Ejemplo: dst = "hola" → dst_len = 4

PASO 2: Calcular espacio disponible
Espacio libre = size - dst_len - 1 (el -1 es para el \0 final).

Si espacio_libre <= 0, no copies nada, solo devuelve size.

PASO 3: Calcular longitud total del resultado
total_len = dst_len + strlen(src)

Esto lo devuelves al final, pase lo que pase.

PASO 4: Copiar desde src (solo lo que quepa)
Posiciónate en el final de dst (donde está su \0).

Copia caracteres de src hasta:

O encontrar \0 en src, O

Haber copiado espacio_libre - 1 caracteres.

Pon \0 al final.
*/

#include <stddef.h>

int ft_strlen(char *str)
{
    int i;
   
    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;
    int dest_len;
    int space;
    int total_len;
   
    dest_len = ft_strlen(dst);
    //Calculo el espacio libre
    space = size - dest_len - 1;
    if (space <= 0)
        return size;
    total_len = dest_len + ft_strlen(src);
    i = 0;
    while(dst[i])
        i++;
    j = 0;
    while (src[j] && j < space)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (total_len);  
}
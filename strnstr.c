/*
char *strrchr(const char *s, int c);
Qué hace:
Igual que strchr, pero devuelve un puntero a la ÚLTIMA aparición del carácter c en la cadena s.

Comportamiento:
Busca el último carácter que coincida con c en s.

Si lo encuentra → devuelve puntero a esa posición (la última).

Si no lo encuentra → devuelve NULL.

El \0 final SÍ se considera. Si buscas '\0', devuelve puntero al terminador.

PASO A PASO:

1. Encuentra el final de la cadena (donde está '\0') 
2. Desde el final hacia el principio: - Si el carácter actual == c → devuélvelo 
3. Si llegas al principio sin encontrarlo → NULL 
4. Si c == '\0' → devuelve el terminador
*/

char *strrchr(const char *s, int c)
{
    int i;
   
    i = 0;
    while(s[i])
        i++;
    i--;
    while(i >= 0)
    {
        if (s[i] == (char)c)
            return ((char*)s + i );
        i--;
    }
    if ((char) c == '\0')
        return ((char *)s + i);
    return (0);
}


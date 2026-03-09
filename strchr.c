/*
Qué hace:
Devuelve un puntero a la primera aparición del carácter c en la cadena s.

Comportamiento detallado:
Busca el primer carácter que coincida con c en s.

Si lo encuentra → devuelve puntero a esa posición.

Si no lo encuentra → devuelve NULL.

El \0 final SÍ se considera parte de la cadena. Si buscas '\0', devuelve puntero al terminador.
*/

char *strchr(const char *s, int c)
{
    int i;
   
    i = 0;
    while(s[i])
    {
        if (s[i] = (char)c)
            return ((char *)s + i);
        i++;
    }
    if ((char)c == '\0')
        return ((char *)s + i);
    return (0);
}

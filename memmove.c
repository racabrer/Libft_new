/*
La función strcpy() copia string2, incluido el carácter nulo final, en la ubicación especificada por string1.
La función strcpy() opera en series con final nulo.
Los argumentos de serie para la función deben contener un carácter nulo (\0) que marque el final de la serie.
No se realiza ninguna comprobación de longitud. No debe utilizar una serie literal para un valor string1 ,
aunque string2 puede ser una serie literal.
*/

char *ft_strcpy(char *dest, const char *src)
{
    int i;
   
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
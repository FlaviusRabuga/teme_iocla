#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    int nr;
    //printf("%d %d\n", sizeof(v) , sizeof(unsigned char));

    printf("Numar octeti: ");
    scanf("%d", &nr);

    if(nr == 1)
    {
        unsigned char *c = v;
        for(int i = 0; i < sizeof(v) / sizeof(unsigned char); i++)
        {
            printf("%p -> 0x%x\n", c, *c);
            c++;
        }
    }
    else if(nr == 2)
    {
        unsigned short *c = v;
        for(int i = 0; i < sizeof(v) / sizeof(unsigned short); i++)
        {
            printf("%p -> 0x%x\n", c, *c);
            c++;
        }
    }
    else if(nr == 4)
    {
        unsigned int *c = v;
        for(int i = 0; i < sizeof(v) / sizeof(unsigned int); i++)
        {
            printf("%p -> 0x%x\n", c, *c);
            c++;
        }
    }


}

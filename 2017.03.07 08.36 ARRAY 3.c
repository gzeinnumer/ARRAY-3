/*
NAMA   : M. FADLI ZEIN
KELAS  : TK 1 B
NO BP  : 1601081035
NP     : ARRAY 1\
*/

#include <stdio.h>
void main()
{
    int bil[10]={8,2,15,13,6,21,18,10,29,32};
    int i,gan,gen;
    gan=0;gen=0;
    printf(" ntah lah\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",bil[i]);
    }
    for(i=0; i<10; i++)
    {
        if(bil[i]%2==0)
        {
            gen=gen+1;
        }
        else
        {
            gan=gan+1;
        }
    }
    printf(" ganjil %d", gan);
    printf(" genap %d", gen);
}

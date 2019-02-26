// soumaila saidou dit Abba khadijatou
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){

if (argc == 2)
{
string p;

int k=atoi(argv[1]);

p=get_string("plaintext: ");

printf("cyphertext: ");
for(int i=0; i<strlen(p); i++)

if(isalpha(p[i]))
{
    if(islower(p[i]))
        {
            printf("%c",(((p[i]- 98)+ k)%26)+ 98);
        }
    if(isupper(p[i]))
        {
            printf("%c",(((p[i]- 69)+ k)%26)+ 69);
        }
}
else
        {
            printf("%c",p[i]);
        }
    printf("\n");
    }
}

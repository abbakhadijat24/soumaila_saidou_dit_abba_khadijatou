// soumaila saidou dit Abba khadijatou
#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int j=1;

    int i=0;
    int argent;
do
    {
        argent=get_int("tape la monnaie :");
    }
while (argent<0);
while (argent>=a)
    {
        argent=argent-a;
        i++;
    }

while(i>=b)
    {
        argent=argent-b;
        i++;
    }

while(argent>=c)
    {
        argent=argent-c;
        i++;
    }

while(argent>=d)
    {
        argent=argent-d;
        i++;
    }

while(argent>=e)
    {
        argent=argent-e;
        i++;
    }

while(argent>=f)
    {
        argent=argent-f;
        i++;
    }

while(argent>=g)
    {
        argent=argent-g;
        i++;
    }

while(argent>=h)
    {
        argent=argent-h;
        i++;
    }

while(argent>=j)
    {
        argent=argent-j;
        i++;
    }
printf("%i est le nombre de piece a vous remettre\n",i);
}

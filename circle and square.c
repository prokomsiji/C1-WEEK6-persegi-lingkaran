#include <stdio.h>
#include <stdlib.h>

void persegi(){
int s, i,j;
printf("SELAMAT DATANG DI BAHASA PEMROGRAMAN C");
printf("masukkan panjang persegi = ");
scanf("%d", &s);
printf("\n");
if (s>2)
 {
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if((i==0)||(i==s-1)||(j==0)||(j==s-1))
            {
                printf("*");
            }
            else if(s%2==1)
            {
                printf("*");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
 }
}
printf("\n");
void lingkaran(){
int r,i,j;
printf("masukkan panjang jari-jari lingkaran = ");
scanf("%d",&r);
printf("\n");
for(i=-r;i<r;i++)
 {
    for(j=-r;j<r;j++)
    {
        if(i*i+j*j<r*r)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
 }
}

int main()
{
persegi();
lingkaran();
    return 0;
}

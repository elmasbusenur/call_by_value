#include <stdio.h>
int arttir(int);
int main() {

    int i=5;
    printf("oncesi %d\n",i);

    arttir(i);


    printf("sonrasi %d\n",i);

    getchar();
    return 0;
}
int arttir(int k)
{
    k++;
}
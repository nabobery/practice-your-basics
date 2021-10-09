#include <stdio.h>
#include<math.h>

void square_num(int i)
{
    for(i=1;i<=20;i++)
    {
        printf("%d\t",i*i);
    }
}
int main()
{
    int i;
    square_num(i);
    return 0;
}

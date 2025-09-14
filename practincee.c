#include <stdio.h>
int main()
{
    for(int i=5 ; i>=1 ; i--)
    {
        for(int j=1 ; j<= i-1 ; j++)
        {
            printf( "");
        }
        for(int k= i-1; k<5; k++)
        {
            printf("*");
        }
        print("\n");
    }
    return 0;
}
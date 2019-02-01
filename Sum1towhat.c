#include <stdio.h>

int main()
{
    double sum = 0, i = 1, sum_end = 1E9;
    
    for(; i <= sum_end; i++)
    {
        sum = sum +i;
    }
    
    printf("%e\n", sum);
    
    return 0;
}

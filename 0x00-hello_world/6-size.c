#include <stdio.h>
/**
*main - Entry point
*Return:  Value 0 is considered as successful execution.
*/
int main(void)
{
printf("size of a char:%lu bytes(s)\n", sizeof(char));
printf("size of an int:%lu bytes(s)\n", sizeof(int));
printf("size of a long int:%lu bytes(s)\n", sizeof(long int));
printf("size of a long long int:%lu bytes(s)\n", sizeof(long long int));
printf("size of a float:%lu bytes(s)\n", sizeof(float));

return (0);

}

#include <stdio.h>
/**
*main - Entry point
*return:Value 0 is considered as successful execution.
*/
int main(void)
{
printf("size of char:%lu bytes(s)\n", sizeof(char));
printf("size of int:%lu bytes(s)\n", sizeof(int));
printf("size of long int:%lu bytes\n", sizeof(long int));
printf("size of long long int:%lu bytes\n", sizeof(long long int));
printf("size of float:%lu bytes\n", sizeof(float));

return (0);

}

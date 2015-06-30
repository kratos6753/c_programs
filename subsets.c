/* Writing all subsets of a set 
Complexity is O(n2^n)
*/
#include <stdio.h>
#include <math.h>

void printPowerSet(char *set, int set_size)
{
	unsigned int pow_set_size = pow(2, set_size);
	int counter, i;

	for (counter = 0; counter < pow_set_size; ++counter)
	{
		// printf("{");
		for (i = 0; i < set_size; ++i)
		{
			if(counter & (1<<i))
				printf("%c", set[i]);
		}
		// printf("}\n");
	}
}

int main() {
	char set[] = {'a', 'b', 'c'};
	printPowerSet(set, 3);
	getchar();
	return 0;
}
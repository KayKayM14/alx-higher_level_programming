#include "LIST_H"

/**
 */

{
size_t count = 0;

while (h != count)
{
	print("%d\n" , h -> next);

	h = h -> next;

	count++;
}
return (count);
}

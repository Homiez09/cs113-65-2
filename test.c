#include <stdio.h>

int main(void) {
	int a=4, b=3, c, d, e;
	float f=2,g=5, h, i, j, k;

	c = f/b*f;                 /* c = ? */
	h = a++/(float)b;          /* h = ? */
	j = (float)c/h--;          /* j = ? */
	d = b*h/c;                 /* d = ? */
	i = d*f+h--;               /* i = ? */
	e = a*d++/i;               /* e = ? */
	k = (int)i*d/(float)a;     
	printf("%d", c);
}


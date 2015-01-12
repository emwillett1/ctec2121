#include <>stdio.h

int main()
{
	int a;
	printf ("Enter value for a");
	scanf ("%c", &a);
	int b;
	printf ("Enter value for b");
	scanf ("%c", &b);
	int c;
	printf ("Enter value for c");
	scanf ("%c", &c);
	int d;
	printf ("Enter value for d");
	scanf ("%c", &d);
	int e;
	printf ("Enter value for e");
	scanf ("%c", &e);
	
	printf ("%i + %i = %i\n", a, b, c, d, e, a+b+c+d+e);
	printf ("%i - %i = %i\n", a, b, c, d, e, a-b-c-d-e);
	printf ("%i * %i = %i\n", a, b, c, d, e, a*b*c*d*e);
	printf ("%i / %i = %i\n", a, b, c, d, e, a/b/c/d/e);
	return 0;
}

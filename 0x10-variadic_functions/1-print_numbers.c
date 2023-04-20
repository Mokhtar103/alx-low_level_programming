void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int i;

if (n == 0)
{
	printf("\n");
}

va_start(ap, n);
for (i = n; i != 0; i--)
{
printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
}
va_end(ap);
}

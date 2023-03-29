#include <stdio.h>

int main()
{
	/* 
	 * If up to 80 characters are read, then 81 must be allocated,
	 * to store the terminating 0 as well.
	 */
	char s1[81], s2[81];
	char * p, i=0;

	/* Reading both s1 and s2 from stdin */
	printf("Enter s1:\n");
	fgets(s1,sizeof(s1),stdin);
	printf("Enter s2:\n");
	fgets(s2,sizeof(s2),stdin);

	/* Search for first non-printable character and close the string */
	for (p = s1; (32 <= *p) && (*p <= 126); p++);
	*p = 0;
	for (p = s2; (32 <= *p) && (*p <= 126); p++);
	*p = 0;

	/* Scanning s1 */
	for (p = s1; *p; p++) {
		if (*(s2+i) == 0) {
			/* 
			 * Reached end of s2. p points to the string
			 * after s1
			 */
			break;
		}
		if (*(s2+i) == *p) {
			/* same characters, advance in s2 */
			i++;
		} else if (*s2 == *p) {
			/* found the beginning of a new s2 */
			i = 1;
		} else {
			/* different characters, reset */
			i = 0;
		}
	}

	/* Now printing */
	printf("String in s1, after s2 is:\n%s\n", p);

	return 0;
}
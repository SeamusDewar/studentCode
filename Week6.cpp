#include <iostream>
#include <string.h>

char string1[] = "jzs8FUYWEoQU54hPs14K";
char string2[] = "HllbDYK6yHzjxlFcd840";
char string3[] = "RiQ1WrfsUq7BIf578p9G";
int i;
int lengh;
int upper = 0;
int lower = 0;
int num = 0;

void main()
{
	{
		printf("String #1\n");
		printf("Original string = %s\n", string1);

		lengh = sizeof(string1) / sizeof(char);
		for (i = 0; i < lengh; i++) {
			int ascii = string1[i];
			if (ascii >= 97 && ascii <= 122) {
				string1[i] = (char)(ascii - 32);
				lower = lower++;
			}
			else if (ascii >= 65 && ascii <= 90) {
					string1[i] = (char)(ascii + 32);
					upper = upper++;
			}
			else if (ascii >= 48 && ascii <= 57) {
					string1[i] = '*';
					num = num++;
			}
		
		
		}
		printf("New string = %s\n", string1);
		printf("Numbers changed = %d\n", num);
		printf("Lower case changed to upper = %d\n", lower);
		printf("Upper case changed to lower = %d\n\n\n", upper);
		num = 0; upper = 0; lower = 0;
	}



	{
		printf("String #2\n");
		printf("Original string = %s\n", string2);

		lengh = sizeof(string2) / sizeof(char);
		for (i = 0; i < lengh; i++) {
			int ascii = string1[i];
			if (ascii >= 97 && ascii <= 122) {
				string2[i] = (char)(ascii - 32);
				lower = lower++;
			}
			else if (ascii >= 65 && ascii <= 90) {
					string2[i] = (char)(ascii + 32);
					upper = upper++;
			}
			else if (ascii >= 48 && ascii <= 57) {
					string2[i] = '*';
					num = num++;
			}


		}
		printf("New string = %s\n", string2);
		printf("Numbers changed = %d\n", num);
		printf("Lower case changed to upper = %d\n", lower);
		printf("Upper case changed to lower = %d\n\n\n", upper);
		num = 0; upper = 0; lower = 0;
	}


	{
		printf("String #3\n");
		printf("Original string = %s\n", string1);

		lengh = sizeof(string3) / sizeof(char);
		for (i = 0; i < lengh; i++) {
			int ascii = string2[i];
			if (ascii >= 97 && ascii <= 122) {
				string3[i] = (char)(ascii - 32);
				lower = lower++;
			}
			else if(ascii >= 65 && ascii <= 90) {
					string3[i] = (char)(ascii + 32);
					upper = upper++;
			}
			else if (ascii >= 48 && ascii <= 57) {
					string3[i] = '*';
					num = num++;
			}


		}
		printf("New string = %s\n", string3);
		printf("Numbers changed = %d\n", num);
		printf("Lower case changed to upper = %d\n", lower);
		printf("Upper case changed to lower = %d\n\n\n", upper);
		num = 0; upper = 0; lower = 0;
	}






}
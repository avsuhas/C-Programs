Program to remove all the duplicate  occurences of a character in a string.

        This artical is used to remove all the duplicated characters in a string.
Example:
        The input is taken by user using command line arguments.
        input  = $ a.out subhash
        result = uba
        In  above example  "subhash" is the  string  which  is stored in argv[1]. So argv[1] = "subhash". This program removes all the duplicate characters which are present in argv[1].So in the  above example we will get output as "uba". 

Logic:
       1.Take the input from the user using command line argument.
       2.Use malloc and allocate memory for the given input.
       3.Now the pointer(s2) created will be pointing to the allocated memory.       
       5.Call the function my_strrev(p) by passing the pointer s2 and address of argv[1].
       6.The control goes to the function definition( void my_strrdup(char * s2, char * s1).
       7.In the function definition ,consider two variables i and j, such that i points to the first character and j also pointing  the first character.Check if  *(s1 +j) has               reached NULL.
       8.If the above condition is true the get into the loop and check if 'i' not equal to 'j'.If yes check whether *(s1+i) ==*(s1 +j).If both chacters are same come out of           the inner for loop and increment the 'i'.
       9.If 'i' eual to 'j',then increment j and continue the inner for loop.
      10.When the s1 encounters NULL ,comeout of the outer for loop and append '\0' character to the resultant s1.

Source code:

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void my_strrdup(char*,char*);

int main(int argc, char* argv[])

{

	char *s2 = (char*)malloc(strlen(argv[1])*sizeof(char));

	my_strrdup(s2,argv[1]);

	printf("result = %s\n",s2);

}

void my_strrdup(char *s2,char *s1)

{

	int i,j,k = 0;

	for(i = 0;*(s1+i)!= '\0';i++)

	{

		for(j = 0;*(s1 +j) != '\0';j++)

		{

			if(i != j)

			{

				if(*(s1+i) ==*(s1 +j))

				break;

			}

		}

		if(*(s1+j) == '\0')

		{

			*(s2+k)= *(s1+i);

			k++;

		}

	}

}

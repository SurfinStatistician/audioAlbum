/* Code updates to Surfin' Statistician Audio Album
*Using C programming language
*/

#include <stdio.h>
#include <string.h>
#define NUM_STEPS 4

int main ()
{
  //declare vars
  //initialize and define array of pointers to strings to contain the next steps.

  char *projstep[] = { "CONFIRM_CONTENT", "MIX", "MASTER", "LINER_NOTES"};

  int i, k;
 
  //Get input from user
  printf("What track did you last work on?");
  scanf("%d", &k);
  printf("What is the last thing you have completed?\nEnter 0 if you are still finalizing interior, or recording\nEnter 1 if you confirmed the interior content\nEnter 2 if you mixed volume\nEnter 3 if you applied mastering effects\nEnter 4 if you completed liner notes.\n");
  scanf("%d", &i);
  if (i >= NUM_STEPS)
    printf("You are done, or there was an error.\n");

  for (i; i < NUM_STEPS; i++)
  {
       if (i < 1)
	{
	  printf("You should finalize the interior content of the track.\n");
	  break;
	}
	
	else 
	    printf("Step remaining: %d, %s on track %d.\n", i + 1, projstep[i], k);
	  
  }

return 0;
 
}

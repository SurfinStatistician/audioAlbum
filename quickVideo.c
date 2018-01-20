/* This program prints the steps of how to make a quick video
 * Using iPhone X
 * and publishing to YouTube in highest resolution possible.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "workflow.h"
#
#define NUM_STEPS 18

  /* Program takes no arguments */
int main ()
{
  /* Not necessary to define variables up front */
  /* Creating loop to step through the array of pointers, referenced in header file */ 
  for (int i = 0; i < NUM_STEPS - 1; i++)
  {
    printf("%s\n", iphoneXOneTakeVideo[i]);
  }
} 

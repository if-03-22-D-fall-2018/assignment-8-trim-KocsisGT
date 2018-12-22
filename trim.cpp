/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.cpp
 * Author:			Kocsis Patrik
 * Due Date:		22.12.2018
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>

void trim(const char *string, char *trimmed)
{
  int beginning = 0;
  int ending = strlen(string)-1;
  int count = 0;

  get_beginning(string, &beginning);
  get_ending(string, &ending, &beginning);

  if(ending == -1)
  {
    strcpy(trimmed, "");
    return;
  }

  for(int i = beginning; i <= ending; i++)
  {
    trimmed[count] = string[i];
    count++;
  }

}

static void get_beginning(const char* string, int *beginning)
{
  while (string[*beginning] == ' ')
  {
    *beginning = *beginning + 1;
  }
}

static void get_ending(const char* string, int *ending, int *beginning)
{
  while(*ending >= *beginning && string[*ending] == ' ')
  {
    *ending = *ending -1;
  }
}

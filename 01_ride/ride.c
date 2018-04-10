/*
ID:   sathvij1
LANG: C
TASK: ride
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  FILE *fin = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");

  char group[7];
  char comet[7];
  int groupProd=1;
  int cometProd=1; 

  fscanf (fin, "%s\n%s", group, comet);

  for(int i=0;group[i]!='\0';i++)
  {
    groupProd *= group[i] - 64;
  }
  for(int i=0;comet[i]!='\0';i++)
  {
    cometProd *= comet[i] - 64;
  }

  if (groupProd % 47 == cometProd % 47)
  {
    fprintf (fout, "GO\n");
  }
  else
  {
    fprintf (fout, "STAY\n");
  }

  return 0;
}

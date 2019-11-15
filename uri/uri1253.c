#include <stdio.h>

int main () {

// A=65
// Z=90

int n;
int cod;
char s[60];

scanf("%d", &n);

for (int i=0;i<n;i++)
{
 scanf("%s %d", s, &cod);
 
 for (int j=0;s[j]!='\0';j++)
 {
  s[j]-=cod;
  if (s[j]<65)
  {
   s[j]+=26;
  }
 }
 
 printf("%s\n", s);
}
 
return 0;
}

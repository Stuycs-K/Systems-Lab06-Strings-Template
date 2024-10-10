#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"
void reset(char* s, int size){
  while(size > 1){
    s++[0]='_';
    size--;
  }
  s[0]=0;

}
int main() {

  char s1[100];
  s1[0]=0;
  char s2[100] = "hello";
  char s3[100] = "goodbye";

  printf("start strings:\n");
  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n", s3);
  
  printf("\nTesting strlen(s1):\n");
  printf("[standard]:\t%lu\n", strlen(s1) );
  printf("[mine]:\t\t%d\n", mystrlen(s1) );
  
  printf("\nTesting strlen(s2):\n");
  printf("[standard]:\t%lu\n", strlen(s2) );
  printf("[mine]:\t\t%d\n", mystrlen(s2) );

  printf("\nTesting strcpy(s1, s2):\n");
  reset(s1,50);//fill with _'s
  s1[0]=0;//start with a null
  printf("[standard]:\t[%s]\n", strcpy(s1, s2) );
  reset(s1,50);//fill with _'s
  s1[0]=0;//start with a null
  printf("[mine]:\t\t[%s]\n", mystrcpy(s1, s2) );

  printf("\nTesting strncpy(s1, s3, 3):\n");
  reset(s1,50);//fill with _'s
  s1[0]=0;//start with a null
  printf("[standard]:\t[%s]\n", strncpy(s1, s3, 3) );
  reset(s1,50);//fill with _'s
  s1[0]=0;//start with a null
  printf("[mine]:\t\t[%s]\n", mystrncpy(s1, s3, 3) );

  printf("\nTesting strcat(s1, s3):\n");
  reset(s1,50);//fill with _'s
  strcpy(s1, s2);//set to "hello"
  printf("[standard]:\t[%s]\n", strcat(s1, s3) );
  reset(s1,50);//fill with _'s
  strcpy(s1, s2);//set to "hello"
  printf("[mine]:\t\t[%s]\n", mystrcat(s1, s3) );

  printf("\nTesting strncat(s1, s2, 3):\n");
  reset(s1,100);//fill with _'s
  strcpy(s1, s2);//set to "hello"
  printf("[standard]:\t[%s]\n", strncat(s1, s2, 3) );
  reset(s1,100);//fill with _'s
  strcpy(s1, s2);//set to "hello"
  printf("[mine]:\t\t[%s]\n", mystrncat(s1, s2, 3) );


  printf("\nTesting strchr(s1, 'l'):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 'l') );
  printf("[mine]:\t\t[%p]\n", mystrchr(s1, 'l') );

  printf("\nTesting strchr(s1, 0):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 0) );
  printf("[mine]:\t\t[%p]\n", mystrchr(s1, 0) );

  printf("\nTesting strchr(s1, 'z'):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 'z') );
  printf("[mine]:\t\t[%p]\n", mystrchr(s1, 'z') );

  printf("\nTesting strcmp\n");
  printf("\tComparting cat to dog:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("cat", "dog") );
  printf("\t\t[mine]:\t\t[%d]\n", mystrcmp("cat", "dog") );
  printf("\tComparting ab to abc:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("ab", "abc") );
  printf("\t\t[mine]:\t\t[%d]\n", mystrcmp("ab", "abc") );
  printf("\tComparting abc to ab:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("abc", "ab") );
  printf("\t\t[mine]:\t\t[%d]\n", mystrcmp("abc", "ab") );
  printf("\tComparting abc to abc:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("abc", "abc") );
  printf("\t\t[mine]:\t\t[%d]\n", mystrcmp("abc", "abc") );

  return 0;
}

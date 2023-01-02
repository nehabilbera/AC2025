//Remove vowels from strings.

#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char str[100];
    printf("Enter a string : \n");
    gets(str);
    int l;
    l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
             j=i;
             while(str[j-1]!='\0'){
                 str[j]=str[j+1];
                 j++;
             }
            }
        }
        puts(str);
    return 0;
}

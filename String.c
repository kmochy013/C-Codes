
#include<stdio.h>
#include<string.h>
#define MAX_LEN 100

//function to read the main string, pattern string and replace string 
void readStrings(char str[], char pat[], char rep[])
{
    printf("Enter the main string: ");
    fgets(str, MAX_LEN, stdin);
    str[strlen(str) - 1] = '\0';
   
    printf("Enter the pattern string: ");
    fgets(pat, MAX_LEN, stdin);
    pat[strlen(pat) - 1] = '\0';
   
    printf("Enter the replace string: ");
    fgets(rep, MAX_LEN, stdin);
    rep[strlen(rep) - 1] = '\0';
}

//function to perform pattern matching operation
void findReplace(char str[], char pat[], char rep[])
{
    int i, j, k;
    int len_str = strlen(str);
    int len_pat = strlen(pat);
    int len_rep = strlen(rep);
   
    //check if pattern string exists in main string
    for(i=0; i<=len_str-len_pat; i++)
    {
        j=i;
        k=0;
        while(j<len_pat+i && pat[k]!='\0' && str[j]==pat[k])
        {
            j++;
            k++;
        }
       
        if(pat[k]=='\0')
        {
            //replace pattern string with replace string
            for(k=0; k<len_rep; k++)
            {
                str[i+k] = rep[k];
            }
           
            //shift the remaining characters
            for(j=i+len_rep; j<=len_str; j++)
            {
                str[j] = str[j+len_pat-len_rep];
            }
        }
    }
   
    printf("\nThe modified string is: %s\n", str);
}

int main()
{
    char str[MAX_LEN], pat[MAX_LEN], rep[MAX_LEN];
   
    //read the strings
    readStrings(str, pat, rep);
   
    //check if pattern string exists in main string
    if(strstr(str, pat) == NULL)
    {
        printf("\nPattern string does not exist in main string\n");
    }
    else
    {
        //perform pattern matching operation
        findReplace(str, pat, rep);
    }
   
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
char arr[1000000]; 
int top =-1;

void push(char ch)
{  top++;
    arr[top] = ch;
    
}

char pop()
{   if(top==-1) return '\0';
    char ch = arr[top];
    top--;
    return ch;
}

bool isValid(char* s) { 
    
    int i =0; char ch;
    for(i=0;s[i]!='\0';i++)
    {     //printf("s of i %c : ", s[i]);
         if(s[i]=='('|| s[i]=='{'|| s[i]=='[') push(s[i]);
         
         else
         {
              ch = pop();
              if(ch=='\0') return 0;
            else if(s[i]==')'&& ch == '(') continue;
            else if (s[i]=='}' && ch == '{') continue;
            else if(s[i]==']'&& ch=='[') continue;
            
            else return 0;
            
         }
         
        
         
          
    } 
    //printf("top is %d", top);
    if(top!=-1) return 0;
    return 1;
     
}
int main()
{
	char s;
	scanf("%s",&s);

	printf("%B" , isValid(s));
}
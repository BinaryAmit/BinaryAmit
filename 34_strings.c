// #include<stdio.h>
// void printstr(char string[])
// {

//     for (int i = 0; string[i]!='\0'; i++)
//     {
//         printf("%c",string[i]);

//     }

// }
// int main(){
//     char str[] = {'T','a','r','i','q','u','e','\0'};
//     printstr(str);

//      return 0;
// }




// #include<stdio.h>

// int main(){
//     char str[] = {'T','R','Q','\0'};
//     for (int i=0;str[i]!='\0' ;i++)
//     {
//         printf("%c",str[i]);

//     }

//      return 0;
// }




// #include <stdio.h>
// void printstr(char string[])
// {
//     int i = 0;
//     while (string[i] != '\0')
//     {
//         printf("%c", string[i]);
//         i++;
//     }
// }
// int main()
// {
//     char str[] = {'S', 'h', 'u', 't', ' ', 'u', 'p', '\0'};
//     printstr(str);

//     return 0;
// }



#include<stdio.h>
void printstr(char str[])
{
    int i = 0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main(){
    char str[]="Aloochat \n";
    
    printstr(str);
    printf("%s",str);
    
    // char string[]="Mind your own Business \n";
    // printf("%s",string);
    
    // char string2[1];
    // gets(string2);
    // printf("%s\n",string2);
    
    // char string3[]="Mind your own Business \n";
    // puts(string3);

    printf("Enter your Name \n");
    char string[1];
    gets(string);
    printf("Your Name is : %s \n",string);
    
    puts(string);
    

    
    
     return 0;
}

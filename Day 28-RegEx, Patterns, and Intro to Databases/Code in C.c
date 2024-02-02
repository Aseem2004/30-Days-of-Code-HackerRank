#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);



int main()
{
       
    int x,i,j; 
    scanf("%d",&x);
    char *ptr,*str,*ptr1;
    char tmp[20],tmp1[30];
    char firstName[x][20];
    char emailID[x][30],*emid;
    for(i= 0; i < x; i++)
    {
        scanf("%s %s",firstName[i],emailID[i]);
    }
    for(i=1;i<x;i++)
    {
        for(j=1;j<x;j++)
        {
            if(strcmp(firstName[j-1],firstName[j])>0)
            {
                strcpy(tmp,firstName[j-1]);
                strcpy(firstName[j-1],firstName[j]);
                strcpy(firstName[j],tmp);
                strcpy(tmp1,emailID[j-1]);
                strcpy(emailID[j-1],emailID[j]);
                strcpy(emailID[j],tmp1);
            }    
        }
    }
    for(j=0;j<x;j++)
    {
         ptr=strstr(emailID[j],"@");
         ptr1=strstr(emailID[j],"g");
         if(strcmp(ptr,"@gmail.com")==0 && strncmp(ptr1,"gamil@gmail",8)!=0 )
            printf("%s\n",firstName[j]);
         else
           {} 
    }
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
//
//  main.c
//  filereader
//
//  Created by Sengupta, Dhruv on 10/24/19.
//  Copyright © 2019 Sengupta, Dhruv. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file_pointer;
    char buffer[30], c;

    file_pointer = fopen("fprint_bruh.rtf", "r");
    fgets(buffer, 50 , file_pointer);
    printf("%s\n", buffer);
    
    printf("doing stuff...\n");
    file_pointer = fopen("fprintf_bruh.rtf", "r");
    char str1[10], str2[2], str3[20], str4[2];
    fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
    printf("|%s|\n", str1);
    printf("|%s|\n", str2);
    printf("|%s|\n", str3);
    printf("|%s|\n", str4);
    
    return 0;
    
}



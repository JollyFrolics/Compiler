#include <stdio.h>
#include <stdlib.h>

typedef enum {
    IDENTIFIER,
    KEYWORD,
    SPERATOR,
    LITERAL,
    COMMENT,
    WHITESPACE,
} tokenType;


typedef struct {
    tokenType type;
    char* value;
    int length;
} token;

token* lexer(FILE*);

int main(int argc, char **argv){
    if (argc != 3){
        printf("Usage: main <input file> <output file>");
        return(1);
    }

    FILE *file = fopen(argv[1], "r");
    char currentCharacter = (char)fgetc(file);

    if (!file){
        printf("Error: file not found");
        return(2);
    }
    //Lexing part
    token *tokens = lexer(file);
    return EXIT_SUCCESS;
}

token* lexer(FILE* file){
    unsigned char currentChar = fgetc(file);
    token 
}

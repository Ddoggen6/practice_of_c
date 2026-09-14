#include <stdio.h>
#include <string.h>

int main() {
   
    int n;


    printf("Enter a number that make refference to the total number of words that you want to write:");
    scanf("%d", &n);
    
    
    int total_characters = 0;
    int max_length = 0;
    
    
for(int i = 0; i < n; i++) {
    char word[50];

    scanf("%49s", word);

    int length = strlen(word);

    printf("Word: %s - Length: %d\n", word, length);

    total_characters += length;

    if(length > max_length) {
        max_length = length;
    }
}
    
    printf("Total characters: %d\n", total_characters);
    printf("Longest word length: %d\n", max_length);
    
    return 0;

}

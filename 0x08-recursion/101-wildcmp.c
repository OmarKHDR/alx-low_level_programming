#include "main.h"
#include "main.h"

int wildcmp(char *s1, char *s2)
{
    // Base case: if both strings have reached the end
    if (!(*s1) && !(*s2)){
        return (1);
    }

    // If s2 contains a '*', handle the wildcard case
    if (*s2 == '*'){
        // Skip consecutive '*' characters
        while (*s2 == '*'){
            s2++;
        }

        // If s2 ends after '*', the match is successful
        if (!(*s2)) {
            return (1);
        }

        // Recursively check if the rest of s1 matches with the rest of s2 after '*'
        while (*s1) {
            if (wildcmp(s1, s2)) {
                return (1);
            }
            s1++;  // Move to the next character in s1 to try matching
        }
        return (0);  // No match found after '*'
    }

    // If characters in s1 and s2 match, continue comparing the rest
    if (*s1 == *s2){
        return (wildcmp(s1 + 1, s2 + 1));
    }

    // If one string ends before the other, return false
    return (0);
}

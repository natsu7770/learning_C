  #include <stdio.h>
  #include <string.h>
  
  int main() {
      char s[100];
      printf("Enter the string: ");
      fgets(s, sizeof(s), stdin);
      s[strcspn(s, "\n")] = 0;  // Remove newline
      
      int len = strlen(s);
      int seen[26] = {0};  // Tracks count of each lowercase letter
      
      char result = '\0';
      for (int i = 0; i < len; i++) {
          int idx = s[i] - 'a';
          seen[idx]++;
          if (seen[idx] == 2) {  // Second occurrence
              result = s[i];
              break;
          }
      }
      
      if (result != '\0') {
          printf("%c\n", result);
      } else {
          printf("No repeating character\n");
      }
      return 0;
  }
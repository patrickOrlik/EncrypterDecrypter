
#include <stdio.h>
int shift =
    3; // defines how many times the letters "shift" to the right (3 by default)
// Caesar encrypt function that encrypts a user specified message
void caesar_encrypt(char *message) {
  // for loop that keeps running until we reach /0(end of string) this ensures
  // the entire message is decrypted
  for (int i = 0; message[i]; i++) {
    char ch = message[i];
    // checks wether or not the Letter in the message is withing the uppercase
    // alphabet. this works all the uppercase letters are listed alphabetically
    // with 1 number between them in the ASCI system
    if (ch >= 'A' && ch <= 'Z') {
      // this line encrypts the message first it takes the current character and
      // subtracts 'A' by doing this we get a number between 1-26 then it adds
      // shifts the letters the specified amoount. then it uses %26 to make sure
      // we are still in the 0-25 range. and makes the alphabet wrap around if
      // neccesary. Then we add A again to get get the correct ASCI letter out.
      message[i] = ((ch - 'A' + shift) % 26) + 'A';
    }
  }
  printf("encrypted message is %s", message);
}
// caesar decrypt function that works the same way as encrypt function only
// difference is it subtracts by shift amount instead of adding
void caesar_decrypt(char *message) {
  for (int i = 0; message[i]; i++) {
    char ch = message[i];
    if (ch >= 'A' && ch <= 'Z') {
      message[i] = ((ch - 'A' - shift) % 26) + 'A';
    }
  }
  printf("Decrypted message is %s", message);
}
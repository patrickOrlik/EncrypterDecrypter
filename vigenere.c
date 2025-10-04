#include <stdio.h>
#include <string.h>
// Vigenere Encrypt function that encrypts a message using a user specified key
void Vigenere_encrypt(char *message, char *key) {
  int KeyLength =
      strlen(key); // Defining an integer that describes the Length of the Key

  for (int i = 0; message[i]; i++) {
    char ch = message[i];
    // this line makes sure the key wraps around using modulus. if keylength is
    // bigger than i it will just use i. but if i is bigger than keylength it
    // will loop around. For example keylength = 5 i = 6 i % keylength = 1
    char wrap = key[i % KeyLength];
    // checks wether or not the Letter in the message is withing the uppercase
    // alphabet. this works all the uppercase letters are listed alphabetically
    // with 1 number between them in the ASCI system
    if (ch >= 'A' && ch <= 'Z') {
      // this line encrypts the message first it takes the current character and
      // subtracts 'A' by doing this we get a number between 1-26 then it adds
      // the keyletter. then we it uses %26 to make sure we are still in between
      // the 0-25 range. and makes the alphabet wrap around if neccesary. Then
      // we add A again to get get the correct ASCI letter out.
      message[i] = ((ch - 'A' + (wrap - 'A')) % 26) + 'A';
    }
  }
  printf("encrypted message is %s", message);
}
// Vigenere decrypt funtion that Decrypts a message using a user specified key.
// Works almost the same way as Vigenere encrypt but with slight changes Read
// "vigenere Encrypt" for detailed line by linex explanations
void Vigenere_decrypt(char *message, char *key) {
  int KeyLength =
      strlen(key); // Defining an integer that describes the length of the key

  for (int i = 0; message[i]; i++) {
    char ch = message[i];
    char wrap = key[i % KeyLength];

    if (ch >= 'A' && ch <= 'Z') {
      // almost identical to vigenere encrypt. But this time we subtract by
      // (wrap-A). we also add 26 before using modulus. this is done to prevent
      // a negative result
      message[i] = ((ch - 'A' - (wrap - 'A') + 26) % 26) + 'A';
    }
  }
  printf("Decrypted message is %s", message);
}
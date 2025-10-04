#include <caesar.h>
#include <stdio.h>
#include <vigenere.h>

// simple EncryptDecrypt program that allows both encryption and decryption
// using the Vigenere and Caesar systems

int main(int argc, char *argv[]) {
  // if statement that Checks wether or not the Caesar system has been chosen.
  if (*argv[1] == 'c') {
    if (*argv[2] == 'e') {
      caesar_encrypt(argv[3]);

    } else {
      puts("you chose ceasar decrypt");
      caesar_decrypt(argv[3]);
    }
  }
  // if statement that checks wether or not the Vigenere system has been chosen
  if (*argv[1] == 'v') {
    if (*argv[2] == 'e') {
      puts("you chose Vigenere Encrypt");
      Vigenere_encrypt(argv[3], argv[4]);

    } else {
      puts("you chose Vigenere decrypt");
      Vigenere_decrypt(argv[3], argv[4]);
    }
  }
}

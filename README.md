A simple encryption program that can encrypt and decrypt using the Vigenere and Ceasar ciphyer systems. this project is made as an assignment for my programming class

USER GUIDE:
The program uses the command line interface. 
user input should be written like this
./a.exe 1.(Ciphersystem[c/v]) 2.(Encrypt/Decrypt[e/d]) 3.(message) 4.key
1.the first user input determines wether the Caesar or the Vigenere system is used.
2.second user input determines wether the Message shall be encrypted or decrypted
3.third user input is the ciphertext
4.Fourth user input only matters if the Vigenere system is chosen. in that case the input is the cipherkey.
Example of a run using the caesar system:
./a.exe c e POTATO
-encrypted message is SRWDWR

Example of a run using the Vigenere system:
./a.exe v e THECAKEISALIE GLADOS
-you chose Vigenere Encrypt
-encrypted message is ZSEFOCKTSDZAK

Modularization approach: i have tried to modularize this program as much possible. i have made two different libraries one for each cipher system and made sure both Encryption and decryption for both ciphersystems is its own function.

Made By patrick Orlik

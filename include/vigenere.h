

/**
 * @brief Decrypts a message encrypted with the Vigenère cipher.
 *
 * @param message Pointer to the message string to decrypt.
 * @param key Pointer to the key string.
 *@note only works with uppercase letters.
 */
void Vigenere_decrypt(char *message, char *key);
/**
 * @brief encrypts a message encrypted with the Vigenère cipher.
 *
 * @param message Pointer to the message string to decrypt.
 * @param key Pointer to the key string.
 * @note Only works with uppercase letters!.
 */
void Vigenere_encrypt(char *message, char *key);

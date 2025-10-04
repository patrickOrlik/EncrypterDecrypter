/**
 * @brief encrypts a message encrypted with the Caesar cipher.
 *
 * @param message Pointer to the message string to decrypt.
 * @param key Pointer to the key string.
 * @note Only works with uppercase letters!.
 */
void caesar_encrypt(char *message);
/**
 * @brief Decrypts a message encrypted with the Caesar cipher.
 *
 * @param message Pointer to the message string to decrypt.
 * @param key Pointer to the key string.
 * @note Only works with uppercase letters!.
 */
void caesar_decrypt(char *message);
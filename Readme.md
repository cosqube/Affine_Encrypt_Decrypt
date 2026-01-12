# Affine Cipher Encryption/Decryption

This project is a simple C++ implementation of the **Affine Cipher** for both encryption and decryption of text input. It supports alphabetic text with case preservation and spaces and can handle basic symbols by preserving them.

## What is the Affine Cipher?

The Affine Cipher is a type of monoalphabetic substitution cipher that uses a mathematical formula to encrypt and decrypt each letter in the plaintext. 
The encryption function for a single letter is:

```
E(x) = (a * x + b) mod 26
```

Where:
- `x` is the index of the letter (A=0, B=1, ..., Z=25)
- `a` and `b` are keys of the cipher. `a` must be coprime with 26.
- The operation is performed separately for uppercase and lowercase letters.

The decryption function is:

```
D(y) = a_inv * (y - b) mod 26
```
Where `a_inv` is the modular multiplicative inverse of `a` modulo 26.

## Features

- Encrypts plaintext using the Affine cipher with configurable keys (`a` and `b`)
- Decrypts ciphertext with the same keys
- Preserves spaces and non-alphabetic characters
- Handles both uppercase and lowercase letters

## Usage

1. **Compile the program:**

   ```bash
   g++ -o affine_cipher affine_cipher.cpp
   ```

2. **Run the executable:**

   ```bash
   ./affine_cipher
   ```

3. **Interact with the program:**
   - Enter the text you wish to encrypt
   - Enter a value for `a` (must be coprime to 26, e.g., 1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25)
   - Enter a value for `b` (an integer between 0 and 25)
   - The program will display the encrypted text
   - Then enter ciphertext to decrypt, using the same keys

## Example

```
Enter text to encrypt: hello World!
Enter slope A (must be coprime to 26): 5
Enter slope B: 8
Encrypted text: rclla Gtlad!

Enter text to decrypt: rclla Gtlad!
Decrypted text: hello World!
```

## Notes

- The value of `a` **must** be coprime to 26, or the cipher will not work correctly for decryption. Common choices are: 1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25.
- Non-alphabetic characters (like punctuation) are not encrypted and are preserved as-is.

## License

This project is provided for educational purposes.

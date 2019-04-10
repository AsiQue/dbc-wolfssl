// Test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "../../wolfssl/wolfcrypt/aes.h"

int main()
{

	Aes aes;

	#define LEN 48

	unsigned char key[32] = { 0 };
	unsigned char iv[16] = { 0 };
	unsigned char plain[LEN] = { 0 };
	unsigned char cipher[LEN];
	int i;

	for (i = 0; i < 32; i++)
		key[i] = i & 0xFF;

	for (i = 0; i < 16; i++)
		iv[i] = i & 0xFF;

	for (i = 0; i < LEN; i++)
		plain[i] = (i*i) & 0xFF;

	wc_AesSetKey(&aes, key, 32, iv, AES_DECRYPTION);
	wc_AesCbcDecrypt(&aes, cipher, plain, LEN);

    return 0;
}


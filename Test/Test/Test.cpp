// Test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "../../wolfssl/wolfcrypt/sha256.h"

int main()
{

	#define LEN 1000

	wc_Sha256 sha_ctx;
	unsigned char data[LEN] = { 0 };
	unsigned char hash[32];
	int i;
	for (i = 0; i < LEN; i++)
		data[i] = i & 0xFF;

	wc_InitSha256(&sha_ctx);
	wc_Sha256Update(&sha_ctx, data, LEN);
	wc_Sha256Final(&sha_ctx, hash);

    return 0;
}


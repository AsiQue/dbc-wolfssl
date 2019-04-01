// Test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "../../wolfssl/wolfcrypt/sha256.h"

int main()
{

	wc_Sha256 sha_ctx;
	unsigned char data[1] = { 0 };
	unsigned char hash[32];

	wc_InitSha256(&sha_ctx);
	wc_Sha256Update(&sha_ctx, data, 1);
	wc_Sha256Final(&sha_ctx, hash);

    return 0;
}


/*****************************************************************************
 * dbc_wolfssl.c
 *****************************************************************************/

/* Place program arguments in the following string, or delete the definition
   if arguments will be passed from the command line. */
#pragma symbolic_ref
const char __argv_string[] = "-abc -xyz";

#include <wolfssl/wolfcrypt/sha256.h>

int main( int argc, char *argv[] )
{
	/* Begin adding your custom code here */
	
	wc_Sha256 sha_ctx;
	unsigned char data[1] = {0};
	unsigned char hash[32];
	
	wc_InitSha256(&sha_ctx);
	wc_Sha256Update(&sha_ctx, data, 1);
	wc_Sha256Final(&sha_ctx, hash);
	
	return 0;
}

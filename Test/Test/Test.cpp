// Test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

#include <wolfssl\wolfcrypt\rsa.h>
#include <wolfssl\wolfcrypt\sha256.h>
#include <wolfssl\wolfcrypt\aes.h>

int main()
{
	RsaKey key;

	byte n[512] = {0x98, 0xC5, 0x5D, 0x4F, 0x99, 0x20, 0x1F, 0x80, 0x91, 0xEC, 0x0A, 0xC4, 0xAC, 0x10, 0x4A, 0xE1,
				   0x6A, 0xED, 0x21, 0x7D, 0x3A, 0x3F, 0xAA, 0x33, 0xA4, 0xE8, 0xC4, 0x04, 0x02, 0x89, 0x78, 0xE6,
				   0x8B, 0xD5, 0xFE, 0xBA, 0xB9, 0xB1, 0xE7, 0x01, 0x32, 0x6E, 0x13, 0x65, 0x87, 0xE4, 0xEE, 0x43,
				   0x9E, 0x4D, 0x52, 0x67, 0xD0, 0x84, 0x86, 0x05, 0x01, 0x0B, 0xA6, 0xAB, 0xDE, 0xC0, 0x1F, 0x6E,
				   0x43, 0xE6, 0x5E, 0xED, 0xFE, 0xCE, 0x61, 0x87, 0x43, 0x34, 0x72, 0x21, 0x15, 0x1F, 0xF6, 0x81,
				   0xBD, 0xA4, 0x93, 0xDC, 0x16, 0x53, 0x80, 0x3F, 0x42, 0xC4, 0xCC, 0x83, 0xC8, 0xC0, 0x76, 0x78,
				   0x6E, 0xA8, 0x9D, 0x69, 0xC9, 0xC1, 0xA4, 0xF6, 0xCF, 0x7A, 0x43, 0x30, 0x4E, 0xAD, 0xFB, 0x27,
				   0xAC, 0x98, 0x23, 0x75, 0x6A, 0xDC, 0x0F, 0xC2, 0xB9, 0xCF, 0xE7, 0xF5, 0x07, 0x6E, 0x37, 0x86,
				   0x08, 0xC9, 0xCD, 0xE9, 0xCB, 0xD6, 0xCE, 0xB0, 0xAF, 0xB6, 0x27, 0x55, 0xEA, 0x05, 0xA9, 0xE0,
				   0x3F, 0x2C, 0xED, 0xC0, 0x4D, 0xA6, 0x34, 0x71, 0x2A, 0x95, 0xD4, 0x78, 0x35, 0x66, 0x42, 0x1D,
				   0x51, 0xC7, 0x5A, 0x5B, 0xAA, 0x1C, 0xB9, 0x21, 0x95, 0x24, 0xD5, 0xBE, 0xF7, 0x3F, 0x5F, 0xFB,
				   0x58, 0x1E, 0x66, 0xB8, 0x9C, 0x6F, 0x06, 0xF4, 0xF5, 0x00, 0xC0, 0x76, 0x9D, 0x54, 0x7B, 0xED,
				   0xAB, 0x33, 0x24, 0x33, 0xAC, 0xEC, 0xB3, 0x57, 0x6B, 0xA0, 0x7B, 0x3B, 0x08, 0x5F, 0xA7, 0xFD,
				   0x48, 0x69, 0x49, 0xCC, 0x75, 0xFD, 0xF0, 0x91, 0xC5, 0x46, 0xCA, 0x5B, 0x38, 0xF4, 0x9C, 0xC4,
				   0xF6, 0x64, 0x83, 0x4C, 0x35, 0xF7, 0x5B, 0xFF, 0x2F, 0xDF, 0xAB, 0x55, 0x8C, 0xE8, 0xF2, 0xE0,
				   0xB4, 0xEE, 0xDE, 0x0F, 0x1C, 0x5B, 0xBE, 0xD9, 0xF9, 0x82, 0x65, 0xC9, 0x89, 0x05, 0xDA, 0x86,
				   0x83, 0xD1, 0x52, 0x9D, 0xE4, 0x12, 0x97, 0xE3, 0xA9, 0x5D, 0x0A, 0x92, 0x28, 0x93, 0xE3, 0xC2,
				   0xC7, 0x4E, 0x72, 0xB0, 0x57, 0xF3, 0x1A, 0x48, 0xDC, 0x8B, 0x49, 0xBF, 0x02, 0x64, 0x92, 0x11,
				   0x9F, 0x7F, 0xB8, 0xBB, 0xB4, 0x80, 0xC8, 0x6D, 0xCF, 0x6D, 0x08, 0x8D, 0xBB, 0xA2, 0xAC, 0x1D,
				   0x55, 0x5F, 0xDF, 0x46, 0x38, 0x40, 0xC3, 0x41, 0xEF, 0xBD, 0x6E, 0xDE, 0x48, 0x39, 0xAC, 0x74,
				   0x63, 0xDF, 0x5A, 0x9B, 0x57, 0xA1, 0xBB, 0x1A, 0x7D, 0x4C, 0x81, 0xB9, 0xEC, 0x31, 0xED, 0x7A,
				   0xF6, 0xB7, 0x9D, 0xF6, 0xD8, 0x29, 0xF7, 0x62, 0x16, 0x8F, 0xE3, 0xBB, 0x9A, 0xC2, 0xA3, 0x66,
				   0x65, 0x11, 0xDF, 0x1C, 0x23, 0x08, 0x3B, 0xEC, 0x1F, 0x1B, 0xE8, 0xF2, 0x26, 0x99, 0xD9, 0xCC,
				   0x77, 0x2E, 0x1B, 0x50, 0xD2, 0xEE, 0x85, 0x1F, 0x6C, 0xED, 0x65, 0x96, 0x0D, 0x13, 0x19, 0xC0,
				   0x75, 0xE7, 0x03, 0x5A, 0xFB, 0x32, 0x36, 0x69, 0x00, 0xBC, 0x54, 0xD9, 0x35, 0x2E, 0x76, 0x6B,
				   0x92, 0x33, 0x96, 0xD5, 0x96, 0xBB, 0xFC, 0x2C, 0xC5, 0x7B, 0x56, 0xEF, 0xE9, 0x10, 0x32, 0x53,
				   0x81, 0x56, 0xE3, 0x73, 0xA0, 0x69, 0xD4, 0x48, 0x54, 0x08, 0xD3, 0xDD, 0x1F, 0x9E, 0x48, 0x64,
				   0x71, 0xC2, 0x87, 0xE8, 0x73, 0xC2, 0x3C, 0x93, 0x2B, 0x38, 0x60, 0x3E, 0xB1, 0x3C, 0x85, 0xF5,
				   0x2D, 0x4D, 0x02, 0xA0, 0x47, 0x0F, 0x98, 0xAE, 0x70, 0x6B, 0x06, 0x22, 0x2B, 0xCE, 0x82, 0x72,
				   0x8B, 0xC5, 0xDB, 0x54, 0x55, 0x6E, 0x51, 0x5D, 0xC3, 0xFE, 0xBF, 0x05, 0x3D, 0x2A, 0x06, 0xC0,
				   0x80, 0xDE, 0x2F, 0x38, 0x16, 0x46, 0xF2, 0x2B, 0x25, 0x09, 0x6D, 0x98, 0x9E, 0xD2, 0xE3, 0x69,
				   0x0E, 0xB8, 0xAA, 0xE5, 0x62, 0x7C, 0xA6, 0x64, 0x03, 0x70, 0x11, 0xFE, 0xB5, 0x1D, 0x1A, 0xDF};
	byte e[1] = {0x03};

	byte B[512] = {0x05, 0x0D, 0x13, 0x11, 0x01, 0xDD, 0x9F, 0x41, 0xBD, 0x0D, 0x2B, 0x11, 0xB9, 0x1D, 0x37, 0x01,
				   0x75, 0x8D, 0x43, 0x91, 0x71, 0xDD, 0xCF, 0x41, 0x2D, 0x8D, 0x5B, 0x91, 0x29, 0x1D, 0x67, 0x01,
				   0xE5, 0x0D, 0x73, 0x11, 0xE1, 0xDD, 0xFF, 0x41, 0x9D, 0x0D, 0x8B, 0x11, 0x99, 0x1D, 0x97, 0x01,
				   0x55, 0x8D, 0xA3, 0x91, 0x51, 0xDD, 0x2F, 0x41, 0x0D, 0x8D, 0xBB, 0x91, 0x09, 0x1D, 0xC7, 0x01,
				   0xC5, 0x0D, 0xD3, 0x11, 0xC1, 0xDD, 0x5F, 0x41, 0x7D, 0x0D, 0xEB, 0x11, 0x79, 0x1D, 0xF7, 0x01,
				   0x35, 0x8D, 0x03, 0x91, 0x31, 0xDD, 0x8F, 0x41, 0xED, 0x8D, 0x1B, 0x91, 0xE9, 0x1D, 0x27, 0x01,
				   0xA5, 0x0D, 0x33, 0x11, 0xA1, 0xDD, 0xBF, 0x41, 0x5D, 0x0D, 0x4B, 0x11, 0x59, 0x1D, 0x57, 0x01,
				   0x15, 0x8D, 0x63, 0x91, 0x11, 0xDD, 0xEF, 0x41, 0xCD, 0x8D, 0x7B, 0x91, 0xC9, 0x1D, 0x87, 0x01,
				   0x85, 0x0D, 0x93, 0x11, 0x81, 0xDD, 0x1F, 0x41, 0x3D, 0x0D, 0xAB, 0x11, 0x39, 0x1D, 0xB7, 0x01,
				   0xF5, 0x8D, 0xC3, 0x91, 0xF1, 0xDD, 0x4F, 0x41, 0xAD, 0x8D, 0xDB, 0x91, 0xA9, 0x1D, 0xE7, 0x01,
				   0x65, 0x0D, 0xF3, 0x11, 0x61, 0xDD, 0x7F, 0x41, 0x1D, 0x0D, 0x0B, 0x11, 0x19, 0x1D, 0x17, 0x01,
				   0xD5, 0x8D, 0x23, 0x91, 0xD1, 0xDD, 0xAF, 0x41, 0x8D, 0x8D, 0x3B, 0x91, 0x89, 0x1D, 0x47, 0x01,
				   0x45, 0x0D, 0x53, 0x11, 0x41, 0xDD, 0xDF, 0x41, 0xFD, 0x0D, 0x6B, 0x11, 0xF9, 0x1D, 0x77, 0x01,
				   0xB5, 0x8D, 0x83, 0x91, 0xB1, 0xDD, 0x0F, 0x41, 0x6D, 0x8D, 0x9B, 0x91, 0x69, 0x1D, 0xA7, 0x01,
				   0x25, 0x0D, 0xB3, 0x11, 0x21, 0xDD, 0x3F, 0x41, 0xDD, 0x0D, 0xCB, 0x11, 0xD9, 0x1D, 0xD7, 0x01,
				   0x95, 0x8D, 0xE3, 0x91, 0x91, 0xDD, 0x6F, 0x41, 0x4D, 0x8D, 0xFB, 0x91, 0x49, 0x1D, 0x07, 0x01,
				   0x05, 0x0D, 0x13, 0x11, 0x01, 0xDD, 0x9F, 0x41, 0xBD, 0x0D, 0x2B, 0x11, 0xB9, 0x1D, 0x37, 0x01,
				   0x75, 0x8D, 0x43, 0x91, 0x71, 0xDD, 0xCF, 0x41, 0x2D, 0x8D, 0x5B, 0x91, 0x29, 0x1D, 0x67, 0x01,
				   0xE5, 0x0D, 0x73, 0x11, 0xE1, 0xDD, 0xFF, 0x41, 0x9D, 0x0D, 0x8B, 0x11, 0x99, 0x1D, 0x97, 0x01,
				   0x55, 0x8D, 0xA3, 0x91, 0x51, 0xDD, 0x2F, 0x41, 0x0D, 0x8D, 0xBB, 0x91, 0x09, 0x1D, 0xC7, 0x01,
				   0xC5, 0x0D, 0xD3, 0x11, 0xC1, 0xDD, 0x5F, 0x41, 0x7D, 0x0D, 0xEB, 0x11, 0x79, 0x1D, 0xF7, 0x01,
				   0x35, 0x8D, 0x03, 0x91, 0x31, 0xDD, 0x8F, 0x41, 0xED, 0x8D, 0x1B, 0x91, 0xE9, 0x1D, 0x27, 0x01,
				   0xA5, 0x0D, 0x33, 0x11, 0xA1, 0xDD, 0xBF, 0x41, 0x5D, 0x0D, 0x4B, 0x11, 0x59, 0x1D, 0x57, 0x01,
				   0x15, 0x8D, 0x63, 0x91, 0x11, 0xDD, 0xEF, 0x41, 0xCD, 0x8D, 0x7B, 0x91, 0xC9, 0x1D, 0x87, 0x01,
				   0x85, 0x0D, 0x93, 0x11, 0x81, 0xDD, 0x1F, 0x41, 0x3D, 0x0D, 0xAB, 0x11, 0x39, 0x1D, 0xB7, 0x01,
				   0xF5, 0x8D, 0xC3, 0x91, 0xF1, 0xDD, 0x4F, 0x41, 0xAD, 0x8D, 0xDB, 0x91, 0xA9, 0x1D, 0xE7, 0x01,
				   0x65, 0x0D, 0xF3, 0x11, 0x61, 0xDD, 0x7F, 0x41, 0x1D, 0x0D, 0x0B, 0x11, 0x19, 0x1D, 0x17, 0x01,
				   0xD5, 0x8D, 0x23, 0x91, 0xD1, 0xDD, 0xAF, 0x41, 0x8D, 0x8D, 0x3B, 0x91, 0x89, 0x1D, 0x47, 0x01,
				   0x45, 0x0D, 0x53, 0x11, 0x41, 0xDD, 0xDF, 0x41, 0xFD, 0x0D, 0x6B, 0x11, 0xF9, 0x1D, 0x77, 0x01,
				   0xB5, 0x8D, 0x83, 0x91, 0xB1, 0xDD, 0x0F, 0x41, 0x6D, 0x8D, 0x9B, 0x91, 0x69, 0x1D, 0xA7, 0x01,
				   0x25, 0x0D, 0xB3, 0x11, 0x21, 0xDD, 0x3F, 0x41, 0xDD, 0x0D, 0xCB, 0x11, 0xD9, 0x1D, 0xD7, 0x01,
				   0x95, 0x8D, 0xE3, 0x91, 0x91, 0xDD, 0x6F, 0x41, 0x4D, 0x8D, 0xFB, 0x91, 0x49, 0x1D, 0x07, 0x01};
	byte sig[512] = { 0 };

	byte test_sig[512] = {0x37, 0xA9, 0x79, 0x01, 0x87, 0xB3, 0xAC, 0xB2, 0x5B, 0x78, 0x64, 0x8E, 0x9C, 0x5B, 0xC2, 0xBB,
						  0x70, 0x40, 0x5B, 0xD9, 0x87, 0x27, 0xE1, 0xDB, 0x26, 0x7B, 0x33, 0x11, 0x31, 0x55, 0x6C, 0xB9,
						  0xD3, 0x28, 0xF2, 0x3A, 0xA9, 0x22, 0x86, 0xD0, 0xC3, 0xCB, 0x56, 0x6B, 0x6E, 0xEF, 0x7F, 0x29,
						  0xBD, 0xD5, 0xF8, 0x93, 0x23, 0x7B, 0x76, 0x05, 0x42, 0x7C, 0xD0, 0x60, 0x38, 0x53, 0x28, 0x80,
						  0xF9, 0x4D, 0x66, 0x15, 0xC5, 0x3C, 0xE2, 0x83, 0xF0, 0xF9, 0xCC, 0xFA, 0x15, 0xDB, 0x79, 0xF5,
						  0x00, 0x93, 0x56, 0x5D, 0xD8, 0x04, 0x9A, 0xAD, 0xF2, 0x5C, 0xC4, 0x14, 0xBF, 0xE2, 0x63, 0x0B,
						  0xBB, 0x23, 0x86, 0x48, 0x9D, 0x03, 0x6E, 0xDB, 0x89, 0x64, 0x31, 0xF4, 0x36, 0x71, 0xF8, 0x52,
						  0x96, 0x17, 0x4C, 0xDC, 0xDA, 0x6F, 0xCA, 0x30, 0xAE, 0xC3, 0xED, 0x44, 0x31, 0x51, 0xFC, 0x18,
						  0x31, 0x0B, 0xAF, 0x81, 0x0D, 0x34, 0x05, 0x89, 0xFD, 0x72, 0xE1, 0xBD, 0xDD, 0x1D, 0x82, 0xE8,
						  0xF7, 0xC0, 0xAB, 0x45, 0x5A, 0xC6, 0xD7, 0x57, 0xBE, 0xA7, 0xC8, 0xB9, 0x6A, 0x43, 0x3B, 0xC6,
						  0x2C, 0x0C, 0xDE, 0xF4, 0x52, 0x2B, 0xEA, 0x2A, 0x0D, 0x17, 0x76, 0xDF, 0x3F, 0x24, 0x4D, 0x6B,
						  0x56, 0x9D, 0xC0, 0x69, 0xCA, 0x0E, 0xAB, 0x65, 0xDB, 0x4B, 0xBE, 0xDE, 0x00, 0x49, 0xBD, 0x5E,
						  0x7E, 0xA2, 0x55, 0x05, 0x88, 0x96, 0x75, 0x97, 0xC8, 0x3D, 0x41, 0x9E, 0xED, 0x68, 0x34, 0xC4,
						  0xC3, 0xE7, 0x81, 0xAD, 0xD6, 0x2F, 0x8C, 0xD0, 0xA3, 0x80, 0x12, 0xED, 0x69, 0xCB, 0xC4, 0xCE,
						  0xD4, 0x1A, 0x31, 0x38, 0x21, 0x95, 0xC3, 0x85, 0xC9, 0x74, 0x6A, 0xBE, 0xAE, 0x1E, 0x65, 0x09,
						  0x39, 0x06, 0xCC, 0xF0, 0x2C, 0xC6, 0x9A, 0x3F, 0xE7, 0x9E, 0x48, 0x26, 0x15, 0x4B, 0xC5, 0x01,
						  0xC8, 0x5B, 0x15, 0x0C, 0xB9, 0x05, 0x3C, 0x28, 0x18, 0x43, 0x7F, 0x5D, 0x1E, 0xCF, 0xC5, 0xFC,
						  0x61, 0x1F, 0x66, 0xD8, 0xF2, 0xB0, 0xF2, 0x4F, 0x22, 0xE0, 0x8E, 0x51, 0x9D, 0x12, 0x14, 0x36,
						  0x8E, 0x66, 0xFC, 0x89, 0x19, 0xE6, 0x97, 0x26, 0x57, 0x54, 0xE1, 0xEA, 0x25, 0x0E, 0x64, 0x48,
						  0xF0, 0xB8, 0xA0, 0xB3, 0x89, 0x95, 0x14, 0x1B, 0xA7, 0xAC, 0x3E, 0xD8, 0xA6, 0x29, 0xA6, 0xED,
						  0x75, 0x78, 0x72, 0x59, 0xB6, 0x5C, 0x01, 0x20, 0xCD, 0x04, 0xD4, 0xDA, 0x35, 0xE3, 0x71, 0x76,
						  0xD1, 0x57, 0x4F, 0xB2, 0xB7, 0x43, 0x60, 0x50, 0xFC, 0xFA, 0xA8, 0xAB, 0x14, 0xA5, 0xC4, 0x30,
						  0x70, 0x66, 0xE5, 0x46, 0xCA, 0xE5, 0x69, 0x0A, 0xCA, 0x96, 0xE0, 0x13, 0x60, 0x7D, 0xB7, 0x36,
						  0xFD, 0xE1, 0x1B, 0xB5, 0x0A, 0xC0, 0x47, 0x41, 0xC8, 0x0A, 0x46, 0x36, 0x06, 0x64, 0x2C, 0xFB,
						  0xA1, 0x30, 0x1A, 0x87, 0x25, 0x5B, 0xBE, 0xD5, 0x7B, 0x4A, 0x84, 0xD8, 0x44, 0x00, 0x15, 0xD0,
						  0x18, 0x05, 0x05, 0x43, 0xB9, 0xB9, 0x33, 0xCA, 0xED, 0xEF, 0xEA, 0x62, 0x7C, 0xAB, 0x69, 0x04,
						  0xBD, 0x5F, 0xB0, 0xF8, 0x85, 0x44, 0xD5, 0x2F, 0xF9, 0x8C, 0x2A, 0x5C, 0x4A, 0xAE, 0x22, 0x6E,
						  0x0B, 0x55, 0xD9, 0x88, 0xA0, 0xFC, 0xAC, 0xCE, 0xF5, 0x7B, 0xDE, 0xF7, 0x90, 0x5D, 0xBB, 0x34,
						  0x0D, 0xB2, 0x98, 0xCB, 0xC1, 0x2C, 0xCE, 0x70, 0x6A, 0xD6, 0xCE, 0x81, 0x67, 0xC2, 0xB7, 0x31,
						  0x9D, 0x09, 0x6F, 0xEC, 0x97, 0xDA, 0x29, 0x3F, 0xDD, 0xF5, 0xCF, 0x65, 0xB8, 0xA3, 0x3E, 0x75,
						  0xDE, 0x20, 0x39, 0x15, 0xB7, 0x19, 0xE4, 0x38, 0xAF, 0x0D, 0x9E, 0x5A, 0xFC, 0xAA, 0x37, 0x40,
						  0xEC, 0x43, 0xEC, 0x02, 0x16, 0xBF, 0x6B, 0x18, 0x92, 0x11, 0xB5, 0x81, 0x3A, 0x14, 0xA8, 0x4A};

	wc_InitRsaKey(&key, NULL);
	wc_RsaPublicKeyDecodeRaw(n, 512, e, 1, &key);

	int a = wc_RsaPublicEncrypt_ex(B, 512, sig, 512, &key, NULL, WC_RSA_NO_PAD, WC_HASH_TYPE_SHA256, WC_MGF1SHA256, NULL, 0);

	if (XMEMCMP(sig, test_sig, 512) != 0) {
		return 1;
	}

	byte sha256_input1[256] = {0x9B, 0xDB, 0xC5, 0xBA, 0xE9, 0x79, 0x6A, 0x13, 0x15, 0x60, 0x55, 0x9E, 0x72, 0x14, 0x11, 0x80, 
							   0x83, 0x7F, 0xBC, 0xC0, 0x92, 0x28, 0xB0, 0xBE, 0x16, 0x7F, 0x09, 0x54, 0x71, 0xB8, 0xE3, 0x00, 
							   0xAC, 0x45, 0xD7, 0x62, 0x6C, 0x90, 0xFB, 0x34, 0x5D, 0x3C, 0xFD, 0x84, 0x4A, 0x35, 0x13, 0xF3, 
							   0xF8, 0x40, 0x8F, 0x17, 0xFF, 0xBD, 0x40, 0xE3, 0x50, 0x73, 0x23, 0xCD, 0xD6, 0x72, 0x56, 0xE0, 
							   0x6C, 0xE5, 0x4C, 0xF0, 0xA6, 0x87, 0x93, 0x3D, 0x06, 0xDF, 0xF0, 0x2D, 0xE4, 0xE6, 0xF9, 0x10, 
							   0x90, 0x86, 0xEB, 0x67, 0x0D, 0xAE, 0xD4, 0x63, 0xC9, 0x44, 0xEC, 0x1A, 0x9A, 0xC1, 0xCA, 0xC1, 
							   0xFA, 0xDB, 0x4B, 0x78, 0x03, 0x5E, 0x70, 0x14, 0xF6, 0xF0, 0x32, 0x9A, 0x6F, 0xDF, 0x55, 0xA7, 
							   0x93, 0x7A, 0xBC, 0x02, 0x51, 0xDE, 0xE1, 0xC2, 0xF7, 0xC2, 0xD4, 0xFC, 0x2F, 0xF4, 0x87, 0xEA, 
							   0x20, 0x63, 0x71, 0x1B, 0xA1, 0xC7, 0x4D, 0x48, 0x5B, 0xA4, 0x51, 0xB6, 0x12, 0x89, 0xB6, 0x40, 
							   0x14, 0xCD, 0x6D, 0xAD, 0xAD, 0x07, 0x6F, 0xE9, 0x5E, 0xBB, 0x4E, 0x4A, 0xAD, 0x12, 0x8A, 0xBF, 
							   0xBF, 0xE6, 0x3E, 0x7C, 0x75, 0x66, 0x36, 0x1F, 0x3C, 0xF2, 0xF9, 0xF5, 0x0F, 0xEA, 0xF5, 0x22, 
							   0x8E, 0x50, 0x37, 0x4C, 0xB5, 0x1D, 0xD4, 0x98, 0x5D, 0xFD, 0x35, 0x89, 0x7C, 0x06, 0xD7, 0xBD, 
							   0x91, 0x80, 0x28, 0x31, 0xD1, 0x06, 0xFC, 0x59, 0xF2, 0x33, 0xF6, 0x37, 0x48, 0x60, 0x45, 0xAA, 
							   0x27, 0x30, 0xBE, 0x63, 0xCA, 0x8F, 0x47, 0x24, 0x78, 0x27, 0x96, 0x72, 0xDB, 0x88, 0x79, 0xCB, 
							   0xAF, 0xA3, 0xED, 0x3D, 0x06, 0xD8, 0xC5, 0xB6, 0xA4, 0xB0, 0x7F, 0x18, 0xA7, 0x8A, 0xBB, 0xFD, 
							   0x5F, 0x4D, 0x67, 0xDA, 0xC1, 0xC3, 0x31, 0x85, 0x40, 0x46, 0x0D, 0x40, 0xAB, 0x2E, 0x3C, 0xE5};


	byte sha256_expected_output1[32] = {0xE0, 0xB4, 0x17, 0x82, 0x19, 0xEE, 0x00, 0x1B, 0xBC, 0xD1, 0xEE, 0x1B, 0x50, 0xA5, 0x25, 0xE8, 
									    0xB2, 0x26, 0x1A, 0x55, 0x7F, 0x92, 0xBC, 0x80, 0x6A, 0x88, 0x88, 0x8C, 0x62, 0xCC, 0x6F, 0x50};

	byte sha256_input2[512] = {0x5B, 0x24, 0x76, 0xE4, 0xED, 0xAF, 0xAD, 0x3E, 0xF4, 0x74, 0xFB, 0x71, 0xF1, 0x6C, 0xAB, 0x7B, 
							   0x0F, 0x80, 0x81, 0xB5, 0x82, 0x94, 0xDD, 0x30, 0xDD, 0x53, 0x80, 0xB7, 0xB3, 0x4E, 0x6D, 0x34, 
							   0x90, 0xB4, 0x03, 0x4A, 0x11, 0xAC, 0x00, 0x94, 0xA9, 0xA1, 0x07, 0x1C, 0xAB, 0x7E, 0x7A, 0xE5, 
							   0x07, 0x31, 0x66, 0x47, 0x38, 0x95, 0xB1, 0x3A, 0xCB, 0xCE, 0x53, 0xC9, 0x3F, 0x82, 0xBF, 0xB8, 
							   0x40, 0xD6, 0xCE, 0x15, 0xCE, 0x7A, 0xEE, 0x8E, 0x7A, 0x15, 0xB0, 0x64, 0xF3, 0x6E, 0x31, 0x62, 
							   0x10, 0x85, 0x8C, 0xBE, 0xB0, 0x60, 0x09, 0x71, 0xD3, 0x7F, 0xF6, 0xDF, 0xAF, 0xC9, 0x6C, 0x35, 
							   0x7F, 0xEB, 0x1D, 0xAE, 0xBB, 0x61, 0xF6, 0x4E, 0xCC, 0x3F, 0x23, 0xEF, 0x65, 0xD2, 0xA1, 0xB7, 
							   0xB7, 0x42, 0x33, 0xF3, 0x84, 0x4C, 0x8E, 0x93, 0x6B, 0x76, 0x0F, 0xEA, 0xF3, 0xA2, 0x46, 0xB3, 
							   0x39, 0x65, 0x90, 0x88, 0xBE, 0xF0, 0x73, 0xB9, 0xAB, 0x44, 0x00, 0xD0, 0x33, 0xEA, 0xAF, 0x89, 
							   0x13, 0x5F, 0xA6, 0x63, 0x18, 0x9D, 0x9C, 0xAE, 0x56, 0x19, 0x0E, 0xEE, 0xB1, 0x0D, 0x3A, 0xFD, 
							   0x25, 0x63, 0x92, 0xF3, 0xB1, 0x8C, 0xD5, 0xCF, 0x3F, 0x59, 0x13, 0x69, 0x17, 0x00, 0x34, 0x80, 
							   0x58, 0x87, 0x81, 0x8E, 0x0A, 0x42, 0x84, 0xBD, 0xAE, 0x0D, 0x98, 0x8A, 0x0F, 0xF7, 0xEC, 0x21, 
							   0x4C, 0x05, 0x79, 0x70, 0x30, 0x87, 0x71, 0x9C, 0x92, 0x31, 0x48, 0x9F, 0x99, 0x0F, 0x22, 0x81, 
							   0xCD, 0x49, 0xFB, 0x13, 0xAE, 0x8E, 0xEE, 0x74, 0x61, 0x6B, 0x30, 0x40, 0xA5, 0xF2, 0xB0, 0xCE, 
							   0xF3, 0xEC, 0x55, 0x68, 0xDD, 0x44, 0x52, 0x4A, 0x5C, 0x95, 0x6E, 0x61, 0x06, 0xAC, 0x1C, 0x95, 
							   0x1B, 0x7E, 0x16, 0xB6, 0x53, 0x47, 0x83, 0x06, 0x19, 0x0E, 0x53, 0x6D, 0x1F, 0x79, 0x67, 0x2A, 
							   0xD7, 0xA3, 0x64, 0x5F, 0x38, 0x71, 0x8F, 0x8F, 0xEF, 0xB7, 0x0A, 0x9D, 0x17, 0x90, 0xE6, 0xA2, 
							   0xB5, 0xCE, 0xB4, 0x5E, 0x93, 0x29, 0xFB, 0xE1, 0x82, 0xFA, 0x44, 0xD1, 0x68, 0xAD, 0x81, 0x1A, 
							   0x6E, 0xE3, 0x48, 0x9F, 0x36, 0x20, 0xED, 0x8A, 0xB2, 0xBF, 0x40, 0xD7, 0x0C, 0x1F, 0x6B, 0x52, 
							   0xBC, 0x86, 0xE4, 0xA6, 0x5A, 0x0D, 0x3C, 0xE5, 0xF5, 0x89, 0x2D, 0x7F, 0x71, 0x63, 0x23, 0xA9, 
							   0xBF, 0xA4, 0xE4, 0xDA, 0x8C, 0x78, 0x75, 0xB2, 0xE1, 0x9B, 0x6A, 0xFB, 0xBE, 0xAC, 0xD6, 0xEB, 
							   0x0C, 0x20, 0x4C, 0x24, 0x2F, 0x2C, 0xEE, 0x94, 0xE6, 0x61, 0xCD, 0x8E, 0x70, 0x76, 0x6C, 0x17, 
							   0xDC, 0x74, 0x91, 0x1C, 0x89, 0x44, 0x19, 0x87, 0x0A, 0x3D, 0x5D, 0x6A, 0x13, 0xD3, 0xE9, 0xCF, 
							   0x51, 0x71, 0xE3, 0x52, 0xC9, 0xDB, 0x17, 0x16, 0xB7, 0x10, 0xE8, 0xF1, 0x14, 0xCB, 0xDC, 0xD2, 
							   0xD5, 0x6E, 0x43, 0x5E, 0x26, 0x9F, 0xE0, 0x49, 0x66, 0x01, 0x45, 0x3A, 0x2E, 0xFF, 0x00, 0x8A, 
							   0xC7, 0x29, 0x78, 0xB0, 0x9B, 0x7D, 0xD8, 0x1C, 0xA3, 0x27, 0xA8, 0x91, 0xA4, 0x6D, 0xE1, 0x8C, 
							   0x37, 0x17, 0xA7, 0xFD, 0x27, 0x14, 0x36, 0x6B, 0x28, 0x29, 0x49, 0x55, 0x5B, 0x4A, 0xE9, 0x77, 
							   0x59, 0xA2, 0x8D, 0x2D, 0x64, 0xB2, 0x56, 0xEC, 0x8A, 0x9C, 0x7A, 0x19, 0x14, 0x30, 0xA8, 0x57, 
							   0x74, 0xDC, 0x23, 0x63, 0x52, 0x69, 0x8D, 0x51, 0x5F, 0xC3, 0xB4, 0x0E, 0xBD, 0x27, 0x1E, 0x65, 
							   0x95, 0xD0, 0x06, 0xC7, 0x52, 0xFE, 0x4F, 0xFE, 0x81, 0x85, 0x5A, 0xA3, 0xF5, 0xA9, 0x44, 0x20, 
							   0xFA, 0x56, 0x44, 0xFF, 0xF1, 0xDB, 0x42, 0x94, 0x6C, 0x87, 0x07, 0x41, 0xA7, 0xA7, 0xD8, 0x83, 
							   0x1A, 0xA6, 0x18, 0x48, 0x1A, 0x80, 0x13, 0x07, 0xCD, 0x4A, 0xF9, 0xE3, 0x21, 0xC1, 0xAB, 0x5B};


	byte sha256_expected_output2[32] = {0xAA, 0xF6, 0x79, 0xEF, 0x80, 0xE0, 0x42, 0x66, 0xDB, 0xE0, 0xA2, 0x8E, 0xF9, 0xBF, 0x13, 0x10, 
										0xAB, 0xBE, 0x2E, 0xCD, 0xE6, 0x82, 0xF0, 0x6C, 0x26, 0x3F, 0x10, 0x7C, 0xDE, 0xE2, 0xA2, 0x8C};

	byte sha256_output[32] = { 0 };

	Sha256 sha;
	wc_InitSha256(&sha);
	wc_Sha256Update(&sha, sha256_input1, 256);
	wc_Sha256Final(&sha, sha256_output);

	if (XMEMCMP(sha256_expected_output1, sha256_output, 32) != 0) {
		return 2;
	}

	wc_InitSha256(&sha);
	wc_Sha256Update(&sha, sha256_input2, 512);
	wc_Sha256Final(&sha, sha256_output);

	if (XMEMCMP(sha256_expected_output2, sha256_output, 32) != 0) {
		return 3;
	}


	Aes aes;

	byte aes_key[32] = {0x60, 0x3D, 0xEB, 0x10, 0x15, 0xCA, 0x71, 0xBE, 0x2B, 0x73, 0xAE, 0xF0, 0x85, 0x7D, 0x77, 0x81, 
				 		0x1F, 0x35, 0x2C, 0x07, 0x3B, 0x61, 0x08, 0xD7, 0x2D, 0x98, 0x10, 0xA3, 0x09, 0x14, 0xDF, 0xF4};

	byte aes_iv1[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
	byte aes_input1[16] = {0x6B, 0xC1, 0xBE, 0xE2, 0x2E, 0x40, 0x9F, 0x96, 0xE9, 0x3D, 0x7E, 0x11, 0x73, 0x93, 0x17, 0x2A};
	byte aes_expected_output1[16] = {0xF5, 0x8C, 0x4C, 0x04, 0xD6, 0xE5, 0xF1, 0xBA, 0x77, 0x9E, 0xAB, 0xFB, 0x5F, 0x7B, 0xFB, 0xD6};

	byte aes_output[256] = { 0 };
	byte aes_input[256] = { 0 };

	wc_AesSetKey(&aes, aes_key, 32, aes_iv1, AES_ENCRYPTION);
	wc_AesCbcEncrypt(&aes, aes_output, aes_input1, 16);
	if (XMEMCMP(aes_output, aes_expected_output1, 16) != 0) {
		return 4;
	}

	wc_AesSetKey(&aes, aes_key, 32, aes_iv1, AES_DECRYPTION);
	wc_AesCbcDecrypt(&aes, aes_input, aes_output, 16);
	if (XMEMCMP(aes_input, aes_input1, 16) != 0) {
		return 5;
	}

	byte aes_iv2[16] = {0xF5, 0x8C, 0x4C, 0x04, 0xD6, 0xE5, 0xF1, 0xBA, 0x77, 0x9E, 0xAB, 0xFB, 0x5F, 0x7B, 0xFB, 0xD6};
	byte aes_input2[48] = {0xAE, 0x2D, 0x8A, 0x57, 0x1E, 0x03, 0xAC, 0x9C, 0x9E, 0xB7, 0x6F, 0xAC, 0x45, 0xAF, 0x8E, 0x51, 
						   0x30, 0xC8, 0x1C, 0x46, 0xA3, 0x5C, 0xE4, 0x11, 0xE5, 0xFB, 0xC1, 0x19, 0x1A, 0x0A, 0x52, 0xEF, 
						   0xF6, 0x9F, 0x24, 0x45, 0xDF, 0x4F, 0x9B, 0x17, 0xAD, 0x2B, 0x41, 0x7B, 0xE6, 0x6C, 0x37, 0x10};
	byte aes_expected_output2[48] = {0x9C, 0xFC, 0x4E, 0x96, 0x7E, 0xDB, 0x80, 0x8D, 0x67, 0x9F, 0x77, 0x7B, 0xC6, 0x70, 0x2C, 0x7D, 
									 0x39, 0xF2, 0x33, 0x69, 0xA9, 0xD9, 0xBA, 0xCF, 0xA5, 0x30, 0xE2, 0x63, 0x04, 0x23, 0x14, 0x61, 
									 0xB2, 0xEB, 0x05, 0xE2, 0xC3, 0x9B, 0xE9, 0xFC, 0xDA, 0x6C, 0x19, 0x07, 0x8C, 0x6A, 0x9D, 0x1B};

	wc_AesSetKey(&aes, aes_key, 32, aes_iv2, AES_ENCRYPTION);
	wc_AesCbcEncrypt(&aes, aes_output, aes_input2, 48);
	if (XMEMCMP(aes_output, aes_expected_output2, 48) != 0) {
		return 6;
	}

	wc_AesSetKey(&aes, aes_key, 32, aes_iv2, AES_DECRYPTION);
	wc_AesCbcDecrypt(&aes, aes_input, aes_output, 48);
	if (XMEMCMP(aes_input, aes_input2, 48) != 0) {
		return 7;
	}

    return 0;
}


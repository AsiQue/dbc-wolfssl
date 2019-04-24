# Generated by the VisualDSP++ IDDE

# Note:  Any changes made to this Makefile will be lost the next time the
# matching project file is loaded into the IDDE.  If you wish to preserve
# changes, rename this file and run it externally to the IDDE.

# The syntax of this Makefile is such that GNU Make v3.77 or higher is
# required.

# The current working directory should be the directory in which this
# Makefile resides.

# Supported targets:
#     dbc_wolfssl_Debug
#     dbc_wolfssl_Debug_clean

# Define this variable if you wish to run this Makefile on a host
# other than the host that created it and VisualDSP++ may be installed
# in a different directory.

ADI_DSP=C:\Program Files (x86)\Analog Devices\VisualDSP 5.1.2


# $VDSP is a gmake-friendly version of ADI_DIR

empty:=
space:= $(empty) $(empty)
VDSP_INTERMEDIATE=$(subst \,/,$(ADI_DSP))
VDSP=$(subst $(space),\$(space),$(VDSP_INTERMEDIATE))

RM=cmd /C del /F /Q

#
# Begin "dbc_wolfssl_Debug" configuration
#

ifeq ($(MAKECMDGOALS),dbc_wolfssl_Debug)

dbc_wolfssl_Debug : ./Debug/dbc_wolfssl.dxe 

Debug/aes.doj :wolfcrypt/src/aes.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/aes.h wolfssl/wolfcrypt/cpuid.h wolfssl/wolfcrypt/logging.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\aes.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\aes.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\aes.doj -MM

Debug/dbc_wolfssl.doj :dbc_wolfssl.c wolfssl/wolfcrypt/rsa.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/integer.h wolfssl/wolfcrypt/random.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/mpi_class.h wolfssl/wolfcrypt/mpi_superclass.h wolfssl/wolfcrypt/wolfmath.h wolfssl/wolfcrypt/hash.h 
	@echo ".\dbc_wolfssl.c"
	$(VDSP)/cc21k.exe -c .\dbc_wolfssl.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\dbc_wolfssl.doj -MM

Debug/error.doj :wolfcrypt/src/error.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h 
	@echo ".\wolfcrypt\src\error.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\error.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\error.doj -MM

Debug/hash.doj :wolfcrypt/src/hash.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/logging.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/hash.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/hmac.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\hash.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\hash.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\hash.doj -MM

Debug/hmac.doj :wolfcrypt/src/hmac.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/hmac.h wolfssl/wolfcrypt/hash.h wolfssl/wolfcrypt/sha256.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\hmac.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\hmac.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\hmac.doj -MM

Debug/integer.doj :wolfcrypt/src/integer.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/integer.h wolfssl/wolfcrypt/random.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/mpi_class.h wolfssl/wolfcrypt/mpi_superclass.h wolfssl/wolfcrypt/wolfmath.h 
	@echo ".\wolfcrypt\src\integer.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\integer.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\integer.doj -MM

Debug/logging.doj :wolfcrypt/src/logging.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/logging.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/error-crypt.h 
	@echo ".\wolfcrypt\src\logging.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\logging.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\logging.doj -MM

Debug/misc.doj :wolfcrypt/src/misc.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/misc.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h 
	@echo ".\wolfcrypt\src\misc.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\misc.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\misc.doj -MM

Debug/random.doj :wolfcrypt/src/random.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/random.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/cpuid.h 
	@echo ".\wolfcrypt\src\random.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\random.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\random.doj -MM

Debug/rsa.doj :wolfcrypt/src/rsa.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/rsa.h wolfssl/wolfcrypt/integer.h wolfssl/wolfcrypt/random.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/mpi_class.h wolfssl/wolfcrypt/mpi_superclass.h wolfssl/wolfcrypt/wolfmath.h wolfssl/wolfcrypt/hash.h wolfssl/wolfcrypt/logging.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\rsa.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\rsa.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\rsa.doj -MM

Debug/sha256.doj :wolfcrypt/src/sha256.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/cpuid.h wolfssl/wolfcrypt/hash.h wolfssl/wolfcrypt/logging.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\sha256.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\sha256.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\sha256.doj -MM

Debug/wolfmath.doj :wolfcrypt/src/wolfmath.c wolfssl/wolfcrypt/settings.h wolfssl/wolfcrypt/visibility.h wolfssl/wolfcrypt/integer.h wolfssl/wolfcrypt/types.h wolfssl/wolfcrypt/wc_port.h $(VDSP)/21k/include/time.h $(VDSP)/21k/include/yvals.h $(VDSP)/21k/include/xcycle_count.h $(VDSP)/21k/include/limits.h $(VDSP)/21k/include/cycle_count_21xxx.h $(VDSP)/21k/include/stdlib.h $(VDSP)/21k/include/string.h $(VDSP)/21k/include/ctype.h wolfssl/wolfcrypt/random.h wolfssl/wolfcrypt/sha256.h wolfssl/wolfcrypt/error-crypt.h wolfssl/wolfcrypt/mpi_class.h wolfssl/wolfcrypt/mpi_superclass.h wolfssl/wolfcrypt/wolfmath.h wolfssl/wolfcrypt/logging.h wolfcrypt/src/misc.c wolfssl/wolfcrypt/misc.h 
	@echo ".\wolfcrypt\src\wolfmath.c"
	$(VDSP)/cc21k.exe -c .\wolfcrypt\src\wolfmath.c -file-attr ProjectName=dbc_wolfssl -g -structs-do-not-overlap -no-multiline -D NO_MD5 -D NO_SHA -D NO_MD5 -D NO_MD4 -D WOLFCRYPT_ONLY -D SINGLE_THREADED -D NO_FILESYSTEM -D NO_WOLFSSL_MEMORY -D WOLFSSL_HAVE_MIN -D WOLFSSL_HAVE_MAX -D WC_NO_RNG -D NO_ASN -D WC_RSA_NO_PADDING -D NO_WOLFSSL_SMALL_STACK -D DBC -double-size-32 -warn-protos -proc ADSP-21060 -o .\Debug\wolfmath.doj -MM

./Debug/dbc_wolfssl.dxe :$(VDSP)/21k/ldf/ADSP-21060.LDF $(VDSP)/21k/lib/060_hdr.doj ./Debug/aes.doj ./Debug/dbc_wolfssl.doj ./Debug/error.doj ./Debug/hash.doj ./Debug/hmac.doj ./Debug/integer.doj ./Debug/logging.doj ./Debug/misc.doj ./Debug/random.doj ./Debug/rsa.doj ./Debug/sha256.doj ./Debug/wolfmath.doj $(VDSP)/21k/lib/libc.dlb $(VDSP)/21k/lib/libdsp.dlb $(VDSP)/21k/lib/libio.dlb $(VDSP)/21k/lib/libcpp.dlb 
	@echo "Linking..."
	$(VDSP)/cc21k.exe .\Debug\aes.doj .\Debug\dbc_wolfssl.doj .\Debug\error.doj .\Debug\hash.doj .\Debug\hmac.doj .\Debug\integer.doj .\Debug\logging.doj .\Debug\misc.doj .\Debug\random.doj .\Debug\rsa.doj .\Debug\sha256.doj .\Debug\wolfmath.doj -map .\Debug\dbc_wolfssl.map.xml -flags-link -ip -L .\Debug -flags-link -e -add-debug-libpaths -flags-link -od,.\Debug -o .\Debug\dbc_wolfssl.dxe -proc ADSP-21060 -MM

endif

ifeq ($(MAKECMDGOALS),dbc_wolfssl_Debug_clean)

dbc_wolfssl_Debug_clean:
	-$(RM) "Debug\aes.doj"
	-$(RM) "Debug\dbc_wolfssl.doj"
	-$(RM) "Debug\error.doj"
	-$(RM) "Debug\hash.doj"
	-$(RM) "Debug\hmac.doj"
	-$(RM) "Debug\integer.doj"
	-$(RM) "Debug\logging.doj"
	-$(RM) "Debug\misc.doj"
	-$(RM) "Debug\random.doj"
	-$(RM) "Debug\rsa.doj"
	-$(RM) "Debug\sha256.doj"
	-$(RM) "Debug\wolfmath.doj"
	-$(RM) ".\Debug\dbc_wolfssl.dxe"
	-$(RM) ".\Debug\*.ipa"
	-$(RM) ".\Debug\*.opa"
	-$(RM) ".\Debug\*.ti"
	-$(RM) ".\Debug\*.pgi"
	-$(RM) ".\*.rbld"

endif



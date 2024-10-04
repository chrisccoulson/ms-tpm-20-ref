
// FILE GENERATED BY TpmExtractCode: DO NOT EDIT

#if CC_RSA_Decrypt  // Command must be enabled

#  ifndef _TPM_INCLUDE_PRIVATE_PROTOTYPES_RSA_DECRYPT_FP_H_
#    define _TPM_INCLUDE_PRIVATE_PROTOTYPES_RSA_DECRYPT_FP_H_

// Input structure definition
typedef struct
{
    TPMI_DH_OBJECT       keyHandle;
    TPM2B_PUBLIC_KEY_RSA cipherText;
    TPMT_RSA_DECRYPT     inScheme;
    TPM2B_DATA           label;
} RSA_Decrypt_In;

// Output structure definition
typedef struct
{
    TPM2B_PUBLIC_KEY_RSA message;
} RSA_Decrypt_Out;

// Response code modifiers
#    define RC_RSA_Decrypt_keyHandle  (TPM_RC_H + TPM_RC_1)
#    define RC_RSA_Decrypt_cipherText (TPM_RC_P + TPM_RC_1)
#    define RC_RSA_Decrypt_inScheme   (TPM_RC_P + TPM_RC_2)
#    define RC_RSA_Decrypt_label      (TPM_RC_P + TPM_RC_3)

// Function prototype
TPM_RC
TPM2_RSA_Decrypt(RSA_Decrypt_In* in, RSA_Decrypt_Out* out);

#  endif  // _TPM_INCLUDE_PRIVATE_PROTOTYPES_RSA_DECRYPT_FP_H_
#endif    // CC_RSA_Decrypt

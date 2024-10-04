
// FILE GENERATED BY TpmExtractCode: DO NOT EDIT

#if CC_Sign  // Command must be enabled

#  ifndef _TPM_INCLUDE_PRIVATE_PROTOTYPES_SIGN_FP_H_
#    define _TPM_INCLUDE_PRIVATE_PROTOTYPES_SIGN_FP_H_

// Input structure definition
typedef struct
{
    TPMI_DH_OBJECT    keyHandle;
    TPM2B_DIGEST      digest;
    TPMT_SIG_SCHEME   inScheme;
    TPMT_TK_HASHCHECK validation;
} Sign_In;

// Output structure definition
typedef struct
{
    TPMT_SIGNATURE signature;
} Sign_Out;

// Response code modifiers
#    define RC_Sign_keyHandle  (TPM_RC_H + TPM_RC_1)
#    define RC_Sign_digest     (TPM_RC_P + TPM_RC_1)
#    define RC_Sign_inScheme   (TPM_RC_P + TPM_RC_2)
#    define RC_Sign_validation (TPM_RC_P + TPM_RC_3)

// Function prototype
TPM_RC
TPM2_Sign(Sign_In* in, Sign_Out* out);

#  endif  // _TPM_INCLUDE_PRIVATE_PROTOTYPES_SIGN_FP_H_
#endif    // CC_Sign

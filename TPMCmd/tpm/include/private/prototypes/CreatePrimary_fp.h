
// FILE GENERATED BY TpmExtractCode: DO NOT EDIT

#if CC_CreatePrimary  // Command must be enabled

#  ifndef _TPM_INCLUDE_PRIVATE_PROTOTYPES_CREATEPRIMARY_FP_H_
#    define _TPM_INCLUDE_PRIVATE_PROTOTYPES_CREATEPRIMARY_FP_H_

// Input structure definition
typedef struct
{
    TPMI_RH_HIERARCHY      primaryHandle;
    TPM2B_SENSITIVE_CREATE inSensitive;
    TPM2B_PUBLIC           inPublic;
    TPM2B_DATA             outsideInfo;
    TPML_PCR_SELECTION     creationPCR;
} CreatePrimary_In;

// Output structure definition
typedef struct
{
    TPM_HANDLE          objectHandle;
    TPM2B_PUBLIC        outPublic;
    TPM2B_CREATION_DATA creationData;
    TPM2B_DIGEST        creationHash;
    TPMT_TK_CREATION    creationTicket;
    TPM2B_NAME          name;
} CreatePrimary_Out;

// Response code modifiers
#    define RC_CreatePrimary_primaryHandle (TPM_RC_H + TPM_RC_1)
#    define RC_CreatePrimary_inSensitive   (TPM_RC_P + TPM_RC_1)
#    define RC_CreatePrimary_inPublic      (TPM_RC_P + TPM_RC_2)
#    define RC_CreatePrimary_outsideInfo   (TPM_RC_P + TPM_RC_3)
#    define RC_CreatePrimary_creationPCR   (TPM_RC_P + TPM_RC_4)

// Function prototype
TPM_RC
TPM2_CreatePrimary(CreatePrimary_In* in, CreatePrimary_Out* out);

#  endif  // _TPM_INCLUDE_PRIVATE_PROTOTYPES_CREATEPRIMARY_FP_H_
#endif    // CC_CreatePrimary


// FILE GENERATED BY TpmExtractCode: DO NOT EDIT

#if CC_PolicyNV  // Command must be enabled

#  ifndef _TPM_INCLUDE_PRIVATE_PROTOTYPES_POLICYNV_FP_H_
#    define _TPM_INCLUDE_PRIVATE_PROTOTYPES_POLICYNV_FP_H_

// Input structure definition
typedef struct
{
    TPMI_RH_NV_AUTH  authHandle;
    TPMI_RH_NV_INDEX nvIndex;
    TPMI_SH_POLICY   policySession;
    TPM2B_OPERAND    operandB;
    UINT16           offset;
    TPM_EO           operation;
} PolicyNV_In;

// Response code modifiers
#    define RC_PolicyNV_authHandle    (TPM_RC_H + TPM_RC_1)
#    define RC_PolicyNV_nvIndex       (TPM_RC_H + TPM_RC_2)
#    define RC_PolicyNV_policySession (TPM_RC_H + TPM_RC_3)
#    define RC_PolicyNV_operandB      (TPM_RC_P + TPM_RC_1)
#    define RC_PolicyNV_offset        (TPM_RC_P + TPM_RC_2)
#    define RC_PolicyNV_operation     (TPM_RC_P + TPM_RC_3)

// Function prototype
TPM_RC
TPM2_PolicyNV(PolicyNV_In* in);

#  endif  // _TPM_INCLUDE_PRIVATE_PROTOTYPES_POLICYNV_FP_H_
#endif    // CC_PolicyNV

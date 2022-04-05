/*
 * File: Bitwise.h
 *
 * Code generated for Simulink model 'Bitwise'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 23:04:08 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Bitwise_h_
#define RTW_HEADER_Bitwise_h_
#ifndef Bitwise_COMMON_INCLUDES_
#define Bitwise_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Bitwise_COMMON_INCLUDES_ */

#include "Bitwise_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
  uint8_T In2;                         /* '<Root>/In2' */
} ExtU_Bitwise_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
  uint8_T Out4;                        /* '<Root>/Out4' */
  uint8_T Out5;                        /* '<Root>/Out5' */
  uint8_T Out6;                        /* '<Root>/Out6' */
} ExtY_Bitwise_T;

/* Real-time Model Data Structure */
struct tag_RTM_Bitwise_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Bitwise_T Bitwise_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Bitwise_T Bitwise_Y;

/* Model entry point functions */
extern void Bitwise_initialize(void);
extern void Bitwise_step(void);
extern void Bitwise_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Bitwise_T *const Bitwise_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Bitwise'
 */
#endif                                 /* RTW_HEADER_Bitwise_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

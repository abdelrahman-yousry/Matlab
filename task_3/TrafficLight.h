/*
 * File: Alarm.h
 *
 * Code generated for Simulink model 'Alarm'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Mar 10 18:01:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Alarm_h_
#define RTW_HEADER_Alarm_h_
#ifndef Alarm_COMMON_INCLUDES_
#define Alarm_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Alarm_COMMON_INCLUDES_ */

#include "Alarm_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c2_Alarm;          /* '<Root>/Chart1' */
  uint8_T is_c2_Alarm;                 /* '<Root>/Chart1' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart1' */
} DW_Alarm_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T RedLed;                       /* '<Root>/RedLed' */
  real_T GreenLed;                     /* '<Root>/GreenLed' */
  real_T YellowLed;                    /* '<Root>/YellowLed' */
} ExtY_Alarm_T;

/* Real-time Model Data Structure */
struct tag_RTM_Alarm_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Alarm_T Alarm_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Alarm_T Alarm_Y;

/* Model entry point functions */
extern void Alarm_initialize(void);
extern void Alarm_step(void);
extern void Alarm_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Alarm_T *const Alarm_M;

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
 * '<Root>' : 'Alarm'
 * '<S1>'   : 'Alarm/Chart1'
 */
#endif                                 /* RTW_HEADER_Alarm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

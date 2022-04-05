/*
 * File: switch_led_logic.h
 *
 * Code generated for Simulink model 'switch_led_logic'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 14:09:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_switch_led_logic_h_
#define RTW_HEADER_switch_led_logic_h_
#ifndef switch_led_logic_COMMON_INCLUDES_
#define switch_led_logic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* switch_led_logic_COMMON_INCLUDES_ */

#include "switch_led_logic_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_switch_led_logic;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_switch_led_logic_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_switch_led_logic_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_switch_led_logic_T;

/* Real-time Model Data Structure */
struct tag_RTM_switch_led_logic_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_switch_led_logic_T switch_led_logic_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_switch_led_logic_T switch_led_logic_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_switch_led_logic_T switch_led_logic_Y;

/* Model entry point functions */
extern void switch_led_logic_initialize(void);
extern void switch_led_logic_step(void);
extern void switch_led_logic_terminate(void);

/* Real-time Model object */
extern RT_MODEL_switch_led_logic_T *const switch_led_logic_M;

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
 * '<Root>' : 'switch_led_logic'
 * '<S1>'   : 'switch_led_logic/Chart'
 * '<S2>'   : 'switch_led_logic/Function-Call Subsystem'
 * '<S3>'   : 'switch_led_logic/Function-Call Subsystem/LedStatus'
 * '<S4>'   : 'switch_led_logic/Function-Call Subsystem/SwitchStatus'
 */
#endif                                 /* RTW_HEADER_switch_led_logic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

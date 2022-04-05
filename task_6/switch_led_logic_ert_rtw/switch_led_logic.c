/*
 * File: switch_led_logic.c
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

#include "switch_led_logic.h"
#include "switch_led_logic_private.h"

/* Block states (default storage) */
DW_switch_led_logic_T switch_led_logic_DW;

/* External inputs (root inport signals with default storage) */
ExtU_switch_led_logic_T switch_led_logic_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_switch_led_logic_T switch_led_logic_Y;

/* Real-time model */
static RT_MODEL_switch_led_logic_T switch_led_logic_M_;
RT_MODEL_switch_led_logic_T *const switch_led_logic_M = &switch_led_logic_M_;

/* Model step function */
void switch_led_logic_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (switch_led_logic_DW.temporalCounter_i1 < 7U) {
    switch_led_logic_DW.temporalCounter_i1++;
  }

  if (switch_led_logic_DW.is_active_c3_switch_led_logic == 0U) {
    switch_led_logic_DW.is_active_c3_switch_led_logic = 1U;
    switch_led_logic_DW.temporalCounter_i1 = 0U;
  } else if (switch_led_logic_DW.temporalCounter_i1 >= 5) {
    /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
    /* Outport: '<Root>/Out1' incorporates:
     *  Inport: '<Root>/Input'
     *  Inport: '<S2>/In1'
     */
    switch_led_logic_Y.Out1 = switch_led_logic_U.Input;

    /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
    /*  Led  */
    /*  CheckSwitch  */
    switch_led_logic_DW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void switch_led_logic_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void switch_led_logic_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

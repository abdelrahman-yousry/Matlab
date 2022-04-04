/*
 * File: switch_Led.c
 *
 * Code generated for Simulink model 'switch_Led'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Apr  4 23:58:56 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "switch_Led.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void switch_Led_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (rtDW.temporalCounter_i1 < 7U) {
    rtDW.temporalCounter_i1++;
  }

  if (rtDW.is_active_c3_switch_Led == 0U) {
    rtDW.is_active_c3_switch_Led = 1U;
    rtDW.temporalCounter_i1 = 0U;
  } else if (rtDW.temporalCounter_i1 >= 5) {
    /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
    /* Outport: '<Root>/Out1' incorporates:
     *  Inport: '<Root>/Input'
     *  Inport: '<S2>/In1'
     */
    rtY.Out1 = rtU.Input;

    /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
    rtDW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void switch_Led_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

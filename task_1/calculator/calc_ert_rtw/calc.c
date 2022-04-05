/*
 * File: calc.c
 *
 * Code generated for Simulink model 'calc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 21:52:11 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "calc.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void calc_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S2>/Action Port'
   */
  /* If: '<Root>/If' incorporates:
   *  Inport: '<S2>/In1'
   *  Outport: '<Root>/Out4'
   */
  rtY.Out4 = 1.3333333333333333;

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
}

/* Model initialize function */
void calc_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Out1' */
  rtY.Out1 = 7.0;

  /* ConstCode for Outport: '<Root>/Out2' */
  rtY.Out2 = 1.0;

  /* ConstCode for Outport: '<Root>/Out3' */
  rtY.Out3 = 12.0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

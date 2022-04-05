/*
 * File: Bitwise.c
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

#include "Bitwise.h"
#include "Bitwise_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Bitwise_T Bitwise_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Bitwise_T Bitwise_Y;

/* Real-time model */
static RT_MODEL_Bitwise_T Bitwise_M_;
RT_MODEL_Bitwise_T *const Bitwise_M = &Bitwise_M_;

/* Model step function */
void Bitwise_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  Bitwise_Y.Out1 = (uint8_T)(Bitwise_U.In1 & Bitwise_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  Bitwise_Y.Out2 = (uint8_T)(Bitwise_U.In1 | Bitwise_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  Bitwise_Y.Out3 = (uint8_T)~Bitwise_Y.Out1;

  /* Outport: '<Root>/Out4' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator6'
   */
  Bitwise_Y.Out4 = (uint8_T)~(uint8_T)~Bitwise_Y.Out2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   */
  Bitwise_Y.Out5 = (uint8_T)(Bitwise_U.In1 ^ Bitwise_U.In2);

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator5'
   */
  Bitwise_Y.Out6 = (uint8_T)~Bitwise_U.In2;
}

/* Model initialize function */
void Bitwise_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Bitwise_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

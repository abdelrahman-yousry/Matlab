/*
 * File: Alarm.c
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

#include "Alarm.h"
#include "Alarm_private.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define Alarm_IN_Green                 ((uint8_T)1U)
#define Alarm_IN_Init                  ((uint8_T)2U)
#define Alarm_IN_Red                   ((uint8_T)3U)
#define Alarm_IN_Yellow                ((uint8_T)4U)

/* Block states (default storage) */
DW_Alarm_T Alarm_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Alarm_T Alarm_Y;

/* Real-time model */
static RT_MODEL_Alarm_T Alarm_M_;
RT_MODEL_Alarm_T *const Alarm_M = &Alarm_M_;

/* Model step function */
void Alarm_step(void)
{
  /* Chart: '<Root>/Chart1' */
  if (Alarm_DW.temporalCounter_i1 < 255U) {
    Alarm_DW.temporalCounter_i1++;
  }

  if (Alarm_DW.is_active_c2_Alarm == 0U) {
    Alarm_DW.is_active_c2_Alarm = 1U;
    Alarm_DW.is_c2_Alarm = Alarm_IN_Init;

    /* Outport: '<Root>/RedLed' */
    Alarm_Y.RedLed = 0.0;

    /* Outport: '<Root>/GreenLed' */
    Alarm_Y.GreenLed = 0.0;

    /* Outport: '<Root>/YellowLed' */
    Alarm_Y.YellowLed = 0.0;
  } else {
    switch (Alarm_DW.is_c2_Alarm) {
     case Alarm_IN_Green:
      if (Alarm_DW.temporalCounter_i1 >= 150U) {
        /* Outport: '<Root>/GreenLed' */
        Alarm_Y.GreenLed = 0.0;
        Alarm_DW.is_c2_Alarm = Alarm_IN_Yellow;
        Alarm_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/YellowLed' */
        Alarm_Y.YellowLed = 1.0;
      }
      break;

     case Alarm_IN_Init:
      Alarm_DW.is_c2_Alarm = Alarm_IN_Red;
      Alarm_DW.temporalCounter_i1 = 0U;

      /* Outport: '<Root>/RedLed' */
      Alarm_Y.RedLed = 1.0;
      break;

     case Alarm_IN_Red:
      if (Alarm_DW.temporalCounter_i1 >= 150U) {
        /* Outport: '<Root>/RedLed' */
        Alarm_Y.RedLed = 0.0;
        Alarm_DW.is_c2_Alarm = Alarm_IN_Green;
        Alarm_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/GreenLed' */
        Alarm_Y.GreenLed = 1.0;
      }
      break;

     default:
      /* case IN_Yellow: */
      if (Alarm_DW.temporalCounter_i1 >= 150U) {
        /* Outport: '<Root>/YellowLed' */
        Alarm_Y.YellowLed = 0.0;
        Alarm_DW.is_c2_Alarm = Alarm_IN_Red;
        Alarm_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/RedLed' */
        Alarm_Y.RedLed = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void Alarm_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Alarm_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

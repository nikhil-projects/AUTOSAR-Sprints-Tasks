/**
 *
 * \file SWC_HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/25/2020 04:13 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Move
 *
 */

void HeightMotor_Move (Impl_StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(step==MOTOR_STEP_MINUS)
	status = Rte_Call_rpIOSetHeight_IOSetbackword();
    else if (step==MOTOR_STEP_PLUS)
	status = Rte_Call_rpIOSetHeight_IOSetforword();
   else {
   }
	
}
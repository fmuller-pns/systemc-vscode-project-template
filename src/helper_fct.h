/****************************************************************************
 * Copyright (C) 2021 by Fabrice Muller                                     *
 *                                                                          *
 * This file is useful for SystemC course.                             *
 *                                                                          *
 ****************************************************************************/

/**
 * @file helper_fct.h
 * @author Fabrice Muller
 * @date 02 Nov. 2021
 * @brief Formatted display macro for SystemC
 *
 * @see https://github.com/fmuller-pns/systemc-vscode-project-template.git
 */

#ifndef _HELPER_FCT_H_
#define _HELPER_FCT_H_

#include <systemc.h>

/*
 * Examples:
 *
 * DISPLAY("Hello");
 * DISPLAY("N = " << myfloatvar << ", S = " << myintegervar);
 * 
*/

#define DISPLAY(msg) cout << sc_time_stamp() << ":\t"  << msg << endl;

#endif
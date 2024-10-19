/*
 * File:           E:\Documents\DIY Bluetooth Speakers\DSP\Test_Config\SigmaStudio_project\0_template_IC_1_PARAM.h
 *
 * Created:        Saturday, October 19, 2024 2:14:38 PM
 * Description:    0_template:IC 1 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2024 Analog Devices, Inc. All rights reserved.
 */
#ifndef __0_TEMPLATE_IC_1_PARAM_H__
#define __0_TEMPLATE_IC_1_PARAM_H__


/* Module S Splitter1_2 - Single Control Splitter*/
#define MOD_SSPLITTER1_2_COUNT                         1
#define MOD_SSPLITTER1_2_DEVICE                        "IC1"
#define MOD_SSPLITTER1_2_SINGLECTRLSPLIT2_ADDR         0
#define MOD_SSPLITTER1_2_SINGLECTRLSPLIT2_FIXPT        0x00800000
#define MOD_SSPLITTER1_2_SINGLECTRLSPLIT2_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SSPLITTER1_2_SINGLECTRLSPLIT2_TYPE         SIGMASTUDIOTYPE_FIXPOINT

/* Module S Splitter1_3 - Single Control Splitter*/
#define MOD_SSPLITTER1_3_COUNT                         1
#define MOD_SSPLITTER1_3_DEVICE                        "IC1"
#define MOD_SSPLITTER1_3_SINGLECTRLSPLIT3_ADDR         1
#define MOD_SSPLITTER1_3_SINGLECTRLSPLIT3_FIXPT        0x00800000
#define MOD_SSPLITTER1_3_SINGLECTRLSPLIT3_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SSPLITTER1_3_SINGLECTRLSPLIT3_TYPE         SIGMASTUDIOTYPE_FIXPOINT

/* Module Mg1 - Signal Merger*/
#define MOD_MG1_COUNT                                  1
#define MOD_MG1_DEVICE                                 "IC1"
#define MOD_MG1_SINGLECTRLMIXER19401_ADDR              2
#define MOD_MG1_SINGLECTRLMIXER19401_FIXPT             0x00400000
#define MOD_MG1_SINGLECTRLMIXER19401_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_MG1_SINGLECTRLMIXER19401_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module S Splitter1 - Single Control Splitter*/
#define MOD_SSPLITTER1_COUNT                           1
#define MOD_SSPLITTER1_DEVICE                          "IC1"
#define MOD_SSPLITTER1_SINGLECTRLSPLIT1_ADDR           3
#define MOD_SSPLITTER1_SINGLECTRLSPLIT1_FIXPT          0x00800000
#define MOD_SSPLITTER1_SINGLECTRLSPLIT1_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SSPLITTER1_SINGLECTRLSPLIT1_TYPE           SIGMASTUDIOTYPE_FIXPOINT

#endif

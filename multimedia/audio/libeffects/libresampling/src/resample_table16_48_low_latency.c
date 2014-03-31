/*****************************************************************************/
/*
 * Copyright (C) ST-Ericsson SA 2009,2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 *
 */

/**
 * ile   resample_table16_48_low_latency.c
 * rief  
 * uthor ST-Ericsson
 */
/*****************************************************************************/
#include "resample_local.h"

Float const YMEM resample_16_48_low_latency[91] = {
	FORMAT_FLOAT(0.000669859106704,MAXVAL),  		// 0
	FORMAT_FLOAT(0.004270581651119,MAXVAL),  		// 1
	FORMAT_FLOAT(0.015536235674513,MAXVAL),  		// 2
	FORMAT_FLOAT(0.040920708778299,MAXVAL),  		// 3
	FORMAT_FLOAT(0.085118795330103,MAXVAL),  		// 4
	FORMAT_FLOAT(0.145436723520789,MAXVAL),  		// 5
	FORMAT_FLOAT(0.207319031037620,MAXVAL),  		// 6
	FORMAT_FLOAT(0.245777384398829,MAXVAL),  		// 7
	FORMAT_FLOAT(0.235373725766725,MAXVAL),  		// 8
	FORMAT_FLOAT(0.165696633264782,MAXVAL),  		// 9
	FORMAT_FLOAT(0.053288212393409,MAXVAL),  		// 10
	FORMAT_FLOAT(-0.060081431478537,MAXVAL),  		// 11
	FORMAT_FLOAT(-0.126102582997161,MAXVAL),  		// 12
	FORMAT_FLOAT(-0.117142375104561,MAXVAL),  		// 13
	FORMAT_FLOAT(-0.044995374363098,MAXVAL),  		// 14
	FORMAT_FLOAT(0.043359998360777,MAXVAL),  		// 15
	FORMAT_FLOAT(0.093379720782304,MAXVAL),  		// 16
	FORMAT_FLOAT(0.077341503364365,MAXVAL),  		// 17
	FORMAT_FLOAT(0.011983297390280,MAXVAL),  		// 18
	FORMAT_FLOAT(-0.054020519877474,MAXVAL),  		// 19
	FORMAT_FLOAT(-0.074858312443504,MAXVAL),  		// 20
	FORMAT_FLOAT(-0.039832543266895,MAXVAL),  		// 21
	FORMAT_FLOAT(0.020657803940709,MAXVAL),  		// 22
	FORMAT_FLOAT(0.059674671410001,MAXVAL),  		// 23
	FORMAT_FLOAT(0.049784358681481,MAXVAL),  		// 24
	FORMAT_FLOAT(0.002732401005459,MAXVAL),  		// 25
	FORMAT_FLOAT(-0.041991929773668,MAXVAL),  		// 26
	FORMAT_FLOAT(-0.049655926676192,MAXVAL),  		// 27
	FORMAT_FLOAT(-0.017319333762803,MAXVAL),  		// 28
	FORMAT_FLOAT(0.025923216830226,MAXVAL),  		// 29
	FORMAT_FLOAT(0.044427970540178,MAXVAL),  		// 30
	FORMAT_FLOAT(0.025265341996258,MAXVAL),  		// 31
	FORMAT_FLOAT(-0.012829334905237,MAXVAL),  		// 32
	FORMAT_FLOAT(-0.037046790810174,MAXVAL),  		// 33
	FORMAT_FLOAT(-0.028564322051925,MAXVAL),  		// 34
	FORMAT_FLOAT(0.002868122368988,MAXVAL),  		// 35
	FORMAT_FLOAT(0.029159707661405,MAXVAL),  		// 36
	FORMAT_FLOAT(0.028757203473771,MAXVAL),  		// 37
	FORMAT_FLOAT(0.004252874107163,MAXVAL),  		// 38
	FORMAT_FLOAT(-0.021667247889489,MAXVAL),  		// 39
	FORMAT_FLOAT(-0.026988312862378,MAXVAL),  		// 40
	FORMAT_FLOAT(-0.008986982702026,MAXVAL),  		// 41
	FORMAT_FLOAT(0.015016438514288,MAXVAL),  		// 42
	FORMAT_FLOAT(0.024073202991426,MAXVAL),  		// 43
	FORMAT_FLOAT(0.011802447405747,MAXVAL),  		// 44
	FORMAT_FLOAT(-0.009391439516721,MAXVAL),  		// 45
	FORMAT_FLOAT(-0.020577421956982,MAXVAL),  		// 46
	FORMAT_FLOAT(-0.013116902110854,MAXVAL),  		// 47
	FORMAT_FLOAT(0.004841757552348,MAXVAL),  		// 48
	FORMAT_FLOAT(0.016904801473022,MAXVAL),  		// 49
	FORMAT_FLOAT(0.013304413093654,MAXVAL),  		// 50
	FORMAT_FLOAT(-0.001324356496265,MAXVAL),  		// 51
	FORMAT_FLOAT(-0.013328222350089,MAXVAL),  		// 52
	FORMAT_FLOAT(-0.012680832410255,MAXVAL),  		// 53
	FORMAT_FLOAT(-0.001249995591327,MAXVAL),  		// 54
	FORMAT_FLOAT(0.010029756732668,MAXVAL),  		// 55
	FORMAT_FLOAT(0.011513124045164,MAXVAL),  		// 56
	FORMAT_FLOAT(0.003000533647715,MAXVAL),  		// 57
	FORMAT_FLOAT(-0.007117379088025,MAXVAL),  		// 58
	FORMAT_FLOAT(-0.010015763926548,MAXVAL),  		// 59
	FORMAT_FLOAT(-0.004052809701569,MAXVAL),  		// 60
	FORMAT_FLOAT(0.004652078844687,MAXVAL),  		// 61
	FORMAT_FLOAT(0.008365066420557,MAXVAL),  		// 62
	FORMAT_FLOAT(0.004536303404493,MAXVAL),  		// 63
	FORMAT_FLOAT(-0.002658544186593,MAXVAL),  		// 64
	FORMAT_FLOAT(-0.006707545333393,MAXVAL),  		// 65
	FORMAT_FLOAT(-0.004587653092886,MAXVAL),  		// 66
	FORMAT_FLOAT(0.001122371788462,MAXVAL),  		// 67
	FORMAT_FLOAT(0.005152147443547,MAXVAL),  		// 68
	FORMAT_FLOAT(0.004336671802408,MAXVAL),  		// 69
	FORMAT_FLOAT(-0.000007107742605,MAXVAL),  		// 70
	FORMAT_FLOAT(-0.003787693761785,MAXVAL),  		// 71
	FORMAT_FLOAT(-0.003924759092384,MAXVAL),  		// 72
	FORMAT_FLOAT(-0.000763605337247,MAXVAL),  		// 73
	FORMAT_FLOAT(0.002674997146028,MAXVAL),  		// 74
	FORMAT_FLOAT(0.003521149940669,MAXVAL),  		// 75
	FORMAT_FLOAT(0.001348005988118,MAXVAL),  		// 76
	FORMAT_FLOAT(-0.001816155493840,MAXVAL),  		// 77
	FORMAT_FLOAT(-0.003383924085830,MAXVAL),  		// 78
	FORMAT_FLOAT(-0.002212687858238,MAXVAL),  		// 79
	FORMAT_FLOAT(0.000815104811684,MAXVAL),  		// 80
	FORMAT_FLOAT(0.003767275556891,MAXVAL),  		// 81
	FORMAT_FLOAT(0.005139079899906,MAXVAL),  		// 82
	FORMAT_FLOAT(0.004671680649566,MAXVAL),  		// 83
	FORMAT_FLOAT(0.003135995270920,MAXVAL),  		// 84
	FORMAT_FLOAT(0.001544924413477,MAXVAL),  		// 85
	FORMAT_FLOAT(0.000503401111652,MAXVAL),  		// 86
	FORMAT_FLOAT(0.000064141467129,MAXVAL),  		// 87
	FORMAT_FLOAT(-0.000024834153924,MAXVAL),  		// 88
	FORMAT_FLOAT(0.000000000000000,MAXVAL) ,  		// 89
	FORMAT_FLOAT(0.000000000000000,MAXVAL) };  		// 90
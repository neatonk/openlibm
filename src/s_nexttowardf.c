/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#include "cdefs-compat.h"
//__FBSDID("$FreeBSD: src/lib/msun/src/s_nexttowardf.c,v 1.3 2011/02/10 07:38:38 das Exp $");

#include <float.h>

#include "fpmath.h"
#include "openlibm.h"
#include "math_private.h"

#define	LDBL_INFNAN_EXP	(LDBL_MAX_EXP * 2 - 1)

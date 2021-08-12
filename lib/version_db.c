/* quirc -- QR-code recognition library
 * Copyright (C) 2010-2012 Daniel Beer <dlbeer@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "quirc_internal.h"

#ifdef __riscos
#define NAMED_ATTR(_name, _value) _value
#define NAMED_ATTR_START(_name)
#define NAMED_ATTR_END
#else
#define NAMED_ATTR(_name, _value) ._name = _value
#define NAMED_ATTR_START(_name) ._name =
#define NAMED_ATTR_END
#endif

const struct quirc_version_info quirc_version_db[QUIRC_MAX_VERSION + 1] = {
	    {0},
	    { /* Version 1 */
		    NAMED_ATTR(data_bytes, 26),
		    NAMED_ATTR_START(apat) {0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 26), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 26), NAMED_ATTR(dw, 19), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 26), NAMED_ATTR(dw, 9), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 26), NAMED_ATTR(dw, 13), NAMED_ATTR(ns, 1)}
		    }
	    },
	    { /* Version 2 */
		    NAMED_ATTR(data_bytes, 44),
		    NAMED_ATTR_START(apat) {6, 18, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 44), NAMED_ATTR(dw, 28), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 44), NAMED_ATTR(dw, 34), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 44), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 44), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 1)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 3 */
		    NAMED_ATTR(data_bytes, 70),
		    NAMED_ATTR_START(apat) {6, 22, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 70), NAMED_ATTR(dw, 44), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 70), NAMED_ATTR(dw, 55), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 35), NAMED_ATTR(dw, 13), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 35), NAMED_ATTR(dw, 17), NAMED_ATTR(ns, 2)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 4 */
		    NAMED_ATTR(data_bytes, 100),
		    NAMED_ATTR_START(apat) {6, 26, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 32), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 100), NAMED_ATTR(dw, 80), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 25), NAMED_ATTR(dw, 9), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 2)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 5 */
		    NAMED_ATTR(data_bytes, 134),
		    NAMED_ATTR_START(apat) {6, 30, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 67), NAMED_ATTR(dw, 43), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 134), NAMED_ATTR(dw, 108), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 33), NAMED_ATTR(dw, 11), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 33), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 2)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 6 */
		    NAMED_ATTR(data_bytes, 172),
		    NAMED_ATTR_START(apat) {6, 34, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 27), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 86), NAMED_ATTR(dw, 68), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 19), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 7 */
		    NAMED_ATTR(data_bytes, 196),
		    NAMED_ATTR_START(apat) {6, 22, 38, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 49), NAMED_ATTR(dw, 31), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 98), NAMED_ATTR(dw, 78), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 39), NAMED_ATTR(dw, 13), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 32), NAMED_ATTR(dw, 14), NAMED_ATTR(ns, 2)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 8 */
		    NAMED_ATTR(data_bytes, 242),
		    NAMED_ATTR_START(apat) {6, 24, 42, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 60), NAMED_ATTR(dw, 38), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 121), NAMED_ATTR(dw, 97), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 40), NAMED_ATTR(dw, 14), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 40), NAMED_ATTR(dw, 18), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 9 */
		    NAMED_ATTR(data_bytes, 292),
		    NAMED_ATTR_START(apat) {6, 26, 46, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 58), NAMED_ATTR(dw, 36), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 146), NAMED_ATTR(dw, 116), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 12), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 10 */
		    NAMED_ATTR(data_bytes, 346),
		    NAMED_ATTR_START(apat) {6, 28, 50, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 69), NAMED_ATTR(dw, 43), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 86), NAMED_ATTR(dw, 68), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 19), NAMED_ATTR(ns, 6)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 11 */
		    NAMED_ATTR(data_bytes, 404),
		    NAMED_ATTR_START(apat) {6, 30, 54, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 80), NAMED_ATTR(dw, 50), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 101), NAMED_ATTR(dw, 81), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 12), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 12 */
		    NAMED_ATTR(data_bytes, 466),
		    NAMED_ATTR_START(apat) {6, 32, 58, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 58), NAMED_ATTR(dw, 36), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 116), NAMED_ATTR(dw, 92), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 42), NAMED_ATTR(dw, 14), NAMED_ATTR(ns, 7)},
			    {NAMED_ATTR(bs, 46), NAMED_ATTR(dw, 20), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 13 */
		    NAMED_ATTR(data_bytes, 532),
		    NAMED_ATTR_START(apat) {6, 34, 62, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 59), NAMED_ATTR(dw, 37), NAMED_ATTR(ns, 8)},
			    {NAMED_ATTR(bs, 133), NAMED_ATTR(dw, 107), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 33), NAMED_ATTR(dw, 11), NAMED_ATTR(ns, 12)},
			    {NAMED_ATTR(bs, 44), NAMED_ATTR(dw, 20), NAMED_ATTR(ns, 8)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 14 */
		    NAMED_ATTR(data_bytes, 581),
		    NAMED_ATTR_START(apat) {6, 26, 46, 66, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 64), NAMED_ATTR(dw, 40), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 12), NAMED_ATTR(ns, 11)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 11)}
		    }
	    },
	    { /* Version 15 */
		    NAMED_ATTR(data_bytes, 655),
		    NAMED_ATTR_START(apat) {6, 26, 48, 70, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 65), NAMED_ATTR(dw, 41), NAMED_ATTR(ns, 5)},
			    {NAMED_ATTR(bs, 109), NAMED_ATTR(dw, 87), NAMED_ATTR(ns, 5)},
			    {NAMED_ATTR(bs, 36), NAMED_ATTR(dw, 12), NAMED_ATTR(ns, 11)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 5)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 16 */
		    NAMED_ATTR(data_bytes, 733),
		    NAMED_ATTR_START(apat) {6, 26, 50, 74, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 73), NAMED_ATTR(dw, 45), NAMED_ATTR(ns, 7)},
			    {NAMED_ATTR(bs, 122), NAMED_ATTR(dw, 98), NAMED_ATTR(ns, 5)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 19), NAMED_ATTR(ns, 15)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 17 */
		    NAMED_ATTR(data_bytes, 815),
		    NAMED_ATTR_START(apat) {6, 30, 54, 78, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 10)},
			    {NAMED_ATTR(bs, 135), NAMED_ATTR(dw, 107), NAMED_ATTR(ns, 1)},
			    {NAMED_ATTR(bs, 42), NAMED_ATTR(dw, 14), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 1)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 18 */
		    NAMED_ATTR(data_bytes, 901),
		    NAMED_ATTR_START(apat) {6, 30, 56, 82, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 69), NAMED_ATTR(dw, 43), NAMED_ATTR(ns, 9)},
			    {NAMED_ATTR(bs, 150), NAMED_ATTR(dw, 120), NAMED_ATTR(ns, 5)},
			    {NAMED_ATTR(bs, 42), NAMED_ATTR(dw, 14), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 17)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 19 */
		    NAMED_ATTR(data_bytes, 991),
		    NAMED_ATTR_START(apat) {6, 30, 58, 86, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 70), NAMED_ATTR(dw, 44), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 141), NAMED_ATTR(dw, 113), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 39), NAMED_ATTR(dw, 13), NAMED_ATTR(ns, 9)},
			    {NAMED_ATTR(bs, 47), NAMED_ATTR(dw, 21), NAMED_ATTR(ns, 17)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 20 */
		    NAMED_ATTR(data_bytes, 1085),
		    NAMED_ATTR_START(apat) {6, 34, 62, 90, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 67), NAMED_ATTR(dw, 41), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 135), NAMED_ATTR(dw, 107), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 43), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 15)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 15)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 21 */
		    NAMED_ATTR(data_bytes, 1156),
		    NAMED_ATTR_START(apat) {6, 28, 50, 72, 92, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 68), NAMED_ATTR(dw, 42), NAMED_ATTR(ns, 17)},
			    {NAMED_ATTR(bs, 144), NAMED_ATTR(dw, 116), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 46), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 17)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 22 */
		    NAMED_ATTR(data_bytes, 1258),
		    NAMED_ATTR_START(apat) {6, 26, 50, 74, 98, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 17)},
			    {NAMED_ATTR(bs, 139), NAMED_ATTR(dw, 111), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 37), NAMED_ATTR(dw, 13), NAMED_ATTR(ns, 34)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 7)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 23 */
		    NAMED_ATTR(data_bytes, 1364),
		    NAMED_ATTR_START(apat) {6, 30, 54, 78, 102, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 151), NAMED_ATTR(dw, 121), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 16)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 11)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 24 */
		    NAMED_ATTR(data_bytes, 1474),
		    NAMED_ATTR_START(apat) {6, 28, 54, 80, 106, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 73), NAMED_ATTR(dw, 45), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 147), NAMED_ATTR(dw, 117), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 46), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 30)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 11)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 25 */
		    NAMED_ATTR(data_bytes, 1588),
		    NAMED_ATTR_START(apat) {6, 32, 58, 84, 110, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 8)},
			    {NAMED_ATTR(bs, 132), NAMED_ATTR(dw, 106), NAMED_ATTR(ns, 8)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 22)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 7)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 26 */
		    NAMED_ATTR(data_bytes, 1706),
		    NAMED_ATTR_START(apat) {6, 30, 58, 86, 114, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 142), NAMED_ATTR(dw, 114), NAMED_ATTR(ns, 10)},
			    {NAMED_ATTR(bs, 46), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 33)},
			    {NAMED_ATTR(bs, 50), NAMED_ATTR(dw, 22), NAMED_ATTR(ns, 28)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 27 */
		    NAMED_ATTR(data_bytes, 1828),
		    NAMED_ATTR_START(apat) {6, 34, 62, 90, 118, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 73), NAMED_ATTR(dw, 45), NAMED_ATTR(ns, 22)},
			    {NAMED_ATTR(bs, 152), NAMED_ATTR(dw, 122), NAMED_ATTR(ns, 8)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 12)},
			    {NAMED_ATTR(bs, 53), NAMED_ATTR(dw, 23), NAMED_ATTR(ns, 8)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 28 */
		    NAMED_ATTR(data_bytes, 1921),
		    NAMED_ATTR_START(apat) {6, 26, 50, 74, 98, 122, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 73), NAMED_ATTR(dw, 45), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 147), NAMED_ATTR(dw, 117), NAMED_ATTR(ns, 3)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 11)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 4)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 29 */
		    NAMED_ATTR(data_bytes, 2051),
		    NAMED_ATTR_START(apat) {6, 30, 54, 78, 102, 126, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 73), NAMED_ATTR(dw, 45), NAMED_ATTR(ns, 21)},
			    {NAMED_ATTR(bs, 146), NAMED_ATTR(dw, 116), NAMED_ATTR(ns, 7)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 53), NAMED_ATTR(dw, 23), NAMED_ATTR(ns, 1)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 30 */
		    NAMED_ATTR(data_bytes, 2185),
		    NAMED_ATTR_START(apat) {6, 26, 52, 78, 104, 130, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 5)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 23)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 15)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 31 */
		    NAMED_ATTR(data_bytes, 2323),
		    NAMED_ATTR_START(apat) {6, 30, 56, 82, 108, 134, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 13)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 23)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 42)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 32 */
		    NAMED_ATTR(data_bytes, 2465),
		    NAMED_ATTR_START(apat) {6, 34, 60, 86, 112, 138, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 10)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 17)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 10)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 33 */
		    NAMED_ATTR(data_bytes, 2611),
		    NAMED_ATTR_START(apat) {6, 30, 58, 86, 114, 142, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 14)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 17)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 11)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 29)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 34 */
		    NAMED_ATTR(data_bytes, 2761),
		    NAMED_ATTR_START(apat) {6, 34, 62, 90, 118, 146, 0} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 14)},
			    {NAMED_ATTR(bs, 145), NAMED_ATTR(dw, 115), NAMED_ATTR(ns, 13)},
			    {NAMED_ATTR(bs, 46), NAMED_ATTR(dw, 16), NAMED_ATTR(ns, 59)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 44)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 35 */
		    NAMED_ATTR(data_bytes, 2876),
		    NAMED_ATTR_START(apat) {6, 30, 54, 78, 102, 126, 150} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 12)},
			    {NAMED_ATTR(bs, 151), NAMED_ATTR(dw, 121), NAMED_ATTR(ns, 12)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 22)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 39)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 36 */
		    NAMED_ATTR(data_bytes, 3034),
		    NAMED_ATTR_START(apat) {6, 24, 50, 76, 102, 128, 154} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 151), NAMED_ATTR(dw, 121), NAMED_ATTR(ns, 6)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 2)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 46)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 37 */
		    NAMED_ATTR(data_bytes, 3196),
		    NAMED_ATTR_START(apat) {6, 28, 54, 80, 106, 132, 158} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 29)},
			    {NAMED_ATTR(bs, 152), NAMED_ATTR(dw, 122), NAMED_ATTR(ns, 17)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 24)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 49)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 38 */
		    NAMED_ATTR(data_bytes, 3362),
		    NAMED_ATTR_START(apat) {6, 32, 58, 84, 110, 136, 162} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 74), NAMED_ATTR(dw, 46), NAMED_ATTR(ns, 13)},
			    {NAMED_ATTR(bs, 152), NAMED_ATTR(dw, 122), NAMED_ATTR(ns, 4)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 42)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 48)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 39 */
		    NAMED_ATTR(data_bytes, 3532),
		    NAMED_ATTR_START(apat) {6, 26, 54, 82, 110, 138, 166} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 40)},
			    {NAMED_ATTR(bs, 147), NAMED_ATTR(dw, 117), NAMED_ATTR(ns, 20)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 10)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 43)}
		    } NAMED_ATTR_END
	    },
	    { /* Version 40 */
		    NAMED_ATTR(data_bytes, 3706),
		    NAMED_ATTR_START(apat) {6, 30, 58, 86, 114, 142, 170} NAMED_ATTR_END,
		    NAMED_ATTR_START(ecc) {
			    {NAMED_ATTR(bs, 75), NAMED_ATTR(dw, 47), NAMED_ATTR(ns, 18)},
			    {NAMED_ATTR(bs, 148), NAMED_ATTR(dw, 118), NAMED_ATTR(ns, 19)},
			    {NAMED_ATTR(bs, 45), NAMED_ATTR(dw, 15), NAMED_ATTR(ns, 20)},
			    {NAMED_ATTR(bs, 54), NAMED_ATTR(dw, 24), NAMED_ATTR(ns, 34)}
		    } NAMED_ATTR_END
	    }
};

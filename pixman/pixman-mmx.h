/*
 * Copyright © 2004 Red Hat, Inc.
 * Copyright © 2005 Trolltech AS
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Red Hat not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  Red Hat makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 *
 * Author:  Søren Sandmann (sandmann@redhat.com)
 *          Lars Knoll (lars@trolltech.com)
 * 
 * Based on work by Owen Taylor
 */
#ifndef _PIXMAN_MMX_H_
#define _PIXMAN_MMX_H_

#ifdef HAVE_DIX_CONFIG_H
#include <dix-config.h>
#endif

#include "pixman-private.h"

#ifdef USE_MMX

#if !defined(__amd64__) && !defined(__x86_64__)
pixman_bool_t pixman_have_mmx(void);
#else
#define pixman_have_mmx() TRUE
#endif

#else
#define pixman_have_mmx() FALSE
#endif

#ifdef USE_MMX

pixman_bool_t
pixman_fill_mmx (uint32_t *bits,
		 int stride,
		 int bpp,
		 int x,
		 int y,
		 int width,
		 int height,
		 uint32_t xor);

#endif /* USE_MMX */

#endif /* _PIXMAN_MMX_H_ */

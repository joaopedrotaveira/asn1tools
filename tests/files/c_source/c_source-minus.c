/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by asn1tools version 0.142.1 Thu Jan  3 16:34:21 2019.
 */

#include <string.h>

#include "c_source-minus.h"

struct encoder_t {
    uint8_t *buf_p;
    ssize_t size;
    ssize_t pos;
};

struct decoder_t {
    const uint8_t *buf_p;
    ssize_t size;
    ssize_t pos;
};

static void encoder_init(struct encoder_t *self_p,
                         uint8_t *buf_p,
                         size_t size)
{
    self_p->buf_p = buf_p;
    self_p->size = (ssize_t)size;
    self_p->pos = 0;
}

static ssize_t encoder_get_result(struct encoder_t *self_p)
{
    return (self_p->pos);
}

static void decoder_init(struct decoder_t *self_p,
                         const uint8_t *buf_p,
                         size_t size)
{
    self_p->buf_p = buf_p;
    self_p->size = (ssize_t)size;
    self_p->pos = 0;
}

static ssize_t decoder_get_result(struct decoder_t *self_p)
{
    return (self_p->pos);
}

static void c_source_minus_foo_a_encode_inner(
    struct encoder_t *encoder_p,
    const struct c_source_minus_foo_a_t *src_p)
{
    (void)encoder_p;
    (void)src_p;
}

static void c_source_minus_foo_a_decode_inner(
    struct decoder_t *decoder_p,
    struct c_source_minus_foo_a_t *dst_p)
{
    (void)decoder_p;
    (void)dst_p;
}

ssize_t c_source_minus_foo_a_encode(
    uint8_t *dst_p,
    size_t size,
    const struct c_source_minus_foo_a_t *src_p)
{
    struct encoder_t encoder;

    encoder_init(&encoder, dst_p, size);
    c_source_minus_foo_a_encode_inner(&encoder, src_p);

    return (encoder_get_result(&encoder));
}

ssize_t c_source_minus_foo_a_decode(
    struct c_source_minus_foo_a_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    struct decoder_t decoder;

    decoder_init(&decoder, src_p, size);
    c_source_minus_foo_a_decode_inner(&decoder, dst_p);

    return (decoder_get_result(&decoder));
}

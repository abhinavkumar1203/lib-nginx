#include <stddef.h>
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

// Stub for ngx_http_huff_decode
ngx_int_t ngx_http_huff_decode(u_char *state, u_char *src, size_t len,
                               u_char **dst, ngx_uint_t lower,
                               ngx_log_t *log)
{
    (void)state;
    (void)src;
    (void)len;
    (void)dst;
    (void)lower;
    (void)log;
    return NGX_OK;
}

// Stub for ngx_http_huff_encode
size_t ngx_http_huff_encode(u_char *src, size_t len, u_char *dst,
                            ngx_uint_t lower)
{
    ngx_memcpy(dst, src, len); // passthrough
    return len;
}

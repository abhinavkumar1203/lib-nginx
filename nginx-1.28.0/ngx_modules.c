#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

extern ngx_module_t ngx_http_core_module;
extern ngx_module_t ngx_http_log_module;
extern ngx_module_t ngx_http_static_module;
extern ngx_module_t ngx_http_autoindex_module;
extern ngx_module_t ngx_http_index_module;
extern ngx_module_t ngx_http_gzip_filter_module;

#ifdef CONFIG_LIBNGINX_HTTP_V2
extern ngx_module_t ngx_http_v2_module;
#endif

ngx_module_t *ngx_modules[] = {
    &ngx_http_core_module,
    &ngx_http_log_module,
    &ngx_http_static_module,
    &ngx_http_autoindex_module,
    &ngx_http_index_module,
    &ngx_http_gzip_filter_module,
#ifdef CONFIG_LIBNGINX_HTTP_V2
    &ngx_http_v2_module,
#endif
    NULL
};

/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2015 Phusion
 *
 *  "Phusion Passenger" is a trademark of Hongli Lai & Ninh Bui.
 *
 *  See LICENSE file for license information.
 */

/*
 * ConfigurationFields.h is automatically generated from ConfigurationFields.h.erb,
 * using definitions from src/ruby_supportlib/phusion_passenger/nginx/config_options.rb.
 * Edits to ConfigurationFields.h will be lost.
 *
 * To update ConfigurationFields.h:
 *   rake nginx
 *
 * To force regeneration of ConfigurationFields.h:
 *   rm -f src/nginx_module/ConfigurationFields.h
 *   rake src/nginx_module/ConfigurationFields.h
 */
 
 typedef struct {
    ngx_http_upstream_conf_t upstream_config;
    ngx_array_t *flushes;
    ngx_array_t *headers_set_len;
    ngx_array_t *headers_set;
    ngx_hash_t   headers_set_hash;

    /** Raw HTTP header data for this location are cached here. */
    ngx_str_t    options_cache;
    ngx_str_t    env_vars_cache;




	ngx_array_t *base_uris;

	ngx_int_t debugger;

	ngx_int_t enabled;

	ngx_array_t *env_vars;

	ngx_int_t friendly_error_pages;

	ngx_uint_t headers_hash_bucket_size;

	ngx_uint_t headers_hash_max_size;

	ngx_array_t *headers_source;

	ngx_int_t load_shell_envvars;

	ngx_int_t max_instances;

	ngx_int_t max_instances_per_app;

	ngx_int_t max_preloader_idle_time;

	ngx_int_t max_request_queue_size;

	ngx_int_t max_request_time;

	ngx_int_t max_requests;

	ngx_int_t memory_limit;

	ngx_int_t min_instances;

	ngx_int_t request_queue_overflow_status_code;

	ngx_int_t resist_deployment_errors;

	ngx_int_t rolling_restarts;

	ngx_int_t start_timeout;

	ngx_int_t sticky_sessions;

	ngx_int_t thread_count;

	ngx_array_t *union_station_filters;

	ngx_int_t union_station_support;

	ngx_str_t app_group_name;

	ngx_str_t app_rights;

	ngx_str_t app_root;

	ngx_str_t app_type;

	ngx_str_t concurrency_model;

	ngx_str_t document_root;

	ngx_str_t environment;

	ngx_str_t fly_with;

	ngx_str_t group;

	ngx_str_t meteor_app_settings;

	ngx_str_t nodejs;

	ngx_str_t python;

	ngx_str_t restart_dir;

	ngx_str_t ruby;

	ngx_str_t spawn_method;

	ngx_str_t startup_file;

	ngx_str_t sticky_sessions_cookie_name;

	ngx_str_t union_station_key;

	ngx_str_t user;

	ngx_str_t vary_turbocache_by_cookie;



#if (NGX_HTTP_CACHE)
    ngx_http_complex_value_t cache_key;
#endif

    /************************************/
} passenger_loc_conf_t;
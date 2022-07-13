/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.20.0/apps/app43/esp32/build_contexts/build_ctx_499743640/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.20.0/apps/app43/esp32/build_contexts/build_ctx_499743640/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stdbool.h>

#include "mgos_config_util.h"


/* struct mgos_config */
static const struct mgos_conf_entry mgos_config_schema_[] = {
    {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 271},
    {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 12},
    {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
    {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
    {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
    {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
    {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
    {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
    {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
    {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
    {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
    {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
    {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
    {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
    {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 5},
    {.type = CONF_TYPE_INT, .key = "esp32_adc_vref", .offset = offsetof(struct mgos_config, sys.esp32_adc_vref)},
    {.type = CONF_TYPE_INT, .key = "esp32_adc_width", .offset = offsetof(struct mgos_config, sys.esp32_adc_width)},
    {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
    {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
    {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
    {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
    {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
    {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
    {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
    {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
    {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 23},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt.max_queue_length)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 23},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt1.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt1.max_queue_length)},
    {.type = CONF_TYPE_OBJECT, .key = "sntp", .offset = offsetof(struct mgos_config, sntp), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sntp.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, sntp.server)},
    {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct mgos_config, sntp.retry_min)},
    {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct mgos_config, sntp.retry_max)},
    {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct mgos_config, sntp.update_interval)},
    {.type = CONF_TYPE_OBJECT, .key = "gcp", .offset = offsetof(struct mgos_config, gcp), .num_desc = 11},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, gcp.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, gcp.server)},
    {.type = CONF_TYPE_STRING, .key = "project", .offset = offsetof(struct mgos_config, gcp.project)},
    {.type = CONF_TYPE_STRING, .key = "region", .offset = offsetof(struct mgos_config, gcp.region)},
    {.type = CONF_TYPE_STRING, .key = "registry", .offset = offsetof(struct mgos_config, gcp.registry)},
    {.type = CONF_TYPE_STRING, .key = "device", .offset = offsetof(struct mgos_config, gcp.device)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, gcp.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, gcp.ca_cert)},
    {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, gcp.token_ttl)},
    {.type = CONF_TYPE_BOOL, .key = "enable_config", .offset = offsetof(struct mgos_config, gcp.enable_config)},
    {.type = CONF_TYPE_BOOL, .key = "enable_commands", .offset = offsetof(struct mgos_config, gcp.enable_commands)},
    {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 12},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
    {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
    {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
    {.type = CONF_TYPE_STRING, .key = "index_files", .offset = offsetof(struct mgos_config, http.index_files)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
    {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
    {.type = CONF_TYPE_STRING, .key = "extra_headers", .offset = offsetof(struct mgos_config, http.extra_headers)},
    {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
    {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
    {.type = CONF_TYPE_OBJECT, .key = "provision", .offset = offsetof(struct mgos_config, provision), .num_desc = 11},
    {.type = CONF_TYPE_OBJECT, .key = "btn", .offset = offsetof(struct mgos_config, provision.btn), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.btn.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, provision.btn.pull_up)},
    {.type = CONF_TYPE_INT, .key = "hold_ms", .offset = offsetof(struct mgos_config, provision.btn.hold_ms)},
    {.type = CONF_TYPE_INT, .key = "inhibit_after_s", .offset = offsetof(struct mgos_config, provision.btn.inhibit_after_s)},
    {.type = CONF_TYPE_OBJECT, .key = "led", .offset = offsetof(struct mgos_config, provision.led), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.led.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, provision.led.active_high)},
    {.type = CONF_TYPE_INT, .key = "stable_state", .offset = offsetof(struct mgos_config, provision.stable_state)},
    {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, provision.timeout)},
    {.type = CONF_TYPE_INT, .key = "max_state", .offset = offsetof(struct mgos_config, provision.max_state)},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 23},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
    {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
    {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
    {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
    {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
    {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
    {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
    {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
    {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 8},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
    {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, rpc.ws.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_cert)},
    {.type = CONF_TYPE_OBJECT, .key = "update", .offset = offsetof(struct mgos_config, update), .num_desc = 8},
    {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, update.timeout)},
    {.type = CONF_TYPE_INT, .key = "commit_timeout", .offset = offsetof(struct mgos_config, update.commit_timeout)},
    {.type = CONF_TYPE_STRING, .key = "url", .offset = offsetof(struct mgos_config, update.url)},
    {.type = CONF_TYPE_INT, .key = "interval", .offset = offsetof(struct mgos_config, update.interval)},
    {.type = CONF_TYPE_STRING, .key = "extra_http_headers", .offset = offsetof(struct mgos_config, update.extra_http_headers)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, update.ssl_ca_file)},
    {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, update.ssl_client_cert_file)},
    {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, update.ssl_server_name)},
    {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 70},
    {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 17},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
    {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
    {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
    {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
    {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
    {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
    {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
    {.type = CONF_TYPE_BOOL, .key = "bandwidth_20mhz", .offset = offsetof(struct mgos_config, wifi.ap.bandwidth_20mhz)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.ap.protocol)},
    {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 15},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta.listen_interval_ms)},
    {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 15},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta1.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta1.listen_interval_ms)},
    {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 15},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta2.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta2.listen_interval_ms)},
    {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
    {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
    {.type = CONF_TYPE_INT, .key = "sta_ps_mode", .offset = offsetof(struct mgos_config, wifi.sta_ps_mode)},
    {.type = CONF_TYPE_BOOL, .key = "sta_all_chan_scan", .offset = offsetof(struct mgos_config, wifi.sta_all_chan_scan)},
    {.type = CONF_TYPE_OBJECT, .key = "cportal", .offset = offsetof(struct mgos_config, cportal), .num_desc = 4},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, cportal.rpc), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, cportal.rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "disable", .offset = offsetof(struct mgos_config, cportal.rpc.disable)},
    {.type = CONF_TYPE_BOOL, .key = "apsta", .offset = offsetof(struct mgos_config, cportal.rpc.apsta)},
    {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
    {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "app", .offset = offsetof(struct mgos_config, app), .num_desc = 23},
    {.type = CONF_TYPE_OBJECT, .key = "par", .offset = offsetof(struct mgos_config, app.par), .num_desc = 0},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, app.pin)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, app.user)},
    {.type = CONF_TYPE_STRING, .key = "home", .offset = offsetof(struct mgos_config, app.home)},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, app.name)},
    {.type = CONF_TYPE_OBJECT, .key = "pwm", .offset = offsetof(struct mgos_config, app.pwm), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "time", .offset = offsetof(struct mgos_config, app.pwm.time)},
    {.type = CONF_TYPE_INT, .key = "val", .offset = offsetof(struct mgos_config, app.pwm.val)},
    {.type = CONF_TYPE_BOOL, .key = "gra", .offset = offsetof(struct mgos_config, app.pwm.gra)},
    {.type = CONF_TYPE_BOOL, .key = "night", .offset = offsetof(struct mgos_config, app.pwm.night)},
    {.type = CONF_TYPE_OBJECT, .key = "mode", .offset = offsetof(struct mgos_config, app.mode), .num_desc = 4},
    {.type = CONF_TYPE_BOOL, .key = "night", .offset = offsetof(struct mgos_config, app.mode.night)},
    {.type = CONF_TYPE_BOOL, .key = "avto", .offset = offsetof(struct mgos_config, app.mode.avto)},
    {.type = CONF_TYPE_BOOL, .key = "boost", .offset = offsetof(struct mgos_config, app.mode.boost)},
    {.type = CONF_TYPE_BOOL, .key = "summer", .offset = offsetof(struct mgos_config, app.mode.summer)},
    {.type = CONF_TYPE_OBJECT, .key = "cfg", .offset = offsetof(struct mgos_config, app.cfg), .num_desc = 1},
    {.type = CONF_TYPE_BOOL, .key = "rst", .offset = offsetof(struct mgos_config, app.cfg.rst)},
    {.type = CONF_TYPE_OBJECT, .key = "night", .offset = offsetof(struct mgos_config, app.night), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "speed", .offset = offsetof(struct mgos_config, app.night.speed)},
    {.type = CONF_TYPE_OBJECT, .key = "old", .offset = offsetof(struct mgos_config, app.old), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "speed", .offset = offsetof(struct mgos_config, app.old.speed)},
    {.type = CONF_TYPE_OBJECT, .key = "boost", .offset = offsetof(struct mgos_config, app.boost), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "time", .offset = offsetof(struct mgos_config, app.boost.time)},
};

/* struct mgos_config_debug */
const struct mgos_conf_entry *mgos_config_debug_get_schema(void) {
  return &mgos_config_schema_[1];
}

void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg) {
  cfg->udp_log_addr = NULL;
  cfg->udp_log_level = 3;
  cfg->mbedtls_level = 1;
  cfg->level = 2;
  cfg->file_level = NULL;
  cfg->event_level = 2;
  cfg->stdout_uart = 0;
  cfg->stderr_uart = 0;
  cfg->factory_reset_gpio = -1;
  cfg->mg_mgr_hexdump_file = NULL;
  cfg->stdout_topic = NULL;
  cfg->stderr_topic = NULL;
}

/* struct mgos_config_sys */
const struct mgos_conf_entry *mgos_config_sys_get_schema(void) {
  return &mgos_config_schema_[14];
}

void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg) {
  cfg->esp32_adc_vref = 0;
  cfg->esp32_adc_width = 3;
  cfg->tz_spec = NULL;
  cfg->wdt_timeout = 30;
  cfg->pref_ota_lib = NULL;
}

/* struct mgos_config_device */
const struct mgos_conf_entry *mgos_config_device_get_schema(void) {
  return &mgos_config_schema_[20];
}

void mgos_config_device_set_defaults(struct mgos_config_device *cfg) {
  cfg->id = "bairFan??????";
  cfg->license = NULL;
  cfg->mac = NULL;
  cfg->public_key = NULL;
  cfg->sn = NULL;
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt_get_schema(void) {
  return &mgos_config_schema_[51];
}

void mgos_config_mqtt_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = false;
  cfg->server = "iot.eclipse.org:1883";
  cfg->client_id = NULL;
  cfg->user = NULL;
  cfg->pass = NULL;
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 3072;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt1_get_schema(void) {
  return &mgos_config_schema_[51];
}

void mgos_config_mqtt1_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = false;
  cfg->server = NULL;
  cfg->client_id = NULL;
  cfg->user = NULL;
  cfg->pass = NULL;
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 3072;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
}

/* struct mgos_config_sntp */
const struct mgos_conf_entry *mgos_config_sntp_get_schema(void) {
  return &mgos_config_schema_[75];
}

void mgos_config_sntp_set_defaults(struct mgos_config_sntp *cfg) {
  cfg->enable = true;
  cfg->server = "time.google.com";
  cfg->retry_min = 1;
  cfg->retry_max = 30;
  cfg->update_interval = 7200;
}

/* struct mgos_config_gcp */
const struct mgos_conf_entry *mgos_config_gcp_get_schema(void) {
  return &mgos_config_schema_[81];
}

void mgos_config_gcp_set_defaults(struct mgos_config_gcp *cfg) {
  cfg->enable = false;
  cfg->server = "mqtt.googleapis.com";
  cfg->project = NULL;
  cfg->region = NULL;
  cfg->registry = NULL;
  cfg->device = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->token_ttl = 83100;
  cfg->enable_config = false;
  cfg->enable_commands = true;
}

/* struct mgos_config_http */
const struct mgos_conf_entry *mgos_config_http_get_schema(void) {
  return &mgos_config_schema_[93];
}

void mgos_config_http_set_defaults(struct mgos_config_http *cfg) {
  cfg->enable = true;
  cfg->listen_addr = "80";
  cfg->document_root = "/";
  cfg->index_files = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->upload_acl = "*";
  cfg->hidden_files = NULL;
  cfg->auth_domain = NULL;
  cfg->auth_file = NULL;
  cfg->extra_headers = NULL;
}

/* struct mgos_config_mjs */
const struct mgos_conf_entry *mgos_config_mjs_get_schema(void) {
  return &mgos_config_schema_[106];
}

void mgos_config_mjs_set_defaults(struct mgos_config_mjs *cfg) {
  cfg->generate_jsc = true;
}

/* struct mgos_config_provision_btn */
const struct mgos_conf_entry *mgos_config_provision_btn_get_schema(void) {
  return &mgos_config_schema_[109];
}

void mgos_config_provision_btn_set_defaults(struct mgos_config_provision_btn *cfg) {
  cfg->pin = 0;
  cfg->pull_up = true;
  cfg->hold_ms = 5000;
  cfg->inhibit_after_s = 0;
}

/* struct mgos_config_provision_led */
const struct mgos_conf_entry *mgos_config_provision_led_get_schema(void) {
  return &mgos_config_schema_[114];
}

void mgos_config_provision_led_set_defaults(struct mgos_config_provision_led *cfg) {
  cfg->pin = 19;
  cfg->active_high = true;
}

/* struct mgos_config_provision */
const struct mgos_conf_entry *mgos_config_provision_get_schema(void) {
  return &mgos_config_schema_[108];
}

void mgos_config_provision_set_defaults(struct mgos_config_provision *cfg) {
  mgos_config_provision_btn_set_defaults(&cfg->btn);
  mgos_config_provision_led_set_defaults(&cfg->led);
  cfg->stable_state = 3;
  cfg->timeout = 120;
  cfg->max_state = 0;
}

/* struct mgos_config_rpc_uart */
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void) {
  return &mgos_config_schema_[130];
}

void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg) {
  cfg->uart_no = 0;
  cfg->baud_rate = 115200;
  cfg->fc_type = 2;
  cfg->dst = NULL;
}

/* struct mgos_config_rpc_ws */
const struct mgos_conf_entry *mgos_config_rpc_ws_get_schema(void) {
  return &mgos_config_schema_[135];
}

void mgos_config_rpc_ws_set_defaults(struct mgos_config_rpc_ws *cfg) {
  cfg->enable = true;
  cfg->server_address = NULL;
  cfg->reconnect_interval_min = 1;
  cfg->reconnect_interval_max = 60;
  cfg->ssl_server_name = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
}

/* struct mgos_config_rpc */
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void) {
  return &mgos_config_schema_[120];
}

void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg) {
  cfg->enable = true;
  cfg->http_enable = true;
  cfg->service_sys_enable = true;
  cfg->max_frame_size = 4096;
  cfg->max_queue_length = 25;
  cfg->default_out_channel_idle_close_timeout = 10;
  cfg->acl_file = NULL;
  cfg->auth_domain = "RPC";
  cfg->auth_file = NULL;
  mgos_config_rpc_uart_set_defaults(&cfg->uart);
  mgos_config_rpc_ws_set_defaults(&cfg->ws);
}

/* struct mgos_config_update */
const struct mgos_conf_entry *mgos_config_update_get_schema(void) {
  return &mgos_config_schema_[144];
}

void mgos_config_update_set_defaults(struct mgos_config_update *cfg) {
  cfg->timeout = 600;
  cfg->commit_timeout = 0;
  cfg->url = NULL;
  cfg->interval = 0;
  cfg->extra_http_headers = NULL;
  cfg->ssl_ca_file = "ca.pem";
  cfg->ssl_client_cert_file = NULL;
  cfg->ssl_server_name = NULL;
}

/* struct mgos_config_wifi_ap */
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void) {
  return &mgos_config_schema_[154];
}

void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg) {
  cfg->enable = true;
  cfg->ssid = "bairFan??????";
  cfg->pass = "bossplast";
  cfg->hidden = false;
  cfg->channel = 6;
  cfg->max_connections = 10;
  cfg->ip = "192.168.4.1";
  cfg->netmask = "255.255.255.0";
  cfg->gw = "192.168.4.1";
  cfg->dhcp_start = "192.168.4.2";
  cfg->dhcp_end = "192.168.4.100";
  cfg->trigger_on_gpio = -1;
  cfg->disable_after = 0;
  cfg->hostname = NULL;
  cfg->keep_enabled = true;
  cfg->bandwidth_20mhz = false;
  cfg->protocol = "BGN";
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void) {
  return &mgos_config_schema_[204];
}

void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void) {
  return &mgos_config_schema_[204];
}

void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void) {
  return &mgos_config_schema_[204];
}

void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}

/* struct mgos_config_wifi */
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void) {
  return &mgos_config_schema_[153];
}

void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg) {
  mgos_config_wifi_ap_set_defaults(&cfg->ap);
  mgos_config_wifi_sta_set_defaults(&cfg->sta);
  mgos_config_wifi_sta1_set_defaults(&cfg->sta1);
  mgos_config_wifi_sta2_set_defaults(&cfg->sta2);
  cfg->sta_cfg_idx = 0;
  cfg->sta_connect_timeout = 30;
  cfg->sta_ps_mode = 0;
  cfg->sta_all_chan_scan = true;
}

/* struct mgos_config_cportal_rpc */
const struct mgos_conf_entry *mgos_config_cportal_rpc_get_schema(void) {
  return &mgos_config_schema_[225];
}

void mgos_config_cportal_rpc_set_defaults(struct mgos_config_cportal_rpc *cfg) {
  cfg->enable = true;
  cfg->disable = true;
  cfg->apsta = false;
}

/* struct mgos_config_cportal */
const struct mgos_conf_entry *mgos_config_cportal_get_schema(void) {
  return &mgos_config_schema_[224];
}

void mgos_config_cportal_set_defaults(struct mgos_config_cportal *cfg) {
  mgos_config_cportal_rpc_set_defaults(&cfg->rpc);
}

/* struct mgos_config_board_led1 */
const struct mgos_conf_entry *mgos_config_board_led1_get_schema(void) {
  return &mgos_config_schema_[230];
}

void mgos_config_board_led1_set_defaults(struct mgos_config_board_led1 *cfg) {
  cfg->pin = 13;
  cfg->active_high = true;
}

/* struct mgos_config_board_led2 */
const struct mgos_conf_entry *mgos_config_board_led2_get_schema(void) {
  return &mgos_config_schema_[233];
}

void mgos_config_board_led2_set_defaults(struct mgos_config_board_led2 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}

/* struct mgos_config_board_led3 */
const struct mgos_conf_entry *mgos_config_board_led3_get_schema(void) {
  return &mgos_config_schema_[236];
}

void mgos_config_board_led3_set_defaults(struct mgos_config_board_led3 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}

/* struct mgos_config_board_btn1 */
const struct mgos_conf_entry *mgos_config_board_btn1_get_schema(void) {
  return &mgos_config_schema_[239];
}

void mgos_config_board_btn1_set_defaults(struct mgos_config_board_btn1 *cfg) {
  cfg->pin = 0;
  cfg->pull_up = true;
}

/* struct mgos_config_board_btn2 */
const struct mgos_conf_entry *mgos_config_board_btn2_get_schema(void) {
  return &mgos_config_schema_[242];
}

void mgos_config_board_btn2_set_defaults(struct mgos_config_board_btn2 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}

/* struct mgos_config_board_btn3 */
const struct mgos_conf_entry *mgos_config_board_btn3_get_schema(void) {
  return &mgos_config_schema_[245];
}

void mgos_config_board_btn3_set_defaults(struct mgos_config_board_btn3 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}

/* struct mgos_config_board */
const struct mgos_conf_entry *mgos_config_board_get_schema(void) {
  return &mgos_config_schema_[229];
}

void mgos_config_board_set_defaults(struct mgos_config_board *cfg) {
  mgos_config_board_led1_set_defaults(&cfg->led1);
  mgos_config_board_led2_set_defaults(&cfg->led2);
  mgos_config_board_led3_set_defaults(&cfg->led3);
  mgos_config_board_btn1_set_defaults(&cfg->btn1);
  mgos_config_board_btn2_set_defaults(&cfg->btn2);
  mgos_config_board_btn3_set_defaults(&cfg->btn3);
}

/* struct mgos_config_app_par */
const struct mgos_conf_entry *mgos_config_app_par_get_schema(void) {
  return &mgos_config_schema_[249];
}

void mgos_config_app_par_set_defaults(struct mgos_config_app_par *cfg) {
  (void) cfg;
}

/* struct mgos_config_app_pwm */
const struct mgos_conf_entry *mgos_config_app_pwm_get_schema(void) {
  return &mgos_config_schema_[254];
}

void mgos_config_app_pwm_set_defaults(struct mgos_config_app_pwm *cfg) {
  cfg->time = 70000;
  cfg->val = 0;
  cfg->gra = true;
  cfg->night = false;
}

/* struct mgos_config_app_mode */
const struct mgos_conf_entry *mgos_config_app_mode_get_schema(void) {
  return &mgos_config_schema_[259];
}

void mgos_config_app_mode_set_defaults(struct mgos_config_app_mode *cfg) {
  cfg->night = false;
  cfg->avto = false;
  cfg->boost = false;
  cfg->summer = false;
}

/* struct mgos_config_app_cfg */
const struct mgos_conf_entry *mgos_config_app_cfg_get_schema(void) {
  return &mgos_config_schema_[264];
}

void mgos_config_app_cfg_set_defaults(struct mgos_config_app_cfg *cfg) {
  cfg->rst = true;
}

/* struct mgos_config_app_night */
const struct mgos_conf_entry *mgos_config_app_night_get_schema(void) {
  return &mgos_config_schema_[266];
}

void mgos_config_app_night_set_defaults(struct mgos_config_app_night *cfg) {
  cfg->speed = 2;
}

/* struct mgos_config_app_old */
const struct mgos_conf_entry *mgos_config_app_old_get_schema(void) {
  return &mgos_config_schema_[268];
}

void mgos_config_app_old_set_defaults(struct mgos_config_app_old *cfg) {
  cfg->speed = 0;
}

/* struct mgos_config_app_boost */
const struct mgos_conf_entry *mgos_config_app_boost_get_schema(void) {
  return &mgos_config_schema_[270];
}

void mgos_config_app_boost_set_defaults(struct mgos_config_app_boost *cfg) {
  cfg->time = 3600000;
}

/* struct mgos_config_app */
const struct mgos_conf_entry *mgos_config_app_get_schema(void) {
  return &mgos_config_schema_[248];
}

void mgos_config_app_set_defaults(struct mgos_config_app *cfg) {
  mgos_config_app_par_set_defaults(&cfg->par);
  cfg->pin = 4;
  cfg->user = "user";
  cfg->home = "dom";
  cfg->name = "name";
  mgos_config_app_pwm_set_defaults(&cfg->pwm);
  mgos_config_app_mode_set_defaults(&cfg->mode);
  mgos_config_app_cfg_set_defaults(&cfg->cfg);
  mgos_config_app_night_set_defaults(&cfg->night);
  mgos_config_app_old_set_defaults(&cfg->old);
  mgos_config_app_boost_set_defaults(&cfg->boost);
}

/* struct mgos_config */
const struct mgos_conf_entry *mgos_config_get_schema(void) {
  return &mgos_config_schema_[0];
}

void mgos_config_set_defaults(struct mgos_config *cfg) {
  mgos_config_debug_set_defaults(&cfg->debug);
  mgos_config_sys_set_defaults(&cfg->sys);
  mgos_config_device_set_defaults(&cfg->device);
  cfg->conf_acl = "*";
  mgos_config_mqtt_set_defaults(&cfg->mqtt);
  mgos_config_mqtt1_set_defaults(&cfg->mqtt1);
  mgos_config_sntp_set_defaults(&cfg->sntp);
  mgos_config_gcp_set_defaults(&cfg->gcp);
  mgos_config_http_set_defaults(&cfg->http);
  mgos_config_mjs_set_defaults(&cfg->mjs);
  mgos_config_provision_set_defaults(&cfg->provision);
  mgos_config_rpc_set_defaults(&cfg->rpc);
  mgos_config_update_set_defaults(&cfg->update);
  mgos_config_wifi_set_defaults(&cfg->wifi);
  mgos_config_cportal_set_defaults(&cfg->cportal);
  mgos_config_board_set_defaults(&cfg->board);
  mgos_config_app_set_defaults(&cfg->app);
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Accessors */

/* debug */
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg) { return &cfg->debug; }

/* debug.udp_log_addr */
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg) { return cfg->debug.udp_log_addr; }
const char * mgos_config_get_default_debug_udp_log_addr(void) { return NULL; }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.udp_log_addr, v); }

/* debug.udp_log_level */
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg) { return cfg->debug.udp_log_level; }
int mgos_config_get_default_debug_udp_log_level(void) { return 3; }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) { cfg->debug.udp_log_level = v; }

/* debug.mbedtls_level */
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg) { return cfg->debug.mbedtls_level; }
int mgos_config_get_default_debug_mbedtls_level(void) { return 1; }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) { cfg->debug.mbedtls_level = v; }

/* debug.level */
int mgos_config_get_debug_level(const struct mgos_config *cfg) { return cfg->debug.level; }
int mgos_config_get_default_debug_level(void) { return 2; }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) { cfg->debug.level = v; }

/* debug.file_level */
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg) { return cfg->debug.file_level; }
const char * mgos_config_get_default_debug_file_level(void) { return NULL; }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.file_level, v); }

/* debug.event_level */
int mgos_config_get_debug_event_level(const struct mgos_config *cfg) { return cfg->debug.event_level; }
int mgos_config_get_default_debug_event_level(void) { return 2; }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) { cfg->debug.event_level = v; }

/* debug.stdout_uart */
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg) { return cfg->debug.stdout_uart; }
int mgos_config_get_default_debug_stdout_uart(void) { return 0; }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) { cfg->debug.stdout_uart = v; }

/* debug.stderr_uart */
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg) { return cfg->debug.stderr_uart; }
int mgos_config_get_default_debug_stderr_uart(void) { return 0; }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) { cfg->debug.stderr_uart = v; }

/* debug.factory_reset_gpio */
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg) { return cfg->debug.factory_reset_gpio; }
int mgos_config_get_default_debug_factory_reset_gpio(void) { return -1; }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) { cfg->debug.factory_reset_gpio = v; }

/* debug.mg_mgr_hexdump_file */
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg) { return cfg->debug.mg_mgr_hexdump_file; }
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void) { return NULL; }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v); }

/* debug.stdout_topic */
const char * mgos_config_get_debug_stdout_topic(const struct mgos_config *cfg) { return cfg->debug.stdout_topic; }
const char * mgos_config_get_default_debug_stdout_topic(void) { return NULL; }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stdout_topic, v); }

/* debug.stderr_topic */
const char * mgos_config_get_debug_stderr_topic(const struct mgos_config *cfg) { return cfg->debug.stderr_topic; }
const char * mgos_config_get_default_debug_stderr_topic(void) { return NULL; }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stderr_topic, v); }

/* sys */
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg) { return &cfg->sys; }

/* sys.esp32_adc_vref */
int mgos_config_get_sys_esp32_adc_vref(const struct mgos_config *cfg) { return cfg->sys.esp32_adc_vref; }
int mgos_config_get_default_sys_esp32_adc_vref(void) { return 0; }
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int v) { cfg->sys.esp32_adc_vref = v; }

/* sys.esp32_adc_width */
int mgos_config_get_sys_esp32_adc_width(const struct mgos_config *cfg) { return cfg->sys.esp32_adc_width; }
int mgos_config_get_default_sys_esp32_adc_width(void) { return 3; }
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int v) { cfg->sys.esp32_adc_width = v; }

/* sys.tz_spec */
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg) { return cfg->sys.tz_spec; }
const char * mgos_config_get_default_sys_tz_spec(void) { return NULL; }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.tz_spec, v); }

/* sys.wdt_timeout */
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg) { return cfg->sys.wdt_timeout; }
int mgos_config_get_default_sys_wdt_timeout(void) { return 30; }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) { cfg->sys.wdt_timeout = v; }

/* sys.pref_ota_lib */
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg) { return cfg->sys.pref_ota_lib; }
const char * mgos_config_get_default_sys_pref_ota_lib(void) { return NULL; }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.pref_ota_lib, v); }

/* device */
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg) { return &cfg->device; }

/* device.id */
const char * mgos_config_get_device_id(const struct mgos_config *cfg) { return cfg->device.id; }
const char * mgos_config_get_default_device_id(void) { return "bairFan??????"; }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.id, v); }

/* device.license */
const char * mgos_config_get_device_license(const struct mgos_config *cfg) { return cfg->device.license; }
const char * mgos_config_get_default_device_license(void) { return NULL; }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.license, v); }

/* device.mac */
const char * mgos_config_get_device_mac(const struct mgos_config *cfg) { return cfg->device.mac; }
const char * mgos_config_get_default_device_mac(void) { return NULL; }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.mac, v); }

/* device.public_key */
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg) { return cfg->device.public_key; }
const char * mgos_config_get_default_device_public_key(void) { return NULL; }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.public_key, v); }

/* device.sn */
const char * mgos_config_get_device_sn(const struct mgos_config *cfg) { return cfg->device.sn; }
const char * mgos_config_get_default_device_sn(void) { return NULL; }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.sn, v); }

/* conf_acl */
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg) { return cfg->conf_acl; }
const char * mgos_config_get_default_conf_acl(void) { return "*"; }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->conf_acl, v); }

/* mqtt */
const struct mgos_config_mqtt *mgos_config_get_mqtt(const struct mgos_config *cfg) { return &cfg->mqtt; }

/* mqtt.enable */
int mgos_config_get_mqtt_enable(const struct mgos_config *cfg) { return cfg->mqtt.enable; }
int mgos_config_get_default_mqtt_enable(void) { return false; }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v) { cfg->mqtt.enable = v; }

/* mqtt.server */
const char * mgos_config_get_mqtt_server(const struct mgos_config *cfg) { return cfg->mqtt.server; }
const char * mgos_config_get_default_mqtt_server(void) { return "iot.eclipse.org:1883"; }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.server, v); }

/* mqtt.client_id */
const char * mgos_config_get_mqtt_client_id(const struct mgos_config *cfg) { return cfg->mqtt.client_id; }
const char * mgos_config_get_default_mqtt_client_id(void) { return NULL; }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.client_id, v); }

/* mqtt.user */
const char * mgos_config_get_mqtt_user(const struct mgos_config *cfg) { return cfg->mqtt.user; }
const char * mgos_config_get_default_mqtt_user(void) { return NULL; }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.user, v); }

/* mqtt.pass */
const char * mgos_config_get_mqtt_pass(const struct mgos_config *cfg) { return cfg->mqtt.pass; }
const char * mgos_config_get_default_mqtt_pass(void) { return NULL; }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.pass, v); }

/* mqtt.reconnect_timeout_min */
double mgos_config_get_mqtt_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_min; }
double mgos_config_get_default_mqtt_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_min = v; }

/* mqtt.reconnect_timeout_max */
double mgos_config_get_mqtt_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_max; }
double mgos_config_get_default_mqtt_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_max = v; }

/* mqtt.ssl_cert */
const char * mgos_config_get_mqtt_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cert; }
const char * mgos_config_get_default_mqtt_ssl_cert(void) { return NULL; }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cert, v); }

/* mqtt.ssl_key */
const char * mgos_config_get_mqtt_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_key; }
const char * mgos_config_get_default_mqtt_ssl_key(void) { return NULL; }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_key, v); }

/* mqtt.ssl_ca_cert */
const char * mgos_config_get_mqtt_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, v); }

/* mqtt.ssl_cipher_suites */
const char * mgos_config_get_mqtt_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, v); }

/* mqtt.ssl_psk_identity */
const char * mgos_config_get_mqtt_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, v); }

/* mqtt.ssl_psk_key */
const char * mgos_config_get_mqtt_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_key; }
const char * mgos_config_get_default_mqtt_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, v); }

/* mqtt.clean_session */
int mgos_config_get_mqtt_clean_session(const struct mgos_config *cfg) { return cfg->mqtt.clean_session; }
int mgos_config_get_default_mqtt_clean_session(void) { return true; }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt.clean_session = v; }

/* mqtt.keep_alive */
int mgos_config_get_mqtt_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt.keep_alive; }
int mgos_config_get_default_mqtt_keep_alive(void) { return 60; }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt.keep_alive = v; }

/* mqtt.will_topic */
const char * mgos_config_get_mqtt_will_topic(const struct mgos_config *cfg) { return cfg->mqtt.will_topic; }
const char * mgos_config_get_default_mqtt_will_topic(void) { return NULL; }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_topic, v); }

/* mqtt.will_message */
const char * mgos_config_get_mqtt_will_message(const struct mgos_config *cfg) { return cfg->mqtt.will_message; }
const char * mgos_config_get_default_mqtt_will_message(void) { return NULL; }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_message, v); }

/* mqtt.will_retain */
int mgos_config_get_mqtt_will_retain(const struct mgos_config *cfg) { return cfg->mqtt.will_retain; }
int mgos_config_get_default_mqtt_will_retain(void) { return false; }
void mgos_config_set_mqtt_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt.will_retain = v; }

/* mqtt.max_qos */
int mgos_config_get_mqtt_max_qos(const struct mgos_config *cfg) { return cfg->mqtt.max_qos; }
int mgos_config_get_default_mqtt_max_qos(void) { return 2; }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt.max_qos = v; }

/* mqtt.recv_mbuf_limit */
int mgos_config_get_mqtt_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt.recv_mbuf_limit; }
int mgos_config_get_default_mqtt_recv_mbuf_limit(void) { return 3072; }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt.recv_mbuf_limit = v; }

/* mqtt.require_time */
int mgos_config_get_mqtt_require_time(const struct mgos_config *cfg) { return cfg->mqtt.require_time; }
int mgos_config_get_default_mqtt_require_time(void) { return false; }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v) { cfg->mqtt.require_time = v; }

/* mqtt.cloud_events */
int mgos_config_get_mqtt_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt.cloud_events; }
int mgos_config_get_default_mqtt_cloud_events(void) { return true; }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt.cloud_events = v; }

/* mqtt.max_queue_length */
int mgos_config_get_mqtt_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt.max_queue_length; }
int mgos_config_get_default_mqtt_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt.max_queue_length = v; }

/* mqtt1 */
const struct mgos_config_mqtt *mgos_config_get_mqtt1(const struct mgos_config *cfg) { return &cfg->mqtt1; }

/* mqtt1.enable */
int mgos_config_get_mqtt1_enable(const struct mgos_config *cfg) { return cfg->mqtt1.enable; }
int mgos_config_get_default_mqtt1_enable(void) { return false; }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v) { cfg->mqtt1.enable = v; }

/* mqtt1.server */
const char * mgos_config_get_mqtt1_server(const struct mgos_config *cfg) { return cfg->mqtt1.server; }
const char * mgos_config_get_default_mqtt1_server(void) { return NULL; }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.server, v); }

/* mqtt1.client_id */
const char * mgos_config_get_mqtt1_client_id(const struct mgos_config *cfg) { return cfg->mqtt1.client_id; }
const char * mgos_config_get_default_mqtt1_client_id(void) { return NULL; }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.client_id, v); }

/* mqtt1.user */
const char * mgos_config_get_mqtt1_user(const struct mgos_config *cfg) { return cfg->mqtt1.user; }
const char * mgos_config_get_default_mqtt1_user(void) { return NULL; }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.user, v); }

/* mqtt1.pass */
const char * mgos_config_get_mqtt1_pass(const struct mgos_config *cfg) { return cfg->mqtt1.pass; }
const char * mgos_config_get_default_mqtt1_pass(void) { return NULL; }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.pass, v); }

/* mqtt1.reconnect_timeout_min */
double mgos_config_get_mqtt1_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_min; }
double mgos_config_get_default_mqtt1_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_min = v; }

/* mqtt1.reconnect_timeout_max */
double mgos_config_get_mqtt1_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_max; }
double mgos_config_get_default_mqtt1_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_max = v; }

/* mqtt1.ssl_cert */
const char * mgos_config_get_mqtt1_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cert; }
const char * mgos_config_get_default_mqtt1_ssl_cert(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cert, v); }

/* mqtt1.ssl_key */
const char * mgos_config_get_mqtt1_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_key; }
const char * mgos_config_get_default_mqtt1_ssl_key(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_key, v); }

/* mqtt1.ssl_ca_cert */
const char * mgos_config_get_mqtt1_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt1_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, v); }

/* mqtt1.ssl_cipher_suites */
const char * mgos_config_get_mqtt1_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt1_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, v); }

/* mqtt1.ssl_psk_identity */
const char * mgos_config_get_mqtt1_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt1_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, v); }

/* mqtt1.ssl_psk_key */
const char * mgos_config_get_mqtt1_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_key; }
const char * mgos_config_get_default_mqtt1_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, v); }

/* mqtt1.clean_session */
int mgos_config_get_mqtt1_clean_session(const struct mgos_config *cfg) { return cfg->mqtt1.clean_session; }
int mgos_config_get_default_mqtt1_clean_session(void) { return true; }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt1.clean_session = v; }

/* mqtt1.keep_alive */
int mgos_config_get_mqtt1_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt1.keep_alive; }
int mgos_config_get_default_mqtt1_keep_alive(void) { return 60; }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt1.keep_alive = v; }

/* mqtt1.will_topic */
const char * mgos_config_get_mqtt1_will_topic(const struct mgos_config *cfg) { return cfg->mqtt1.will_topic; }
const char * mgos_config_get_default_mqtt1_will_topic(void) { return NULL; }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_topic, v); }

/* mqtt1.will_message */
const char * mgos_config_get_mqtt1_will_message(const struct mgos_config *cfg) { return cfg->mqtt1.will_message; }
const char * mgos_config_get_default_mqtt1_will_message(void) { return NULL; }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_message, v); }

/* mqtt1.will_retain */
int mgos_config_get_mqtt1_will_retain(const struct mgos_config *cfg) { return cfg->mqtt1.will_retain; }
int mgos_config_get_default_mqtt1_will_retain(void) { return false; }
void mgos_config_set_mqtt1_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt1.will_retain = v; }

/* mqtt1.max_qos */
int mgos_config_get_mqtt1_max_qos(const struct mgos_config *cfg) { return cfg->mqtt1.max_qos; }
int mgos_config_get_default_mqtt1_max_qos(void) { return 2; }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt1.max_qos = v; }

/* mqtt1.recv_mbuf_limit */
int mgos_config_get_mqtt1_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt1.recv_mbuf_limit; }
int mgos_config_get_default_mqtt1_recv_mbuf_limit(void) { return 3072; }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt1.recv_mbuf_limit = v; }

/* mqtt1.require_time */
int mgos_config_get_mqtt1_require_time(const struct mgos_config *cfg) { return cfg->mqtt1.require_time; }
int mgos_config_get_default_mqtt1_require_time(void) { return false; }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v) { cfg->mqtt1.require_time = v; }

/* mqtt1.cloud_events */
int mgos_config_get_mqtt1_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt1.cloud_events; }
int mgos_config_get_default_mqtt1_cloud_events(void) { return true; }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt1.cloud_events = v; }

/* mqtt1.max_queue_length */
int mgos_config_get_mqtt1_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt1.max_queue_length; }
int mgos_config_get_default_mqtt1_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt1_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt1.max_queue_length = v; }

/* sntp */
const struct mgos_config_sntp *mgos_config_get_sntp(const struct mgos_config *cfg) { return &cfg->sntp; }

/* sntp.enable */
int mgos_config_get_sntp_enable(const struct mgos_config *cfg) { return cfg->sntp.enable; }
int mgos_config_get_default_sntp_enable(void) { return true; }
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int v) { cfg->sntp.enable = v; }

/* sntp.server */
const char * mgos_config_get_sntp_server(const struct mgos_config *cfg) { return cfg->sntp.server; }
const char * mgos_config_get_default_sntp_server(void) { return "time.google.com"; }
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sntp.server, v); }

/* sntp.retry_min */
int mgos_config_get_sntp_retry_min(const struct mgos_config *cfg) { return cfg->sntp.retry_min; }
int mgos_config_get_default_sntp_retry_min(void) { return 1; }
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int v) { cfg->sntp.retry_min = v; }

/* sntp.retry_max */
int mgos_config_get_sntp_retry_max(const struct mgos_config *cfg) { return cfg->sntp.retry_max; }
int mgos_config_get_default_sntp_retry_max(void) { return 30; }
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int v) { cfg->sntp.retry_max = v; }

/* sntp.update_interval */
int mgos_config_get_sntp_update_interval(const struct mgos_config *cfg) { return cfg->sntp.update_interval; }
int mgos_config_get_default_sntp_update_interval(void) { return 7200; }
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int v) { cfg->sntp.update_interval = v; }

/* gcp */
const struct mgos_config_gcp *mgos_config_get_gcp(const struct mgos_config *cfg) { return &cfg->gcp; }

/* gcp.enable */
int mgos_config_get_gcp_enable(const struct mgos_config *cfg) { return cfg->gcp.enable; }
int mgos_config_get_default_gcp_enable(void) { return false; }
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int v) { cfg->gcp.enable = v; }

/* gcp.server */
const char * mgos_config_get_gcp_server(const struct mgos_config *cfg) { return cfg->gcp.server; }
const char * mgos_config_get_default_gcp_server(void) { return "mqtt.googleapis.com"; }
void mgos_config_set_gcp_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.server, v); }

/* gcp.project */
const char * mgos_config_get_gcp_project(const struct mgos_config *cfg) { return cfg->gcp.project; }
const char * mgos_config_get_default_gcp_project(void) { return NULL; }
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.project, v); }

/* gcp.region */
const char * mgos_config_get_gcp_region(const struct mgos_config *cfg) { return cfg->gcp.region; }
const char * mgos_config_get_default_gcp_region(void) { return NULL; }
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.region, v); }

/* gcp.registry */
const char * mgos_config_get_gcp_registry(const struct mgos_config *cfg) { return cfg->gcp.registry; }
const char * mgos_config_get_default_gcp_registry(void) { return NULL; }
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.registry, v); }

/* gcp.device */
const char * mgos_config_get_gcp_device(const struct mgos_config *cfg) { return cfg->gcp.device; }
const char * mgos_config_get_default_gcp_device(void) { return NULL; }
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.device, v); }

/* gcp.key */
const char * mgos_config_get_gcp_key(const struct mgos_config *cfg) { return cfg->gcp.key; }
const char * mgos_config_get_default_gcp_key(void) { return NULL; }
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.key, v); }

/* gcp.ca_cert */
const char * mgos_config_get_gcp_ca_cert(const struct mgos_config *cfg) { return cfg->gcp.ca_cert; }
const char * mgos_config_get_default_gcp_ca_cert(void) { return NULL; }
void mgos_config_set_gcp_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.ca_cert, v); }

/* gcp.token_ttl */
int mgos_config_get_gcp_token_ttl(const struct mgos_config *cfg) { return cfg->gcp.token_ttl; }
int mgos_config_get_default_gcp_token_ttl(void) { return 83100; }
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int v) { cfg->gcp.token_ttl = v; }

/* gcp.enable_config */
int mgos_config_get_gcp_enable_config(const struct mgos_config *cfg) { return cfg->gcp.enable_config; }
int mgos_config_get_default_gcp_enable_config(void) { return false; }
void mgos_config_set_gcp_enable_config(struct mgos_config *cfg, int v) { cfg->gcp.enable_config = v; }

/* gcp.enable_commands */
int mgos_config_get_gcp_enable_commands(const struct mgos_config *cfg) { return cfg->gcp.enable_commands; }
int mgos_config_get_default_gcp_enable_commands(void) { return true; }
void mgos_config_set_gcp_enable_commands(struct mgos_config *cfg, int v) { cfg->gcp.enable_commands = v; }

/* http */
const struct mgos_config_http *mgos_config_get_http(const struct mgos_config *cfg) { return &cfg->http; }

/* http.enable */
int mgos_config_get_http_enable(const struct mgos_config *cfg) { return cfg->http.enable; }
int mgos_config_get_default_http_enable(void) { return true; }
void mgos_config_set_http_enable(struct mgos_config *cfg, int v) { cfg->http.enable = v; }

/* http.listen_addr */
const char * mgos_config_get_http_listen_addr(const struct mgos_config *cfg) { return cfg->http.listen_addr; }
const char * mgos_config_get_default_http_listen_addr(void) { return "80"; }
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.listen_addr, v); }

/* http.document_root */
const char * mgos_config_get_http_document_root(const struct mgos_config *cfg) { return cfg->http.document_root; }
const char * mgos_config_get_default_http_document_root(void) { return "/"; }
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.document_root, v); }

/* http.index_files */
const char * mgos_config_get_http_index_files(const struct mgos_config *cfg) { return cfg->http.index_files; }
const char * mgos_config_get_default_http_index_files(void) { return NULL; }
void mgos_config_set_http_index_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.index_files, v); }

/* http.ssl_cert */
const char * mgos_config_get_http_ssl_cert(const struct mgos_config *cfg) { return cfg->http.ssl_cert; }
const char * mgos_config_get_default_http_ssl_cert(void) { return NULL; }
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_cert, v); }

/* http.ssl_key */
const char * mgos_config_get_http_ssl_key(const struct mgos_config *cfg) { return cfg->http.ssl_key; }
const char * mgos_config_get_default_http_ssl_key(void) { return NULL; }
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_key, v); }

/* http.ssl_ca_cert */
const char * mgos_config_get_http_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->http.ssl_ca_cert; }
const char * mgos_config_get_default_http_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_ca_cert, v); }

/* http.upload_acl */
const char * mgos_config_get_http_upload_acl(const struct mgos_config *cfg) { return cfg->http.upload_acl; }
const char * mgos_config_get_default_http_upload_acl(void) { return "*"; }
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.upload_acl, v); }

/* http.hidden_files */
const char * mgos_config_get_http_hidden_files(const struct mgos_config *cfg) { return cfg->http.hidden_files; }
const char * mgos_config_get_default_http_hidden_files(void) { return NULL; }
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.hidden_files, v); }

/* http.auth_domain */
const char * mgos_config_get_http_auth_domain(const struct mgos_config *cfg) { return cfg->http.auth_domain; }
const char * mgos_config_get_default_http_auth_domain(void) { return NULL; }
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_domain, v); }

/* http.auth_file */
const char * mgos_config_get_http_auth_file(const struct mgos_config *cfg) { return cfg->http.auth_file; }
const char * mgos_config_get_default_http_auth_file(void) { return NULL; }
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_file, v); }

/* http.extra_headers */
const char * mgos_config_get_http_extra_headers(const struct mgos_config *cfg) { return cfg->http.extra_headers; }
const char * mgos_config_get_default_http_extra_headers(void) { return NULL; }
void mgos_config_set_http_extra_headers(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.extra_headers, v); }

/* mjs */
const struct mgos_config_mjs *mgos_config_get_mjs(const struct mgos_config *cfg) { return &cfg->mjs; }

/* mjs.generate_jsc */
int mgos_config_get_mjs_generate_jsc(const struct mgos_config *cfg) { return cfg->mjs.generate_jsc; }
int mgos_config_get_default_mjs_generate_jsc(void) { return true; }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v) { cfg->mjs.generate_jsc = v; }

/* provision */
const struct mgos_config_provision *mgos_config_get_provision(const struct mgos_config *cfg) { return &cfg->provision; }

/* provision.btn */
const struct mgos_config_provision_btn *mgos_config_get_provision_btn(const struct mgos_config *cfg) { return &cfg->provision.btn; }

/* provision.btn.pin */
int mgos_config_get_provision_btn_pin(const struct mgos_config *cfg) { return cfg->provision.btn.pin; }
int mgos_config_get_default_provision_btn_pin(void) { return 0; }
void mgos_config_set_provision_btn_pin(struct mgos_config *cfg, int v) { cfg->provision.btn.pin = v; }

/* provision.btn.pull_up */
int mgos_config_get_provision_btn_pull_up(const struct mgos_config *cfg) { return cfg->provision.btn.pull_up; }
int mgos_config_get_default_provision_btn_pull_up(void) { return true; }
void mgos_config_set_provision_btn_pull_up(struct mgos_config *cfg, int v) { cfg->provision.btn.pull_up = v; }

/* provision.btn.hold_ms */
int mgos_config_get_provision_btn_hold_ms(const struct mgos_config *cfg) { return cfg->provision.btn.hold_ms; }
int mgos_config_get_default_provision_btn_hold_ms(void) { return 5000; }
void mgos_config_set_provision_btn_hold_ms(struct mgos_config *cfg, int v) { cfg->provision.btn.hold_ms = v; }

/* provision.btn.inhibit_after_s */
int mgos_config_get_provision_btn_inhibit_after_s(const struct mgos_config *cfg) { return cfg->provision.btn.inhibit_after_s; }
int mgos_config_get_default_provision_btn_inhibit_after_s(void) { return 0; }
void mgos_config_set_provision_btn_inhibit_after_s(struct mgos_config *cfg, int v) { cfg->provision.btn.inhibit_after_s = v; }

/* provision.led */
const struct mgos_config_provision_led *mgos_config_get_provision_led(const struct mgos_config *cfg) { return &cfg->provision.led; }

/* provision.led.pin */
int mgos_config_get_provision_led_pin(const struct mgos_config *cfg) { return cfg->provision.led.pin; }
int mgos_config_get_default_provision_led_pin(void) { return 19; }
void mgos_config_set_provision_led_pin(struct mgos_config *cfg, int v) { cfg->provision.led.pin = v; }

/* provision.led.active_high */
int mgos_config_get_provision_led_active_high(const struct mgos_config *cfg) { return cfg->provision.led.active_high; }
int mgos_config_get_default_provision_led_active_high(void) { return true; }
void mgos_config_set_provision_led_active_high(struct mgos_config *cfg, int v) { cfg->provision.led.active_high = v; }

/* provision.stable_state */
int mgos_config_get_provision_stable_state(const struct mgos_config *cfg) { return cfg->provision.stable_state; }
int mgos_config_get_default_provision_stable_state(void) { return 3; }
void mgos_config_set_provision_stable_state(struct mgos_config *cfg, int v) { cfg->provision.stable_state = v; }

/* provision.timeout */
int mgos_config_get_provision_timeout(const struct mgos_config *cfg) { return cfg->provision.timeout; }
int mgos_config_get_default_provision_timeout(void) { return 120; }
void mgos_config_set_provision_timeout(struct mgos_config *cfg, int v) { cfg->provision.timeout = v; }

/* provision.max_state */
int mgos_config_get_provision_max_state(const struct mgos_config *cfg) { return cfg->provision.max_state; }
int mgos_config_get_default_provision_max_state(void) { return 0; }
void mgos_config_set_provision_max_state(struct mgos_config *cfg, int v) { cfg->provision.max_state = v; }

/* rpc */
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg) { return &cfg->rpc; }

/* rpc.enable */
int mgos_config_get_rpc_enable(const struct mgos_config *cfg) { return cfg->rpc.enable; }
int mgos_config_get_default_rpc_enable(void) { return true; }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) { cfg->rpc.enable = v; }

/* rpc.http_enable */
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg) { return cfg->rpc.http_enable; }
int mgos_config_get_default_rpc_http_enable(void) { return true; }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) { cfg->rpc.http_enable = v; }

/* rpc.service_sys_enable */
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg) { return cfg->rpc.service_sys_enable; }
int mgos_config_get_default_rpc_service_sys_enable(void) { return true; }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) { cfg->rpc.service_sys_enable = v; }

/* rpc.max_frame_size */
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.max_frame_size; }
int mgos_config_get_default_rpc_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.max_frame_size = v; }

/* rpc.max_queue_length */
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg) { return cfg->rpc.max_queue_length; }
int mgos_config_get_default_rpc_max_queue_length(void) { return 25; }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) { cfg->rpc.max_queue_length = v; }

/* rpc.default_out_channel_idle_close_timeout */
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg) { return cfg->rpc.default_out_channel_idle_close_timeout; }
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return 10; }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) { cfg->rpc.default_out_channel_idle_close_timeout = v; }

/* rpc.acl_file */
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg) { return cfg->rpc.acl_file; }
const char * mgos_config_get_default_rpc_acl_file(void) { return NULL; }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl_file, v); }

/* rpc.auth_domain */
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg) { return cfg->rpc.auth_domain; }
const char * mgos_config_get_default_rpc_auth_domain(void) { return "RPC"; }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_domain, v); }

/* rpc.auth_file */
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg) { return cfg->rpc.auth_file; }
const char * mgos_config_get_default_rpc_auth_file(void) { return NULL; }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_file, v); }

/* rpc.uart */
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg) { return &cfg->rpc.uart; }

/* rpc.uart.uart_no */
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg) { return cfg->rpc.uart.uart_no; }
int mgos_config_get_default_rpc_uart_uart_no(void) { return 0; }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) { cfg->rpc.uart.uart_no = v; }

/* rpc.uart.baud_rate */
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg) { return cfg->rpc.uart.baud_rate; }
int mgos_config_get_default_rpc_uart_baud_rate(void) { return 115200; }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) { cfg->rpc.uart.baud_rate = v; }

/* rpc.uart.fc_type */
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg) { return cfg->rpc.uart.fc_type; }
int mgos_config_get_default_rpc_uart_fc_type(void) { return 2; }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) { cfg->rpc.uart.fc_type = v; }

/* rpc.uart.dst */
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg) { return cfg->rpc.uart.dst; }
const char * mgos_config_get_default_rpc_uart_dst(void) { return NULL; }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.uart.dst, v); }

/* rpc.ws */
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(const struct mgos_config *cfg) { return &cfg->rpc.ws; }

/* rpc.ws.enable */
int mgos_config_get_rpc_ws_enable(const struct mgos_config *cfg) { return cfg->rpc.ws.enable; }
int mgos_config_get_default_rpc_ws_enable(void) { return true; }
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v) { cfg->rpc.ws.enable = v; }

/* rpc.ws.server_address */
const char * mgos_config_get_rpc_ws_server_address(const struct mgos_config *cfg) { return cfg->rpc.ws.server_address; }
const char * mgos_config_get_default_rpc_ws_server_address(void) { return NULL; }
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.server_address, v); }

/* rpc.ws.reconnect_interval_min */
int mgos_config_get_rpc_ws_reconnect_interval_min(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_min; }
int mgos_config_get_default_rpc_ws_reconnect_interval_min(void) { return 1; }
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_min = v; }

/* rpc.ws.reconnect_interval_max */
int mgos_config_get_rpc_ws_reconnect_interval_max(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_max; }
int mgos_config_get_default_rpc_ws_reconnect_interval_max(void) { return 60; }
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_max = v; }

/* rpc.ws.ssl_server_name */
const char * mgos_config_get_rpc_ws_ssl_server_name(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_server_name; }
const char * mgos_config_get_default_rpc_ws_ssl_server_name(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, v); }

/* rpc.ws.ssl_cert */
const char * mgos_config_get_rpc_ws_ssl_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_cert, v); }

/* rpc.ws.ssl_key */
const char * mgos_config_get_rpc_ws_ssl_key(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_key; }
const char * mgos_config_get_default_rpc_ws_ssl_key(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_key, v); }

/* rpc.ws.ssl_ca_cert */
const char * mgos_config_get_rpc_ws_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_ca_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_cert, v); }

/* update */
const struct mgos_config_update *mgos_config_get_update(const struct mgos_config *cfg) { return &cfg->update; }

/* update.timeout */
int mgos_config_get_update_timeout(const struct mgos_config *cfg) { return cfg->update.timeout; }
int mgos_config_get_default_update_timeout(void) { return 600; }
void mgos_config_set_update_timeout(struct mgos_config *cfg, int v) { cfg->update.timeout = v; }

/* update.commit_timeout */
int mgos_config_get_update_commit_timeout(const struct mgos_config *cfg) { return cfg->update.commit_timeout; }
int mgos_config_get_default_update_commit_timeout(void) { return 0; }
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int v) { cfg->update.commit_timeout = v; }

/* update.url */
const char * mgos_config_get_update_url(const struct mgos_config *cfg) { return cfg->update.url; }
const char * mgos_config_get_default_update_url(void) { return NULL; }
void mgos_config_set_update_url(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.url, v); }

/* update.interval */
int mgos_config_get_update_interval(const struct mgos_config *cfg) { return cfg->update.interval; }
int mgos_config_get_default_update_interval(void) { return 0; }
void mgos_config_set_update_interval(struct mgos_config *cfg, int v) { cfg->update.interval = v; }

/* update.extra_http_headers */
const char * mgos_config_get_update_extra_http_headers(const struct mgos_config *cfg) { return cfg->update.extra_http_headers; }
const char * mgos_config_get_default_update_extra_http_headers(void) { return NULL; }
void mgos_config_set_update_extra_http_headers(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.extra_http_headers, v); }

/* update.ssl_ca_file */
const char * mgos_config_get_update_ssl_ca_file(const struct mgos_config *cfg) { return cfg->update.ssl_ca_file; }
const char * mgos_config_get_default_update_ssl_ca_file(void) { return "ca.pem"; }
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_ca_file, v); }

/* update.ssl_client_cert_file */
const char * mgos_config_get_update_ssl_client_cert_file(const struct mgos_config *cfg) { return cfg->update.ssl_client_cert_file; }
const char * mgos_config_get_default_update_ssl_client_cert_file(void) { return NULL; }
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_client_cert_file, v); }

/* update.ssl_server_name */
const char * mgos_config_get_update_ssl_server_name(const struct mgos_config *cfg) { return cfg->update.ssl_server_name; }
const char * mgos_config_get_default_update_ssl_server_name(void) { return NULL; }
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_server_name, v); }

/* wifi */
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg) { return &cfg->wifi; }

/* wifi.ap */
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg) { return &cfg->wifi.ap; }

/* wifi.ap.enable */
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg) { return cfg->wifi.ap.enable; }
int mgos_config_get_default_wifi_ap_enable(void) { return true; }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) { cfg->wifi.ap.enable = v; }

/* wifi.ap.ssid */
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg) { return cfg->wifi.ap.ssid; }
const char * mgos_config_get_default_wifi_ap_ssid(void) { return "bairFan??????"; }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ssid, v); }

/* wifi.ap.pass */
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg) { return cfg->wifi.ap.pass; }
const char * mgos_config_get_default_wifi_ap_pass(void) { return "bossplast"; }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.pass, v); }

/* wifi.ap.hidden */
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg) { return cfg->wifi.ap.hidden; }
int mgos_config_get_default_wifi_ap_hidden(void) { return false; }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) { cfg->wifi.ap.hidden = v; }

/* wifi.ap.channel */
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg) { return cfg->wifi.ap.channel; }
int mgos_config_get_default_wifi_ap_channel(void) { return 6; }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) { cfg->wifi.ap.channel = v; }

/* wifi.ap.max_connections */
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg) { return cfg->wifi.ap.max_connections; }
int mgos_config_get_default_wifi_ap_max_connections(void) { return 10; }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) { cfg->wifi.ap.max_connections = v; }

/* wifi.ap.ip */
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg) { return cfg->wifi.ap.ip; }
const char * mgos_config_get_default_wifi_ap_ip(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ip, v); }

/* wifi.ap.netmask */
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg) { return cfg->wifi.ap.netmask; }
const char * mgos_config_get_default_wifi_ap_netmask(void) { return "255.255.255.0"; }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.netmask, v); }

/* wifi.ap.gw */
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg) { return cfg->wifi.ap.gw; }
const char * mgos_config_get_default_wifi_ap_gw(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.gw, v); }

/* wifi.ap.dhcp_start */
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_start; }
const char * mgos_config_get_default_wifi_ap_dhcp_start(void) { return "192.168.4.2"; }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v); }

/* wifi.ap.dhcp_end */
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_end; }
const char * mgos_config_get_default_wifi_ap_dhcp_end(void) { return "192.168.4.100"; }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v); }

/* wifi.ap.trigger_on_gpio */
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg) { return cfg->wifi.ap.trigger_on_gpio; }
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void) { return -1; }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) { cfg->wifi.ap.trigger_on_gpio = v; }

/* wifi.ap.disable_after */
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg) { return cfg->wifi.ap.disable_after; }
int mgos_config_get_default_wifi_ap_disable_after(void) { return 0; }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) { cfg->wifi.ap.disable_after = v; }

/* wifi.ap.hostname */
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg) { return cfg->wifi.ap.hostname; }
const char * mgos_config_get_default_wifi_ap_hostname(void) { return NULL; }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.hostname, v); }

/* wifi.ap.keep_enabled */
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg) { return cfg->wifi.ap.keep_enabled; }
int mgos_config_get_default_wifi_ap_keep_enabled(void) { return true; }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v) { cfg->wifi.ap.keep_enabled = v; }

/* wifi.ap.bandwidth_20mhz */
int mgos_config_get_wifi_ap_bandwidth_20mhz(const struct mgos_config *cfg) { return cfg->wifi.ap.bandwidth_20mhz; }
int mgos_config_get_default_wifi_ap_bandwidth_20mhz(void) { return false; }
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v) { cfg->wifi.ap.bandwidth_20mhz = v; }

/* wifi.ap.protocol */
const char * mgos_config_get_wifi_ap_protocol(const struct mgos_config *cfg) { return cfg->wifi.ap.protocol; }
const char * mgos_config_get_default_wifi_ap_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_ap_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.protocol, v); }

/* wifi.sta */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg) { return &cfg->wifi.sta; }

/* wifi.sta.enable */
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg) { return cfg->wifi.sta.enable; }
int mgos_config_get_default_wifi_sta_enable(void) { return false; }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta.enable = v; }

/* wifi.sta.ssid */
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta.ssid; }
const char * mgos_config_get_default_wifi_sta_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ssid, v); }

/* wifi.sta.pass */
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg) { return cfg->wifi.sta.pass; }
const char * mgos_config_get_default_wifi_sta_pass(void) { return NULL; }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.pass, v); }

/* wifi.sta.user */
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg) { return cfg->wifi.sta.user; }
const char * mgos_config_get_default_wifi_sta_user(void) { return NULL; }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.user, v); }

/* wifi.sta.anon_identity */
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta.anon_identity; }
const char * mgos_config_get_default_wifi_sta_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v); }

/* wifi.sta.cert */
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.cert; }
const char * mgos_config_get_default_wifi_sta_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.cert, v); }

/* wifi.sta.key */
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg) { return cfg->wifi.sta.key; }
const char * mgos_config_get_default_wifi_sta_key(void) { return NULL; }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.key, v); }

/* wifi.sta.ca_cert */
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.ca_cert; }
const char * mgos_config_get_default_wifi_sta_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v); }

/* wifi.sta.ip */
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg) { return cfg->wifi.sta.ip; }
const char * mgos_config_get_default_wifi_sta_ip(void) { return NULL; }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ip, v); }

/* wifi.sta.netmask */
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta.netmask; }
const char * mgos_config_get_default_wifi_sta_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.netmask, v); }

/* wifi.sta.gw */
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg) { return cfg->wifi.sta.gw; }
const char * mgos_config_get_default_wifi_sta_gw(void) { return NULL; }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.gw, v); }

/* wifi.sta.nameserver */
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta.nameserver; }
const char * mgos_config_get_default_wifi_sta_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.nameserver, v); }

/* wifi.sta.dhcp_hostname */
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v); }

/* wifi.sta.protocol */
const char * mgos_config_get_wifi_sta_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta.protocol; }
const char * mgos_config_get_default_wifi_sta_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.protocol, v); }

/* wifi.sta.listen_interval_ms */
int mgos_config_get_wifi_sta_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta.listen_interval_ms; }
int mgos_config_get_default_wifi_sta_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta.listen_interval_ms = v; }

/* wifi.sta1 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg) { return &cfg->wifi.sta1; }

/* wifi.sta1.enable */
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg) { return cfg->wifi.sta1.enable; }
int mgos_config_get_default_wifi_sta1_enable(void) { return false; }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta1.enable = v; }

/* wifi.sta1.ssid */
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.ssid; }
const char * mgos_config_get_default_wifi_sta1_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ssid, v); }

/* wifi.sta1.pass */
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg) { return cfg->wifi.sta1.pass; }
const char * mgos_config_get_default_wifi_sta1_pass(void) { return NULL; }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.pass, v); }

/* wifi.sta1.user */
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg) { return cfg->wifi.sta1.user; }
const char * mgos_config_get_default_wifi_sta1_user(void) { return NULL; }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.user, v); }

/* wifi.sta1.anon_identity */
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta1.anon_identity; }
const char * mgos_config_get_default_wifi_sta1_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v); }

/* wifi.sta1.cert */
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.cert; }
const char * mgos_config_get_default_wifi_sta1_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.cert, v); }

/* wifi.sta1.key */
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg) { return cfg->wifi.sta1.key; }
const char * mgos_config_get_default_wifi_sta1_key(void) { return NULL; }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.key, v); }

/* wifi.sta1.ca_cert */
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.ca_cert; }
const char * mgos_config_get_default_wifi_sta1_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v); }

/* wifi.sta1.ip */
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg) { return cfg->wifi.sta1.ip; }
const char * mgos_config_get_default_wifi_sta1_ip(void) { return NULL; }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ip, v); }

/* wifi.sta1.netmask */
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta1.netmask; }
const char * mgos_config_get_default_wifi_sta1_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.netmask, v); }

/* wifi.sta1.gw */
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg) { return cfg->wifi.sta1.gw; }
const char * mgos_config_get_default_wifi_sta1_gw(void) { return NULL; }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.gw, v); }

/* wifi.sta1.nameserver */
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta1.nameserver; }
const char * mgos_config_get_default_wifi_sta1_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v); }

/* wifi.sta1.dhcp_hostname */
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta1.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v); }

/* wifi.sta1.protocol */
const char * mgos_config_get_wifi_sta1_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta1.protocol; }
const char * mgos_config_get_default_wifi_sta1_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta1_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.protocol, v); }

/* wifi.sta1.listen_interval_ms */
int mgos_config_get_wifi_sta1_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta1.listen_interval_ms; }
int mgos_config_get_default_wifi_sta1_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta1_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta1.listen_interval_ms = v; }

/* wifi.sta2 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg) { return &cfg->wifi.sta2; }

/* wifi.sta2.enable */
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg) { return cfg->wifi.sta2.enable; }
int mgos_config_get_default_wifi_sta2_enable(void) { return false; }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta2.enable = v; }

/* wifi.sta2.ssid */
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.ssid; }
const char * mgos_config_get_default_wifi_sta2_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ssid, v); }

/* wifi.sta2.pass */
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg) { return cfg->wifi.sta2.pass; }
const char * mgos_config_get_default_wifi_sta2_pass(void) { return NULL; }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.pass, v); }

/* wifi.sta2.user */
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg) { return cfg->wifi.sta2.user; }
const char * mgos_config_get_default_wifi_sta2_user(void) { return NULL; }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.user, v); }

/* wifi.sta2.anon_identity */
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta2.anon_identity; }
const char * mgos_config_get_default_wifi_sta2_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v); }

/* wifi.sta2.cert */
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.cert; }
const char * mgos_config_get_default_wifi_sta2_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.cert, v); }

/* wifi.sta2.key */
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg) { return cfg->wifi.sta2.key; }
const char * mgos_config_get_default_wifi_sta2_key(void) { return NULL; }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.key, v); }

/* wifi.sta2.ca_cert */
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.ca_cert; }
const char * mgos_config_get_default_wifi_sta2_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v); }

/* wifi.sta2.ip */
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg) { return cfg->wifi.sta2.ip; }
const char * mgos_config_get_default_wifi_sta2_ip(void) { return NULL; }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ip, v); }

/* wifi.sta2.netmask */
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta2.netmask; }
const char * mgos_config_get_default_wifi_sta2_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.netmask, v); }

/* wifi.sta2.gw */
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg) { return cfg->wifi.sta2.gw; }
const char * mgos_config_get_default_wifi_sta2_gw(void) { return NULL; }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.gw, v); }

/* wifi.sta2.nameserver */
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta2.nameserver; }
const char * mgos_config_get_default_wifi_sta2_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v); }

/* wifi.sta2.dhcp_hostname */
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta2.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v); }

/* wifi.sta2.protocol */
const char * mgos_config_get_wifi_sta2_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta2.protocol; }
const char * mgos_config_get_default_wifi_sta2_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta2_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.protocol, v); }

/* wifi.sta2.listen_interval_ms */
int mgos_config_get_wifi_sta2_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta2.listen_interval_ms; }
int mgos_config_get_default_wifi_sta2_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta2_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta2.listen_interval_ms = v; }

/* wifi.sta_cfg_idx */
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg) { return cfg->wifi.sta_cfg_idx; }
int mgos_config_get_default_wifi_sta_cfg_idx(void) { return 0; }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v) { cfg->wifi.sta_cfg_idx = v; }

/* wifi.sta_connect_timeout */
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg) { return cfg->wifi.sta_connect_timeout; }
int mgos_config_get_default_wifi_sta_connect_timeout(void) { return 30; }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) { cfg->wifi.sta_connect_timeout = v; }

/* wifi.sta_ps_mode */
int mgos_config_get_wifi_sta_ps_mode(const struct mgos_config *cfg) { return cfg->wifi.sta_ps_mode; }
int mgos_config_get_default_wifi_sta_ps_mode(void) { return 0; }
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v) { cfg->wifi.sta_ps_mode = v; }

/* wifi.sta_all_chan_scan */
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg) { return cfg->wifi.sta_all_chan_scan; }
int mgos_config_get_default_wifi_sta_all_chan_scan(void) { return true; }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v) { cfg->wifi.sta_all_chan_scan = v; }

/* cportal */
const struct mgos_config_cportal *mgos_config_get_cportal(const struct mgos_config *cfg) { return &cfg->cportal; }

/* cportal.rpc */
const struct mgos_config_cportal_rpc *mgos_config_get_cportal_rpc(const struct mgos_config *cfg) { return &cfg->cportal.rpc; }

/* cportal.rpc.enable */
int mgos_config_get_cportal_rpc_enable(const struct mgos_config *cfg) { return cfg->cportal.rpc.enable; }
int mgos_config_get_default_cportal_rpc_enable(void) { return true; }
void mgos_config_set_cportal_rpc_enable(struct mgos_config *cfg, int v) { cfg->cportal.rpc.enable = v; }

/* cportal.rpc.disable */
int mgos_config_get_cportal_rpc_disable(const struct mgos_config *cfg) { return cfg->cportal.rpc.disable; }
int mgos_config_get_default_cportal_rpc_disable(void) { return true; }
void mgos_config_set_cportal_rpc_disable(struct mgos_config *cfg, int v) { cfg->cportal.rpc.disable = v; }

/* cportal.rpc.apsta */
int mgos_config_get_cportal_rpc_apsta(const struct mgos_config *cfg) { return cfg->cportal.rpc.apsta; }
int mgos_config_get_default_cportal_rpc_apsta(void) { return false; }
void mgos_config_set_cportal_rpc_apsta(struct mgos_config *cfg, int v) { cfg->cportal.rpc.apsta = v; }

/* board */
const struct mgos_config_board *mgos_config_get_board(const struct mgos_config *cfg) { return &cfg->board; }

/* board.led1 */
const struct mgos_config_board_led1 *mgos_config_get_board_led1(const struct mgos_config *cfg) { return &cfg->board.led1; }

/* board.led1.pin */
int mgos_config_get_board_led1_pin(const struct mgos_config *cfg) { return cfg->board.led1.pin; }
int mgos_config_get_default_board_led1_pin(void) { return 13; }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v) { cfg->board.led1.pin = v; }

/* board.led1.active_high */
int mgos_config_get_board_led1_active_high(const struct mgos_config *cfg) { return cfg->board.led1.active_high; }
int mgos_config_get_default_board_led1_active_high(void) { return true; }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v) { cfg->board.led1.active_high = v; }

/* board.led2 */
const struct mgos_config_board_led2 *mgos_config_get_board_led2(const struct mgos_config *cfg) { return &cfg->board.led2; }

/* board.led2.pin */
int mgos_config_get_board_led2_pin(const struct mgos_config *cfg) { return cfg->board.led2.pin; }
int mgos_config_get_default_board_led2_pin(void) { return -1; }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v) { cfg->board.led2.pin = v; }

/* board.led2.active_high */
int mgos_config_get_board_led2_active_high(const struct mgos_config *cfg) { return cfg->board.led2.active_high; }
int mgos_config_get_default_board_led2_active_high(void) { return true; }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v) { cfg->board.led2.active_high = v; }

/* board.led3 */
const struct mgos_config_board_led3 *mgos_config_get_board_led3(const struct mgos_config *cfg) { return &cfg->board.led3; }

/* board.led3.pin */
int mgos_config_get_board_led3_pin(const struct mgos_config *cfg) { return cfg->board.led3.pin; }
int mgos_config_get_default_board_led3_pin(void) { return -1; }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v) { cfg->board.led3.pin = v; }

/* board.led3.active_high */
int mgos_config_get_board_led3_active_high(const struct mgos_config *cfg) { return cfg->board.led3.active_high; }
int mgos_config_get_default_board_led3_active_high(void) { return true; }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v) { cfg->board.led3.active_high = v; }

/* board.btn1 */
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(const struct mgos_config *cfg) { return &cfg->board.btn1; }

/* board.btn1.pin */
int mgos_config_get_board_btn1_pin(const struct mgos_config *cfg) { return cfg->board.btn1.pin; }
int mgos_config_get_default_board_btn1_pin(void) { return 0; }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v) { cfg->board.btn1.pin = v; }

/* board.btn1.pull_up */
int mgos_config_get_board_btn1_pull_up(const struct mgos_config *cfg) { return cfg->board.btn1.pull_up; }
int mgos_config_get_default_board_btn1_pull_up(void) { return true; }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn1.pull_up = v; }

/* board.btn2 */
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(const struct mgos_config *cfg) { return &cfg->board.btn2; }

/* board.btn2.pin */
int mgos_config_get_board_btn2_pin(const struct mgos_config *cfg) { return cfg->board.btn2.pin; }
int mgos_config_get_default_board_btn2_pin(void) { return -1; }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v) { cfg->board.btn2.pin = v; }

/* board.btn2.pull_up */
int mgos_config_get_board_btn2_pull_up(const struct mgos_config *cfg) { return cfg->board.btn2.pull_up; }
int mgos_config_get_default_board_btn2_pull_up(void) { return false; }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn2.pull_up = v; }

/* board.btn3 */
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(const struct mgos_config *cfg) { return &cfg->board.btn3; }

/* board.btn3.pin */
int mgos_config_get_board_btn3_pin(const struct mgos_config *cfg) { return cfg->board.btn3.pin; }
int mgos_config_get_default_board_btn3_pin(void) { return -1; }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v) { cfg->board.btn3.pin = v; }

/* board.btn3.pull_up */
int mgos_config_get_board_btn3_pull_up(const struct mgos_config *cfg) { return cfg->board.btn3.pull_up; }
int mgos_config_get_default_board_btn3_pull_up(void) { return false; }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn3.pull_up = v; }

/* app */
const struct mgos_config_app *mgos_config_get_app(const struct mgos_config *cfg) { return &cfg->app; }

/* app.par */
const struct mgos_config_app_par *mgos_config_get_app_par(const struct mgos_config *cfg) { return &cfg->app.par; }

/* app.pin */
int mgos_config_get_app_pin(const struct mgos_config *cfg) { return cfg->app.pin; }
int mgos_config_get_default_app_pin(void) { return 4; }
void mgos_config_set_app_pin(struct mgos_config *cfg, int v) { cfg->app.pin = v; }

/* app.user */
const char * mgos_config_get_app_user(const struct mgos_config *cfg) { return cfg->app.user; }
const char * mgos_config_get_default_app_user(void) { return "user"; }
void mgos_config_set_app_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->app.user, v); }

/* app.home */
const char * mgos_config_get_app_home(const struct mgos_config *cfg) { return cfg->app.home; }
const char * mgos_config_get_default_app_home(void) { return "dom"; }
void mgos_config_set_app_home(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->app.home, v); }

/* app.name */
const char * mgos_config_get_app_name(const struct mgos_config *cfg) { return cfg->app.name; }
const char * mgos_config_get_default_app_name(void) { return "name"; }
void mgos_config_set_app_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->app.name, v); }

/* app.pwm */
const struct mgos_config_app_pwm *mgos_config_get_app_pwm(const struct mgos_config *cfg) { return &cfg->app.pwm; }

/* app.pwm.time */
int mgos_config_get_app_pwm_time(const struct mgos_config *cfg) { return cfg->app.pwm.time; }
int mgos_config_get_default_app_pwm_time(void) { return 70000; }
void mgos_config_set_app_pwm_time(struct mgos_config *cfg, int v) { cfg->app.pwm.time = v; }

/* app.pwm.val */
int mgos_config_get_app_pwm_val(const struct mgos_config *cfg) { return cfg->app.pwm.val; }
int mgos_config_get_default_app_pwm_val(void) { return 0; }
void mgos_config_set_app_pwm_val(struct mgos_config *cfg, int v) { cfg->app.pwm.val = v; }

/* app.pwm.gra */
int mgos_config_get_app_pwm_gra(const struct mgos_config *cfg) { return cfg->app.pwm.gra; }
int mgos_config_get_default_app_pwm_gra(void) { return true; }
void mgos_config_set_app_pwm_gra(struct mgos_config *cfg, int v) { cfg->app.pwm.gra = v; }

/* app.pwm.night */
int mgos_config_get_app_pwm_night(const struct mgos_config *cfg) { return cfg->app.pwm.night; }
int mgos_config_get_default_app_pwm_night(void) { return false; }
void mgos_config_set_app_pwm_night(struct mgos_config *cfg, int v) { cfg->app.pwm.night = v; }

/* app.mode */
const struct mgos_config_app_mode *mgos_config_get_app_mode(const struct mgos_config *cfg) { return &cfg->app.mode; }

/* app.mode.night */
int mgos_config_get_app_mode_night(const struct mgos_config *cfg) { return cfg->app.mode.night; }
int mgos_config_get_default_app_mode_night(void) { return false; }
void mgos_config_set_app_mode_night(struct mgos_config *cfg, int v) { cfg->app.mode.night = v; }

/* app.mode.avto */
int mgos_config_get_app_mode_avto(const struct mgos_config *cfg) { return cfg->app.mode.avto; }
int mgos_config_get_default_app_mode_avto(void) { return false; }
void mgos_config_set_app_mode_avto(struct mgos_config *cfg, int v) { cfg->app.mode.avto = v; }

/* app.mode.boost */
int mgos_config_get_app_mode_boost(const struct mgos_config *cfg) { return cfg->app.mode.boost; }
int mgos_config_get_default_app_mode_boost(void) { return false; }
void mgos_config_set_app_mode_boost(struct mgos_config *cfg, int v) { cfg->app.mode.boost = v; }

/* app.mode.summer */
int mgos_config_get_app_mode_summer(const struct mgos_config *cfg) { return cfg->app.mode.summer; }
int mgos_config_get_default_app_mode_summer(void) { return false; }
void mgos_config_set_app_mode_summer(struct mgos_config *cfg, int v) { cfg->app.mode.summer = v; }

/* app.cfg */
const struct mgos_config_app_cfg *mgos_config_get_app_cfg(const struct mgos_config *cfg) { return &cfg->app.cfg; }

/* app.cfg.rst */
int mgos_config_get_app_cfg_rst(const struct mgos_config *cfg) { return cfg->app.cfg.rst; }
int mgos_config_get_default_app_cfg_rst(void) { return true; }
void mgos_config_set_app_cfg_rst(struct mgos_config *cfg, int v) { cfg->app.cfg.rst = v; }

/* app.night */
const struct mgos_config_app_night *mgos_config_get_app_night(const struct mgos_config *cfg) { return &cfg->app.night; }

/* app.night.speed */
int mgos_config_get_app_night_speed(const struct mgos_config *cfg) { return cfg->app.night.speed; }
int mgos_config_get_default_app_night_speed(void) { return 2; }
void mgos_config_set_app_night_speed(struct mgos_config *cfg, int v) { cfg->app.night.speed = v; }

/* app.old */
const struct mgos_config_app_old *mgos_config_get_app_old(const struct mgos_config *cfg) { return &cfg->app.old; }

/* app.old.speed */
int mgos_config_get_app_old_speed(const struct mgos_config *cfg) { return cfg->app.old.speed; }
int mgos_config_get_default_app_old_speed(void) { return 0; }
void mgos_config_set_app_old_speed(struct mgos_config *cfg, int v) { cfg->app.old.speed = v; }

/* app.boost */
const struct mgos_config_app_boost *mgos_config_get_app_boost(const struct mgos_config *cfg) { return &cfg->app.boost; }

/* app.boost.time */
int mgos_config_get_app_boost_time(const struct mgos_config *cfg) { return cfg->app.boost.time; }
int mgos_config_get_default_app_boost_time(void) { return 3600000; }
void mgos_config_set_app_boost_time(struct mgos_config *cfg, int v) { cfg->app.boost.time = v; }
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}

const struct mgos_conf_entry *mgos_config_schema(void) {
  return mgos_config_get_schema();
}

/* Strings */
static const char *mgos_config_str_table[] = {
  "*",
  "/",
  "192.168.4.1",
  "192.168.4.100",
  "192.168.4.2",
  "255.255.255.0",
  "80",
  "BGN",
  "RPC",
  "bairFan??????",
  "bossplast",
  "ca.pem",
  "dom",
  "iot.eclipse.org:1883",
  "mqtt.googleapis.com",
  "name",
  "time.google.com",
  "user",
};

bool mgos_config_is_default_str(const char *s) {
  int num_str = (sizeof(mgos_config_str_table) / sizeof(mgos_config_str_table[0]));
  for (int i = 0; i < num_str; i++) {
    if (mgos_config_str_table[i] == s) return true;
  }
  return false;
}

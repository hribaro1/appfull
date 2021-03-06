/* This file is auto-generated by mos build, do not edit! */

#include <stdbool.h>
#include <stdio.h>

#include "common/cs_dbg.h"

#include "mgos_app.h"

extern bool mgos_freertos_init(void);
extern bool mgos_mongoose_init(void);
extern bool mgos_ota_common_init(void);
extern bool mgos_vfs_common_init(void);
extern bool mgos_vfs_fs_lfs_init(void);
extern bool mgos_vfs_fs_spiffs_init(void);
extern bool mgos_core_init(void);
extern bool mgos_adc_init(void);
extern bool mgos_mqtt_init(void);
extern bool mgos_sntp_init(void);
extern bool mgos_gcp_init(void);
extern bool mgos_wifi_init(void);
extern bool mgos_http_server_init(void);
extern bool mgos_mbedtls_init(void);
extern bool mgos_mjs_init(void);
extern bool mgos_ota_http_client_init(void);
extern bool mgos_provision_init(void);
extern bool mgos_pwm_init(void);
extern bool mgos_rpc_common_init(void);
extern bool mgos_rpc_loopback_init(void);
extern bool mgos_rpc_service_config_init(void);
extern bool mgos_rpc_service_fs_init(void);
extern bool mgos_rpc_service_ota_init(void);
extern bool mgos_rpc_service_wifi_init(void);
extern bool mgos_rpc_uart_init(void);
extern bool mgos_rpc_ws_init(void);
extern bool mgos_wifi_setup_init(void);


#ifndef MGOS_LIB_INFO_VERSION
struct mgos_lib_info {
  const char *name;
  const char *version;
  const char *repo_version;
  const char *binary_libs;
  bool (*init)(void);
};
#define MGOS_LIB_INFO_VERSION 2
#endif

#ifndef MGOS_MODULE_INFO_VERSION
struct mgos_module_info {
  const char *name;
  const char *repo_version;
};
#define MGOS_MODULE_INFO_VERSION 1
#endif

const struct mgos_lib_info mgos_libs_info[] = {

    // "freertos". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "freertos", .version = "10.2.0", .init = mgos_freertos_init},
#else
    {.name = "freertos", .version = "10.2.0", .repo_version = "f4b5ba5336f2f0fe3b183527790cf82e0644364e", .binary_libs = NULL, .init = mgos_freertos_init},
#endif

    // "mongoose". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "mongoose", .version = "6.18", .init = mgos_mongoose_init},
#else
    {.name = "mongoose", .version = "6.18", .repo_version = "9df33172ca5d64866d9436a977271a801b436896", .binary_libs = "libmongoose-esp32-2.19.0.a:31636365383462653336346339616237353266386439633533313233373535613265316638383933366136303836613738313431636532336361306539656461", .init = mgos_mongoose_init},
#endif

    // "ota-common". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "ota-common", .version = "1.2.1", .init = mgos_ota_common_init},
#else
    {.name = "ota-common", .version = "1.2.1", .repo_version = "11d8daecdc553c8d3bb94a610398ebb0846c6215", .binary_libs = "libota-common-esp32-2.19.0.a:63333633326561333435316335303332643233346531653334306134666362656634346139346435356364663365383631653037666136633363353836623539", .init = mgos_ota_common_init},
#endif

    // "vfs-common". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "vfs-common", .version = "1.0", .init = mgos_vfs_common_init},
#else
    {.name = "vfs-common", .version = "1.0", .repo_version = "df19c4e68e7f0dddde27e9024f3168e30ab03c3d", .binary_libs = NULL, .init = mgos_vfs_common_init},
#endif

    // "vfs-fs-lfs". deps: [ "vfs-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "vfs-fs-lfs", .version = "2.2.0", .init = mgos_vfs_fs_lfs_init},
#else
    {.name = "vfs-fs-lfs", .version = "2.2.0", .repo_version = "13857635705bd936a60ec98c2b1965656daa0bf8", .binary_libs = NULL, .init = mgos_vfs_fs_lfs_init},
#endif

    // "vfs-fs-spiffs". deps: [ "vfs-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "vfs-fs-spiffs", .version = "1.0", .init = mgos_vfs_fs_spiffs_init},
#else
    {.name = "vfs-fs-spiffs", .version = "1.0", .repo_version = "8317dc59356147918d15cb3258e2083cf20f4e3e", .binary_libs = NULL, .init = mgos_vfs_fs_spiffs_init},
#endif

    // "core". deps: [ "freertos" "mongoose" "ota-common" "vfs-common" "vfs-fs-lfs" "vfs-fs-spiffs" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "core", .version = "1.0", .init = mgos_core_init},
#else
    {.name = "core", .version = "1.0", .repo_version = "98abe4a666879cc237784361441855bc48152462", .binary_libs = NULL, .init = mgos_core_init},
#endif

    // "adc". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "adc", .version = "1.0.0", .init = mgos_adc_init},
#else
    {.name = "adc", .version = "1.0.0", .repo_version = "be5f8c8c7b1fc7c8b1abf44b97dd41248f47a2de", .binary_libs = NULL, .init = mgos_adc_init},
#endif

    // "ca-bundle". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "ca-bundle", .version = "1.0", .init = NULL},
#else
    {.name = "ca-bundle", .version = "1.0", .repo_version = "554b6acf2c2b456da2c3f954931d9570e86d162b", .binary_libs = NULL, .init = NULL},
#endif

    // "mqtt". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "mqtt", .version = "1.0", .init = mgos_mqtt_init},
#else
    {.name = "mqtt", .version = "1.0", .repo_version = "761a11e6579182c7d50d56f08dc10d6cc42704e0", .binary_libs = NULL, .init = mgos_mqtt_init},
#endif

    // "sntp". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "sntp", .version = "1.0", .init = mgos_sntp_init},
#else
    {.name = "sntp", .version = "1.0", .repo_version = "dcee9effd890bcf9e27ca0bf62943461d75deee0", .binary_libs = NULL, .init = mgos_sntp_init},
#endif

    // "gcp". deps: [ "ca-bundle" "core" "mqtt" "sntp" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "gcp", .version = "1.0", .init = mgos_gcp_init},
#else
    {.name = "gcp", .version = "1.0", .repo_version = "99f0e1a910d35646ba5dde3a7efe3390310b3ddf", .binary_libs = NULL, .init = mgos_gcp_init},
#endif

    // "wifi". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "wifi", .version = "1.0", .init = mgos_wifi_init},
#else
    {.name = "wifi", .version = "1.0", .repo_version = "2bbac236651ac16220f81b3a732a522b58422477", .binary_libs = NULL, .init = mgos_wifi_init},
#endif

    // "http-server". deps: [ "core" "wifi" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "http-server", .version = "1.0", .init = mgos_http_server_init},
#else
    {.name = "http-server", .version = "1.0", .repo_version = "eeab41a6aa416bc201d5619a4b1039d30294b2c9", .binary_libs = NULL, .init = mgos_http_server_init},
#endif

    // "mbedtls". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "mbedtls", .version = "2.16.6-cesanta1", .init = mgos_mbedtls_init},
#else
    {.name = "mbedtls", .version = "2.16.6-cesanta1", .repo_version = "8216c1a8babe86b04f2930fa00217e440ed9624b", .binary_libs = NULL, .init = mgos_mbedtls_init},
#endif

    // "mjs". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "mjs", .version = "1.0", .init = mgos_mjs_init},
#else
    {.name = "mjs", .version = "1.0", .repo_version = "e1076d2d60ec19450716af3c2605e4388e12b873", .binary_libs = NULL, .init = mgos_mjs_init},
#endif

    // "ota-http-client". deps: [ "core" "ota-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "ota-http-client", .version = "1.0", .init = mgos_ota_http_client_init},
#else
    {.name = "ota-http-client", .version = "1.0", .repo_version = "e2f9fcfcae9e6efb24e6de6b42af6dd483dd675b", .binary_libs = "libota-http-client-esp32-2.19.0.a:66333339656639656538313833656463636362313164376166623230633231363031386439643465643330363964666633613662306632373062393834303965", .init = mgos_ota_http_client_init},
#endif

    // "provision". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "provision", .version = "1.0", .init = mgos_provision_init},
#else
    {.name = "provision", .version = "1.0", .repo_version = "50152525d5db291cdf70e674b2db1726e7a2777b", .binary_libs = NULL, .init = mgos_provision_init},
#endif

    // "pwm". deps: [ "core" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "pwm", .version = "1.0", .init = mgos_pwm_init},
#else
    {.name = "pwm", .version = "1.0", .repo_version = "a0889e7b9a1ba3050184f7fefacbdcc315c4be93", .binary_libs = NULL, .init = mgos_pwm_init},
#endif

    // "rpc-common". deps: [ "core" "http-server" "mongoose" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-common", .version = "1.0", .init = mgos_rpc_common_init},
#else
    {.name = "rpc-common", .version = "1.0", .repo_version = "9686acc677711bb69d2a3bcbdda9356bc6ca8d5c", .binary_libs = NULL, .init = mgos_rpc_common_init},
#endif

    // "rpc-loopback". deps: [ "core" "rpc-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-loopback", .version = "1.0", .init = mgos_rpc_loopback_init},
#else
    {.name = "rpc-loopback", .version = "1.0", .repo_version = "dec04b4ec1205e3fbf017a2cd3a5a3d8eceacd04", .binary_libs = NULL, .init = mgos_rpc_loopback_init},
#endif

    // "rpc-service-config". deps: [ "core" "rpc-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-service-config", .version = "1.0", .init = mgos_rpc_service_config_init},
#else
    {.name = "rpc-service-config", .version = "1.0", .repo_version = "b30e187977d8dafcb4297cff60e036855a7ff531", .binary_libs = NULL, .init = mgos_rpc_service_config_init},
#endif

    // "rpc-service-fs". deps: [ "core" "rpc-common" "vfs-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-service-fs", .version = "1.0", .init = mgos_rpc_service_fs_init},
#else
    {.name = "rpc-service-fs", .version = "1.0", .repo_version = "5dea6ee11e623a0e827a750ee75111d9e15ae1b1", .binary_libs = NULL, .init = mgos_rpc_service_fs_init},
#endif

    // "rpc-service-ota". deps: [ "core" "ota-http-client" "rpc-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-service-ota", .version = "1.0", .init = mgos_rpc_service_ota_init},
#else
    {.name = "rpc-service-ota", .version = "1.0", .repo_version = "136c3e34bf6a831e5fc00e1d59f90fe475445987", .binary_libs = "librpc-service-ota-esp32-2.19.0.a:39613637616161373561366365356461616537626230623963616638636537666530333433626638366664623765656236316230313533363932323333373136", .init = mgos_rpc_service_ota_init},
#endif

    // "rpc-service-wifi". deps: [ "core" "rpc-common" "wifi" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-service-wifi", .version = "1.0", .init = mgos_rpc_service_wifi_init},
#else
    {.name = "rpc-service-wifi", .version = "1.0", .repo_version = "c52837ebbe2b3881a5f6c9e547443486db800861", .binary_libs = NULL, .init = mgos_rpc_service_wifi_init},
#endif

    // "rpc-uart". deps: [ "core" "rpc-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-uart", .version = "1.0", .init = mgos_rpc_uart_init},
#else
    {.name = "rpc-uart", .version = "1.0", .repo_version = "4c68e5d7b3eecb19ccc6128f111a118384ed20b4", .binary_libs = NULL, .init = mgos_rpc_uart_init},
#endif

    // "rpc-ws". deps: [ "core" "http-server" "rpc-common" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "rpc-ws", .version = "1.0", .init = mgos_rpc_ws_init},
#else
    {.name = "rpc-ws", .version = "1.0", .repo_version = "45a8cddaf9ed07d25d76266709705ca6d8dbf5bf", .binary_libs = NULL, .init = mgos_rpc_ws_init},
#endif

    // "wifi-setup". deps: [ "core" "http-server" "rpc-common" "rpc-service-config" "rpc-service-wifi" "rpc-ws" "wifi" ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "wifi-setup", .version = "1.1", .init = mgos_wifi_setup_init},
#else
    {.name = "wifi-setup", .version = "1.1", .repo_version = "677082a8c7806e96752587208c50eb9fe0e38dbb", .binary_libs = NULL, .init = mgos_wifi_setup_init},
#endif

    // "zz_boards". deps: [ ]
#if MGOS_LIB_INFO_VERSION == 1
    {.name = "zz_boards", .version = NULL, .init = NULL},
#else
    {.name = "zz_boards", .version = NULL, .repo_version = "90312821601d8ae5d173829141a4f5057b95c8cb", .binary_libs = NULL, .init = NULL},
#endif

    // Last entry.
    {.name = NULL},
};

const struct mgos_module_info mgos_modules_info[] = {

    {.name = "mbedtls_module", .repo_version = "1e5cc8512a64afaa15f4adc7b8c91581e252e087"},

    {.name = "mjs_module", .repo_version = "4c870e584d2b2a538abcee5307c498cc37e7ef9d"},

    {.name = "mongoose-os", .repo_version = "e4569396b8604ff68aa872c5f08195ffae679a94"},

    // Last entry.
    {.name = NULL},
};

bool mgos_deps_init(void) {
  for (const struct mgos_lib_info *l = mgos_libs_info; l->name != NULL; l++) {
#if MGOS_LIB_INFO_VERSION == 1
    LOG(LL_DEBUG, ("Init %s %s...", l->name, (l->version ? l->version : "")));
#else
    LOG(LL_DEBUG, ("Init %s %s (%s)...",
          l->name,
          (l->version ? l->version : ""),
          (l->repo_version ? l->repo_version : "")));
#endif
    if (l->init != NULL && !l->init()) {
      LOG(LL_ERROR, ("%s init failed", l->name));
      return false;
    }
  }
  for (const struct mgos_module_info *m = mgos_modules_info; m->name != NULL; m++) {
    LOG(LL_DEBUG, ("Module %s %s", m->name, (m->repo_version ? m->repo_version : "")));
  }
  return true;
}

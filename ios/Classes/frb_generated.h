#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
// EXTRA BEGIN
typedef struct DartCObject *WireSyncRust2DartDco;
typedef struct WireSyncRust2DartSse {
  uint8_t *ptr;
  int32_t len;
} WireSyncRust2DartSse;

typedef int64_t DartPort;
typedef bool (*DartPostCObjectFnType)(DartPort port_id, void *message);
void store_dart_post_cobject(DartPostCObjectFnType ptr);
// EXTRA END
typedef struct _Dart_Handle* Dart_Handle;

typedef struct wire_cst_ffi_buf_uri {
  uintptr_t field0;
} wire_cst_ffi_buf_uri;

typedef struct wire_cst_list_prim_u_8_strict {
  uint8_t *ptr;
  int32_t len;
} wire_cst_list_prim_u_8_strict;

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_address(struct wire_cst_ffi_buf_uri *that);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_amount_sats(struct wire_cst_ffi_buf_uri *that);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_as_string(struct wire_cst_ffi_buf_uri *that);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_label(struct wire_cst_ffi_buf_uri *that);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_message(struct wire_cst_ffi_buf_uri *that);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_parse(struct wire_cst_list_prim_u_8_strict *uri);

WireSyncRust2DartDco frbgen_buf_flutter_wire__crate__api__simple__greet(struct wire_cst_list_prim_u_8_strict *name);

void frbgen_buf_flutter_wire__crate__api__simple__init_app(int64_t port_);

void frbgen_buf_flutter_rust_arc_increment_strong_count_RustOpaque_bitcoin_uri_ffiuriUri(const void *ptr);

void frbgen_buf_flutter_rust_arc_decrement_strong_count_RustOpaque_bitcoin_uri_ffiuriUri(const void *ptr);

struct wire_cst_ffi_buf_uri *frbgen_buf_flutter_cst_new_box_autoadd_ffi_buf_uri(void);

uint64_t *frbgen_buf_flutter_cst_new_box_autoadd_u_64(uint64_t value);

struct wire_cst_list_prim_u_8_strict *frbgen_buf_flutter_cst_new_list_prim_u_8_strict(int32_t len);
static int64_t dummy_method_to_enforce_bundling(void) {
    int64_t dummy_var = 0;
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_cst_new_box_autoadd_ffi_buf_uri);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_cst_new_box_autoadd_u_64);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_cst_new_list_prim_u_8_strict);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_rust_arc_decrement_strong_count_RustOpaque_bitcoin_uri_ffiuriUri);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_rust_arc_increment_strong_count_RustOpaque_bitcoin_uri_ffiuriUri);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_address);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_amount_sats);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_as_string);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_label);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_message);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__bitcoin_uri__ffi_buf_uri_parse);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__simple__greet);
    dummy_var ^= ((int64_t) (void*) frbgen_buf_flutter_wire__crate__api__simple__init_app);
    dummy_var ^= ((int64_t) (void*) store_dart_post_cobject);
    return dummy_var;
}

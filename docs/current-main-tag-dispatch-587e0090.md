# Current Main.dll tag dispatcher at `0x587E0090`

`FUN_587e0090` is a 2,297-byte handler called 20 times by two verified
functions: 13 call sites in `0x587BB700` and seven in `0x588C4210`. Both use
receiver `0x58A24598`. The latter passes six 32-bit stack values, consistent
with the handler's `ret 0x18`.

At entry, the handler loads a subobject from receiver offset `+0xDB0` and calls
the virtual function at that subobject's vtable offset `+0x08`. It then reads a
byte selector from its stack argument tuple: values 1 through 14 select one of
14 jump-table case bodies; other values take the default path. The case bodies
call additional helpers and access global state. Byte matching checks the
complete 2,297-byte body and its 135 mapped operand targets.

The selector's domain name, each case's meaning, argument types, subobject
type, and higher-level effect remain unknown. The selector and jump tables are
referenced by the body but lie outside its indexed extent. No gameplay labels
or runtime behavior claims are inferred from the dispatcher structure alone;
no runtime test was performed.

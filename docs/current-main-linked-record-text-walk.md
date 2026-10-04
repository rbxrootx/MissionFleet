# Current Main.dll linked-record text walk

`FUN_587da120` is called once by each of `0x587E0090` and `0x587E3080`. It
allocates fixed-size local text buffers and obtains a record-list head from
global `0x58A247F4 +4`. It follows each record's `+0xCE4` link. For each record,
it reads the word at `+0x6E` and passes that value, fixed address `0x5898D18C`,
and a local buffer to the function pointer at `0x5898C3C4`. It then performs
bounded, null-terminated string copies; a nonzero `+0xCE4` value enters another
text path. Formatter/parser helpers, including `0x5897CE4A`, handle the
resulting buffers.

The original function index listed 1,301 bytes and stopped at `0x587DA635`, in
the middle of `xor ecx, esp`. The mapped bytes continue with the stack-cookie
check call at `0x587DA636`, stack restoration, and `ret` at `0x587DA641`. The
next function starts at `0x587DA650`, after alignment padding. The corrected
complete extent is 1,314 bytes; all 44 mapped operand targets are checked.

Record and buffer types, string/key contents, the function-pointer API, and the
purpose of the text processing remain unidentified. No runtime behavior test
was performed.

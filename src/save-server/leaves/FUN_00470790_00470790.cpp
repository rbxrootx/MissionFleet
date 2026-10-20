// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470790 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_00470790_00470790() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 30 07 47 00: push 0x470730
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x47
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 F8 B7 68 00: call dword ptr [0x68b7f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 C4 72 68 00: mov dword ptr [0x6872c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

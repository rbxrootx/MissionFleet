// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FDCC .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_0041fdcc_0041FDCC() {
    __asm {
        ; Exact mapped bytes E8 13 00 00 00: call 0x41fde4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 58 00 00: call 0x4256a1
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 74 FC 44 00: mov dword ptr [0x44fc74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 58 00 00: call 0x425651
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB E2: fnclex
        __asm _emit 0xdb
        __asm _emit 0xe2
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

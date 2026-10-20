// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004707B0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_004707b0_004707B0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 C4 72 68 00: mov eax, dword ptr [0x6872c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 B7 68 00: call dword ptr [0x68b7f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

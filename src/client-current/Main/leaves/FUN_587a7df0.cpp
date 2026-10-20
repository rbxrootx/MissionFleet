// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7DF0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_587a7df0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 77 0A: ja 0x587a7e03
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 84 81 6C 0A 01 00: mov eax, dword ptr [ecx + eax*4 + 0x10a6c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

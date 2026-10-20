// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9330 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_587c9330() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 3B 81 E4 00 00 00: cmp eax, dword ptr [ecx + 0xe4]
        __asm _emit 0x3b
        __asm _emit 0x81
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 97 C0: seta al
        __asm _emit 0x0f
        __asm _emit 0x97
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

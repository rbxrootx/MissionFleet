// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588634B0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_588634b0() {
    __asm {
        ; Exact mapped bytes 8B 81 A8 00 00 00: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 88 BC 00 00 00: mov dword ptr [eax + 0xbc], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

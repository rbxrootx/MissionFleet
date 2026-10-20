// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414D4C .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_00414d4c_00414D4C() {
    __asm {
        ; Exact mapped bytes 8B 81 F0 00 00 00: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8A 04 08: mov al, byte ptr [eax + ecx]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x08
        ; Exact mapped bytes 83 E0 02: and eax, 2
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414D5F .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_00414d5f_00414D5F() {
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
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 80 08 02: or byte ptr [eax], 2
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004254AB .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_004254ab_004254AB() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 00 08: add dword ptr [eax], 8
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 41 F8: mov eax, dword ptr [ecx - 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 51 FC: mov edx, dword ptr [ecx - 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0xfc
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

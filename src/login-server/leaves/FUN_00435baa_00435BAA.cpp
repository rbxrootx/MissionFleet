// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435BAA .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_00435baa_00435BAA() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 60 08 00: and dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 60 0C 00: and dword ptr [eax + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C7 00 00 D7 43 00: mov dword ptr [eax], 0x43d700
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 0C 54 00 00 00: mov dword ptr [eax + 0xc], 0x54
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 28 D2 D8 42 00: mov dword ptr [eax + 0x28], 0x42d8d2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

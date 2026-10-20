// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786570 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58786570() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x58786586
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 8C 90 E0 02 00 00: mov dword ptr [eax + edx*4 + 0x2e0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

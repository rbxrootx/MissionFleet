// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004153AB .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_004153ab_004153AB() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 F8 FE: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfe
        ; Exact mapped bytes 74 10: je 0x4153c6
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 7C 24 0C 64: cmp word ptr [esp + 0xc], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x64
        ; Exact mapped bytes 74 08: je 0x4153c6
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

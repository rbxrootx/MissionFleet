// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587864D0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_587864d0() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x587864e5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 54 88 60: mov dword ptr [eax + ecx*4 + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x88
        __asm _emit 0x60
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
